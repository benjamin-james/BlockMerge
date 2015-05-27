#include "grid.h"
#include "block.h"

void grid_init(struct grid *g)
{
	int i,j;
	g->w = START_W;
	g->h = START_H;
	g->array = malloc(sizeof(struct tile) * g->w * g->h);
	for (i = 0; i < g->w; i++) {
		for (j = 0; j < g->h; j++) {
			struct tile tmp = {i, j, &no_block};
			g->array[g->w * j + i] = tmp;
		}
	}
}
void grid_resize(struct grid *g, int w, int h)
{
	struct tile *temp = realloc(g->array, w * h * sizeof(struct tile));
	int i,j;
	if (temp)
		g->array = temp;
	else
		return;
	/* Start at the previous end and move to new end */
	for (i = w - 1; i >= 0; i--) {
		for (j = h - 1; j >= 0; j--) {
			struct tile tmp = {i, j, &no_block};
			g->array[w * j + i] = g->array[g->w * j + i];
			g->array[g->w * j + i] = tmp;
		}
	}
	g->w = w;
	g->h = h;
}

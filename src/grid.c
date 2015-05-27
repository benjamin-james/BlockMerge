#include "grid.h"
#include "block.h"
#include "game.h"
#include "array.h"

void grid_init(struct grid *g, int w, int h)
{
	int i,j;
	g->w = w;
	g->h = h;
	g->empty_block = malloc(sizeof(struct block));
	g->tiles = malloc(sizeof(struct tile) * g->w * g->h);
	g->array = array_create(4);
	for (i = 0; i < g->w; i++) {
		for (j = 0; j < g->h; j++) {
			struct tile tmp = {i, j, &g->empty_block};
			g->tiles[g->w * j + i] = tmp;
		}
	}
}
void grid_resize(struct grid *g, int w, int h)
{
	struct tile *temp = realloc(g->tiles, w * h * sizeof(struct tile));
	int i,j;
	if (temp)
		g->tiles = temp;
	else {
		free(g->tiles);
		error("Couldn't resize array");
		return;
	}
	/* Start at the previous end and move to new end */
	for (i = w - 1; i >= 0; i--) {
		for (j = h - 1; j >= 0; j--) {
			struct tile tmp = {i, j, &no_block};
			g->tiles[w * j + i] = g->tiles[g->w * j + i];
			g->tiles[g->w * j + i] = tmp;
		}
	}
	g->w = w;
	g->h = h;
}
void grid_destroy(struct grid *g)
{
	free(g->tiles);
	free(g->empty_block);
}

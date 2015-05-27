#ifndef GRID_H
#define GRID_H

#include "block.h"

struct tile {
	int x, y;
	struct block *b; /* enclosing block */
};
struct grid {
	int w, h;
	struct tile *array;
};

void grid_init(struct grid *g);
void grid_resize(struct grid *g, int w, int h);

#endif

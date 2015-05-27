#ifndef GRID_H
#define GRID_H

#include "block.h"
#include "string.h" /* size_t */

struct grid {
	int w, h;
	struct block **tiles; /* 2d array of pointers */
	struct block *empty_block; /* the empty block */
	struct block *blocks; /* list of all allocated blocks */
	size_t alloc, size;
};

int grid_tile_index(struct grid *g, int x, int y);

void grid_init(struct grid *g, int w, int h);
void grid_destroy(struct grid *g);

#endif

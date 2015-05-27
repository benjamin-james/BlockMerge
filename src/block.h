#ifndef BLOCK_H
#define BLOCK_H

#include "stdbool.h"

struct block {
	int x, y, w, h;
};

bool block_cmp(struct block *a, struct block *b);

#endif

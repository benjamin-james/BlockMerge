#ifndef BLOCK_H
#define BLOCK_H

#include "stdbool.h"

typedef struct block {
	int x, y, w, h;
} *bptr;

bool block_cmp(struct block *a, struct block *b);

#endif

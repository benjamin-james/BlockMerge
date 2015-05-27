#include "stdbool.h"

#include "block.h"

bool block_cmp(struct block *a, struct block *b)
{
	return (a->w == b->w && a->h == b->h);
}

#include "array.h"
#include "game.h"
#include "grid.h"
#include "block.h"

/*
 * necessary functions
 * addRandomBlock(struct grid *g);
 * move(struct grid *g, int direction);
 *  - for each tile
     - 
 * draw(SDL_Renderer *r, struct grid *g);
 * 
 */
int main(int argc, char **argv)
{
	struct array *blocks = array_create(2);
	struct grid g;
	grid_init(&g, 8, 8);
	return 0;
}

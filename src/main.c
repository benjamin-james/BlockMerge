#include "game.h"
#include "block.h"

struct game {
	bptr blocks[8][8];
	unsigned score;
	unsigned moves;
};
/*
 * necessary functions
 * addRandomBlock(struct game *g);
 * move(struct game *g, int direction);
 *  - for each tile
     - 
 * draw(SDL_Renderer *r, struct game *g);
 * hasWon(struct game *g);
 */
int main(int argc, char **argv)
{
	struct game new_game;
	game_init(&new_game);
	return 0;
}
void game_init(struct game *new_game)
{
	int i,j;
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLUMNS; j++)
			new_game->blocks[i][j] = NULL;
	new_game->score = 0;
	new_game->moves = 0;
}


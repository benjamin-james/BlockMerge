#ifndef GAME_H
#define GAME_H
#include "stdio.h"


/* logging macros */
#define debug(str, ...) { \
		fprintf(stderr, "<DEBUG> at %s at line %i in %s: ", __func__, __LINE__, __FILE__); \
		fprintf(stderr, str, ##__VA_ARGS__); }

#define warning(str, ...) { \
		fprintf(stderr, "<WARNING> at %s at line %i in %s: ", __func__, __LINE__, __FILE__); \
		fprintf(stderr, str, ##__VA_ARGS__); }
#define error(str, ...) { \
		fprintf(stderr, "<ERROR> at %s at line %i in %s: ", __func__, __LINE__, __FILE__); \
		fprintf(stderr, str, ##__VA_ARGS__); \
		exit(1); }
#endif

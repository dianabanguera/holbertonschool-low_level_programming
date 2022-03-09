#include "main.h"
#include <stdlib.h>

/**
 * free_grid - libera un array bidimensional de enteros
 * @grid: array a liberar
 * @height: altura del grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

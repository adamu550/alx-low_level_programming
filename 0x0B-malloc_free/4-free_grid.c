#include "main.h"
#include<stdlib.h>
/**
 *free_grid - free memory
 *@grid: the grid to free
 *@height: height
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

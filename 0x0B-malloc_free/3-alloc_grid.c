#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid -
 * @width:
 * @height:
 * Return:
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;
	if (width <= 0 || height <= 0)
		return(NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
		if(grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	for(i = 0; j < width; j++)
	{
			grid[i][j] = 0;

	}
	return(grid);
}

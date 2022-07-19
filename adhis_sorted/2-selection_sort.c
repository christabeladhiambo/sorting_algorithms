#include "sort.h"
/**
  * selection_sort - Sort an array of integers in ascending order
  *                  using the selection sort algorithm.
  * @array: array to sort
  * @size: size of array
  * Description: Prints the array after each swap.
  */
void selection_sort(int *array, size_t size)
{
	size_t i, i2;
	int mini, tmp, indx;

	for (i = 0; i < size; i++)
	{
		mini = array[i];
		for (i2 = i + 1; i2 < size; i2++)
		{
			if (mini > array[i2])
			{
				mini = array[i2];
				indx = i2;
			}
		}
		if (mini != array[i])
		{
			tmp = array[i];
			array[i] = mini;
			array[indx] = tmp;
			print_array(array, size);
		}
	}
}

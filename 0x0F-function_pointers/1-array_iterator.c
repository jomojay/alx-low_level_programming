#include "function_pointers.h"

/**
 * array_iterator - executea an array of  function given as parameters
 * @array: base address of an array of functions
 * @size: size of the array
 * @action: pointer to a needed function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

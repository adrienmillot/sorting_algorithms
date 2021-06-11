#include "sort.h"

void shell_sort(int *array, size_t size)
{
	size_t interval, cLoop1, cLoop2;
	int valueToInsert;

	while (interval < size / 3)
		interval = interval * 3 + 1;

	while (interval > 0)
	{
		for (cLoop1 = interval; cLoop1 < size; cLoop1++)
		{
			valueToInsert = array[cLoop1];
			cLoop2 = cLoop1;

			while (cLoop2 > interval - 1 && array[cLoop2 - interval] >= valueToInsert)
			{
				array[cLoop2] = array[cLoop2 - interval];
				cLoop2 -= interval;
			}

			array[cLoop2] = valueToInsert;
		}

		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}

#include "sort.h"
#include "string.h"

void counting_sort(int *A, size_t prmSize)
{
	unsigned i, j;
	int maxValue = 0, value, index;
	int *B = malloc(sizeof(int) * prmSize), tmp[100];
	memcpy(B, A, sizeof(int) * prmSize);

	for (i = 0; i < prmSize; i++)
		if (A[i] > maxValue)
			maxValue = B[i];

	for (i = 0; (int) i <= maxValue; i++)
		tmp[i] = 0;

	for (j = 0; j < prmSize; j++)
		tmp[B[j]] = tmp[B[j]] + 1;

	for (i = 1; (int) i <= maxValue; i++)
		tmp[i] = tmp[i] + tmp[i - 1];

	print_array(tmp, 100);

	for (j = prmSize - 1; (int) j >= 0; j--)
	{
		value = *(B + j);
		index = tmp[value];
		*(A + index - 1) = value;
		tmp[value] = tmp[value] - 1;
	}
	free(B);
}

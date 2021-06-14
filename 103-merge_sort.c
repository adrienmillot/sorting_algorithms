#include "sort.h"
#include "string.h"

void merge(int *prmArray, int prmStart, int prmMiddle, int prmEnd)
{
	int cLoop1, cLoop2, cLoop3, cLoop4 = 0;
	int size1 = prmMiddle - prmStart + 1;
	int size2 = prmEnd - prmMiddle;
	int size3 = size1 + size2;
	int *tmp1 = malloc(sizeof(int) * size1);
	int *tmp2 = malloc(sizeof(int) * size2);
	int *tmp3 = malloc(sizeof(int) * size3);

	for (cLoop1 = 0; cLoop1 < size1; cLoop1++)
		tmp1[cLoop1] = prmArray[prmStart + cLoop1];

	for (cLoop2 = 0; cLoop2 < size2; cLoop2++)
		tmp2[cLoop2] = prmArray[prmMiddle + 1 + cLoop2];

	cLoop1 = cLoop2 = 0;
	cLoop3 = prmStart;

	while (cLoop1 < size1 && cLoop2 < size2)
	{
		if (tmp1[cLoop1] <= tmp2[cLoop2])
		{
			prmArray[cLoop3] = tmp1[cLoop1];
			tmp3[cLoop4++] = tmp1[cLoop1];
			cLoop1++;
		}
		else
		{
			prmArray[cLoop3] = tmp2[cLoop2];
			tmp3[cLoop4++] = tmp2[cLoop2];
			cLoop2++;
		}
		cLoop3++;
	}

	printf("Merging...\n");
	printf("[left]: ");
	print_array(tmp1, size1);
	printf("[right]: ");
	print_array(tmp2, size2);

	while (cLoop1 < size1)
	{
		prmArray[cLoop3] = tmp1[cLoop1];
		tmp3[cLoop4++] = tmp1[cLoop1];
		cLoop1++;
		cLoop3++;
	}

	while (cLoop2 < size2)
	{
		prmArray[cLoop3] = tmp2[cLoop2];
		tmp3[cLoop4++] = tmp2[cLoop2];
		cLoop2++;
		cLoop3++;
	}
	printf("[Done]: ");
	print_array(tmp3, size3);

	free(tmp1);
	free(tmp2);
	free(tmp3);
}

void sort(int *prmArray, int prmStart, int prmEnd)
{
	int middle;

	if (prmStart < prmEnd)
	{
		middle = (prmStart + prmEnd - 1) / 2;
		sort(prmArray, prmStart, middle);
		sort(prmArray, middle + 1, prmEnd);
		merge(prmArray, prmStart, middle, prmEnd);
	}
}

void merge_sort(int *prmArray, size_t prmSize)
{
	sort(prmArray, 0, prmSize - 1);
}

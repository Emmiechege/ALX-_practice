#include <stdio.h>
#include <stdlib.h>
/*
 * main - calculates the median of a list of numbers
 * passed as command-line arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

/* function to compare two integers for qsort*/
int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Usage: %s <um1> <num2> <num3> ... \n", argv[0]);
		return (1);
	}
	int num_args = argc - 1;
	int numbers[num_args];

	/*parse command line arguments and store in numbers array*/
	for (int i = 1; i < argc; i++)
	{
		numbers[i - 1] = atoi(argv[i]);
	}
	/*sort the array in ascending order */
	qsort(numbers, num_args, sizeof(int), compare);

	/* calculate the median */
	double median;
	if (num_args % 2 == 0)
	{
	/*if the no of elements is even,median is average of the middle 2 values*/
		median = (double)(numbers[num_args / 2 - 1] + numbers[num_args / 2]) / 2.0;

	}

	else 
	{
	/* if the no of elements is odd, the median is the middle value*/
		median = (double)number[num_args / 2];
	}

	printf("Median: %2lf\n", median);

	return (0);
}


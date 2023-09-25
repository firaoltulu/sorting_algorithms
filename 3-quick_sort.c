#include "sort.h"

/**
 * local_function_three - This function positions of
 * two elements into an array.
 * @one: Int array pointer that points to the
 * array to be sorted.
 * @two: ssize_t contains the first array element.
 * @three: ssize_t contains the last array element.
 *
 * Returns: Nothing(Void).
 */
void local_function_three(int *one, ssize_t two, ssize_t three)
{
	int four;

	four = one[two];
	one[two] = one[three];
	one[three] = four;
}

/**
 * local_function_two - This  function sorting.
 * @one: Int array pointer that points to the
 * array to be sorted.
 * @two: ssize_t contains the first array element.
 * @three: ssize_t contains the last array element.
 * @four: int that represents the array size.
 *
 * Return: Int.
 */
int local_function_two(int *one, ssize_t two, ssize_t three, size_t four)
{
	int five = one[three];
	ssize_t six = two, seven;

	for (seven = two; seven < three; seven++)
	{
		if (one[seven] < five)
		{
			if (one[six] != one[seven])
			{
				local_function_three(one, six, seven);
				print_array(one, four);
			}
			six++;
		}
	}
	if (one[six] != one[three])
	{
		local_function_three(one, six, three);
		print_array(one, four);
	}
	return (six);
}

/**
 * local_function_one - This Function sorts an array of integers.
 * @one: Int array pointer that points to the
 * array to be sorted.
 * @two: ssize_t contains the first array element.
 * @three: ssize_t contains the last array element.
 * @four: int that represents the array size.
 *
 * Returns: Nothing(Void).
 */
void local_function_one(int *one, ssize_t two, ssize_t three, int four)
{
	ssize_t five = 0;

	if (two < three)
	{
		five = local_function_two(one, two, three, four);

		local_function_one(one, two, five - 1, four);
		local_function_one(one, five + 1, three, four);
	}
}

/**
 * quick_sort - THis function sorts an array of integers
 * in ascending order using the Quick sort algorithm.
 * @array: Int array pointer that points to the array
 * to be sorted.
 * @size: size_t that contains the array size.
 *
 * Returns: Nothing(Void).
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
	{
		return;
	}
	else
	{
		local_function_one(array, 0, size - 1, size);
	}
}

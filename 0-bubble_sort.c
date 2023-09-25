#include "sort.h"

/**
 * bubble_sort - This Function sort array
 * elements using  Bubble sort algorithm.
 * @array: Int pointer that points
 * to the array to be sorted.
 * @size: size_t that contains the array size.
 */
void bubble_sort(int *array, size_t size)
{

    size_t one, two, three = 0;

    if (size < 2)
    {
        return;
    }
    else
    {
        for (one = 0; one < size; one++)
        {
            for (two = 0; two < size; two++)
            {
                if (array[two] > array[two + 1] && array[two + 1])
                {
                    three = array[two];
                    array[two] = array[two + 1];
                    array[two + 1] = three;
                    print_array(array, size);
                }
            }
        }
    }
}

#include "sort.h"
/**
 * selection_sort - This function sorts an
 * array of integers in ascending order
 * using the Selection sort algorithm.
 *
 * @size: Int pointer that points to the
 * size of the array.
 * @array: size_t that contains the list
 * with numbers.
 *
 * return: Nothing(Void).
 */
void selection_sort(int *array, size_t size)
{
    size_t one, two;
    int three, four, five = 0;

    if (array == NULL)
    {
        return;
    }
    else
    {
        for (one = 0; one < size; one++)
        {
            three = one;
            five = 0;
            for (two = one + 1; two < size; two++)
            {
                if (array[three] > array[two])
                {
                    three = two;
                    five += 1;
                }
            }
            four = array[one];
            array[one] = array[three];
            array[three] = four;
            if (five != 0)
                print_array(array, size);
        }
    }
}

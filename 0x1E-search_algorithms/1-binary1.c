#include "search_algos.h"

void print_array (int array[], size_t size, int value)
{
    unsigned int i, mid; 
    mid = (size - 1) / 2;

    printf("Searching in array:");
    if (value <= array[mid] )
    {
        for ( i = 0; i < (mid - 1); i++)
        {
            printf("%d, ", array[i]);
        }
        printf("%d", array[mid - 1]);
        printf("\n");
    }
    if (value > array[mid] )
    {
        for ( i = mid + 1; i < size - 1; i++)
        {
            printf("%d, ", array[i]);
        }
        printf("%d", array[mid - 1]);
        printf("\n");
    }
}


/**
 * binary_search- Function that search for a value in an array of int
 * Using the binary serach algorithm
 *
 * @array: Pointer to array of elements
 * @size: Elements in an array
 * @value: Value to search for
 *
 * Return: -1 if not value fuond otherwise the array index
 */

int binary_search(int *array, size_t size, int value)
{
    unsigned int i; 
    
    
    printf("Searching in array:");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d", array[size - 1]);
    printf("\n");
    
    print_array(array, size, value);  
    print_array(array, size, value);
    print_array(array, size, value);  
    

    
    return (-1);
}

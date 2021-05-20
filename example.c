#include <stdio.h>
#include "sort.h"

void main()
{
    printf("\n\tWELCOME TO THE BUBBLE SORT\n\n");
    
    int size;
    printf("ENTER THE SIZE AN ARRAY :: ");
    scanf("%d", &size);

    int unsorted[size];

    printf("\n\t++++ENTER AN ELEMENT IN ARRAY++++\n ");
    for (int i = 0; i < size; i++)
    {
        printf("ENTER AN ELEMENT {%d} :: ", i);
        scanf("%d", &unsorted[i]);
    }

    sort(unsorted, size);

    printf("\n\t++++AFTER SORTING++++\n\n ");
    for (int i = 0; i < size; i++)
    {
        printf("{%d}\t", unsorted[i]);
    }
}

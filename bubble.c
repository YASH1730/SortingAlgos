#include <stdio.h>
#include <stdlib.h>

int sort(int a[],int pass)
{
    int j;
    for (int i = 0; i < pass; i++)
    {
        for (j = i + 1; j < pass; j++)
        {
            if (a[i] > a[j])
            {
                a[i] += a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
                break;
            }
            else
                break;
        }
        if (j == pass)
        {
            pass -= 1;
            if (pass > 0)
            {
                return sort(a, pass);
            }
            else
                break;
        }
    }
}

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
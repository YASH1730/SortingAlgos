
// CODE FOR INSERTION SORT

int insertion(int a[], int size, int recursion /*pass init 0*/)
{
    for (int i = recursion; i >= 0; i--)
    {
        if (a[i] > a[i + 1])
        {
            a[i] += a[i + 1];
            a[i+1] = a[i] - a[i + 1];
            a[i] = a[i] - a[i + 1];
        }
    }
    size--;
    if (size > 0)
    {
        recursion++;
        insertion(a, size, recursion);
    }
}

// CODE FOR BUBBLE SORT

int bubble(int a[],int pass)
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
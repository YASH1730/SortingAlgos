
// CODE FOR COUNT SORT1

int count(int a[],int size)
{
    int max = a[0];
    for(int i = 0 ; i<size; i++)
    {
        if(a[i]>=max)
        {
            max = a[i];
        }
    }

    int c[max];
    for(int i = 0 ; i<size; i++)
    {
        c[a[i]] += 1;
    }

    int j = 0;
    for(int i = 0 ; i<=max; i++)
    {
        while(c[i]>0){
            a[j] = i;
            j++;
            c[i]--;
        }
    }
}

// CODE FOR MERGE SORT1

int merge(int a[],int size)
{
    int m,n,b[size];
    for(int i = 0;i<size;i++)
    {
        if(a[i]>a[i+1])
        {
            n = i;
            m = i+1;
            break;
        }
    }
    int i = 0,j = m,k = 0;
    while(i<=n && j<size)
    {
        if(a[i]<a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    while(j<size)
    {
        b[k] = a[j];
            k++;
            j++;
    }
    while(i<=n)
    {
        b[k] = a[i];
            k++;
            i++;
    }
    for(int i = 0 ; i<size ; i++)
    {
        a[i] = b[i];
    }
}

// CODE FOR SELECTION SORT
int recursion = 0;

int selection(int a[], int size)
{
    int min = recursion, flag = 0;

    for (int i = min + 1; i < size; i++)
    {
        if (a[min] >= a[i])
        {
            min = i;
            flag = 1;
        }
    }

    if (flag == 1)
    {
        a[recursion] += a[min];
        a[min] = a[recursion] - a[min];
        a[recursion] = a[recursion] - a[min];
    }
    if (recursion < size)
    {
        recursion++;
        selection(a, size);
    }
    else
    {
        recursion = 0;
    }
}

// CODE FOR INSERTION SORT

int insertion(int a[], int size)
{
    for (int i = recursion; i >= 0; i--)
    {
        if (a[i] > a[i + 1])
        {
            a[i] += a[i + 1];
            a[i + 1] = a[i] - a[i + 1];
            a[i] = a[i] - a[i + 1];
        }
    }
    size--;
    if (size > 0)
    {
        recursion++;
        insertion(a, size);
    }
    else
    {
        recursion = 0;
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

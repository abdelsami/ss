#include"push_swap.h"
int     *sar(int *ar, int *sorted, int size)
{
    int i;
    int j;
    i = 0;
    while (i < size)
    {
        j = 0;
        while(j < size)
        {
            if(ar[i] == sorted[j])
            {
               ar[i] = j;
               sorted[j] = j;
               break;
            }
            j++;
        }
        i++;
    }
    return(ar);
}

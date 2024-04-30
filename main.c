#include<stdio.h>


int main()
{
    int n, i, j, temp;
    int arr[64];

    printf("\n Enter number of elements in array = ");
    scanf("%d", &n);

    printf("\n Enter the elements\n",n);
    for (i=0;i<n;i++)
    {
        printf("\n arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    for (i=1;i<=n-1;i++)
    {
        j = i;
        while (j>0 && arr[j-1] > arr[j])
        {
            temp     = arr[j];
            arr[j]   = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    printf("\nSorted list in ascending order:\n");
    for (i=0;i<=n-1;i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}

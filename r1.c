#include <stdio.h>
int main()
{
    int arr[] = {8,9,10,2,5,6};
    int l = sizeof(arr)/sizeof(arr[0]);
    int n,i;
    for (i=0; i< l;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        int j, last;
        last = arr[l-2];
        for( j = l-2; j > 0; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[0] = last;
    }
    printf("\n");
    printf("right rotation: \n");
    for(i = 0; i< l; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

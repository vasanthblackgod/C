#include <stdio.h>

    int arr[]={1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int temp[k];
    for(i=0;i<n-1;i++)
        temp[i]=arr[n-k+i];
    for (i=n-k-1;i>=0;i--)
        arr[i+k]=arr[i];
    for (i=0;i<k;i++)
        arr[i]=temp[i];
}

int main()
{
    int arr[]={1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    rotate_array(arr,n,k);
    for (int i = 0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}

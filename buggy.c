#include <stdio.h>

int main()
{
    int i;
    int j;
    int arr[6] = {4,2,1,8,7,6};
    int n = 6;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[j] = arr[j+1];
            arr[j+1] = arr[j];
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

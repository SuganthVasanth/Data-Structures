#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }
        int temp=arr[i];
        // arr[i],arr[index]=arr[index],arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
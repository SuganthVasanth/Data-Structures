#include<stdio.h>
int slidingWindow(int n,int arr[],int k)
{
    int total=0;
    for(int i=0;i<k;i++)
    {
        total+=arr[i];
    }
    int maxTotal=total;
    for(int i=0;i<n-k;i++)
    {
        total=total-arr[i]+arr[i+k];
        if(total>maxTotal)
        {
            maxTotal=total;
        }
    }
    return maxTotal;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int result=slidingWindow(n,arr,k);
    printf("%d",result);
    return 0;
}
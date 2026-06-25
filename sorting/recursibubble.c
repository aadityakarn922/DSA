#include<stdio.h>
void exc(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    
}

void swap(int arr[],int n)
{
    if(n==1)
    {
        return;

    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            exc(&arr[i],&arr[i+1]);
        }
    }
    swap(arr,n-1);
}
int main()
{
    int arr[5]={7,8,6,5,4};
    swap(arr,5);
    for(int j=0;j<5;j++)
    {
        printf("%d ",arr[j]);
    }
}
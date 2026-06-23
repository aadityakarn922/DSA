#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sort(int arr[],int n)

{
    for(int i=0;i<n-1;i++)
    {
        int least=arr[i];
        int position=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<least)
            {
                least=arr[j];
            position=j;
            }
        }
          if(i!=position)
    {
        swap(&arr[i],&arr[position]);
    }




}
}
int main()
{
    int arr[]={9,5,4,3,2,2};
    sort(arr,6);
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
}
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[]={4,5,6,7,8};
    int i=0,j=4;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    };
    for(int k=0;k<5; k++)
    {
        cout<<a[k]<<" "<<endl;
    }
    return 0;

}
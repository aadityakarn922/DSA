#include<iostream>
using namespace std;
#include<algorithm>

void f(int i,int n,int arr[300])
{
    if(i>=n/2)
    {
        return;
    }
    else
    {
        swap(arr[i],arr[n-i-1]);
        f(i+1,n,arr);
        
    }
    


}
int main()
{
    int arr[300];
    int N;

    cout<<"enter the value of array";
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    f(0,N,arr);
    for(int i=0;i<N;i++)
    {
        cout<<arr[i];
        
    }

}
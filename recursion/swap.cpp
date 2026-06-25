#include<iostream>
using namespace std;
#include<algorithm>

void f(int l,int r,int arr[300])
{
    if(l>=r)
    {
        return;
    }
    else
    {
        swap(arr[l],arr[r]);
        return f(l+1,r-1,arr);
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
    f(0,N-1,arr);
    for(int i=0;i<N;i++)
    {
        cout<<arr[i];
        
    }

}
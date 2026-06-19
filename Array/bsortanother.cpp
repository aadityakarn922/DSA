#include<iostream>
#include<algorithm>
using namespace std;
 int main()
 {
    int arr[2999];
    int n;
    cout<<"enter tehh value of n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    for(int i=n-2; i>=0; i--)
    {
        bool swapped=0;
        for(int j=0; j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                 swapped=1;
                swap(arr[j],arr[j+1]);
            }
            
        }
        if(swapped==0)
        break;
        
    }
    for(int k=0; k<n;k++)
    {
        cout<<arr[k];
    }
    return 0;
 }
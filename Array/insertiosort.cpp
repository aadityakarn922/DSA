#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int arr[1000];
    cout<<"enter the value of n\n";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;

    }

    for(int i=1; i<n;i++)
        {
            for(int j=i; j>0; j--){
                if(arr[j]<arr[j-1])
                {
                    swap(arr[j],arr[j-1]);
                }
                else
                {
                    break;
                }
            }
        }
        for(int k=0; k<n; k++)
        {
            cout<<arr[k];
        }
        return 0;

}
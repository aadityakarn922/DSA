#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cout<<"enter the size of array";
    cin>>n;
    int arr[100];
    cout<<"enter the key value you want to find";

    cin>>key;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            cout << "Key found at index " << mid;
            return 0;
        }

        else if(arr[mid]>key)
        {
            end=mid-1;
            
        }
        else
        {
            start=mid+1;
        
        }
        

    }
    return 0;

}

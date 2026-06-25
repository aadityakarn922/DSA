#include<iostream>
using namespace std;
#include<climits>

int main()
{
    int size;
    
    cout<<"enter the size"<<endl;
    cin>>size;
    int a[1000];
    for(int i=0; i<size; i++)
    {
        cin>>a[i];

    }
    for (int i=0;i<size; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    int b[]={1,2,4,5,6};
    cout<<"size of array is";
    cout<<sizeof(b)/sizeof(b[0]);
    cout<<" "<<endl;
    int arr[]={1,4,5,7,8};
    int ans=INT_MAX;
    for(int j=0; j<5; j++)

    {
        if(arr[j]<ans)
        {
            ans=arr[j];
        }

    }
    int min=INT_MIN;
    for(int k=0; k<5; k++)
    {
        if(arr[k]>min)
        {
            min=arr[k];
        }
        
    }
    cout<<ans;
    cout<<" ";
    cout<<min<<endl;
    
    return 0;


}
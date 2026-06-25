#include<iostream>
using namespace std;
// void sum(int i,int N)
// {
//     if(i<1)
//     {
//         cout<<N;
//         return;
//     }
//     else
//     {
//         sum(i-1,N+i);
        
//     }
    
// }
int fun(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+fun(n-1);
            
        
    }
    

}


int main()
{
    int N;
    cout<<"enter the number";
    cin>>N;
    // sum(N,0);
    cout<<fun(N);

}
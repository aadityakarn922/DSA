#include<iostream>
using namespace std;
//  void num(int i,int n)
//  {
//     if(i<1)
//     {
//         return ;
//     }
//     else
//     {
//         num(i-1,n);
//         cout<<i<<endl;
    
            
        
//     }
    
//  }
void name(int i,int N)
{
    if(i>N)
    {
        return ;
    }
    else
    {
        name(i+1,N);
        cout<<i<<endl;
        
            
        
    }
    
}
 int main()
 {
    int N;
    cout<<"enter the number ";
    cin>>N;
    // num(N,N);
    name(1,N);
 }
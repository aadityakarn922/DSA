 #include<iostream>
using namespace std;

// void print(){
//     cout<<1;
//     print();

// }
// int cut=0;
// void show()
// {
//     if(cut==3)
//     {
//         return;
//     }
//     else
//     {
//         cout<<cut;
//         cut++;
//         show();
        
//     }
    
// }
// int main()
// {
//     // print();
//     show();
// }

// 
// void print(int i,int n)
// {
//     if(i>n)
//     {
//         return;
//     }
//     else
//     {
//         cout<<i<<endl;
//         print(i+1,n);
//     }
void back(int N)
{
    if(N==0)
    {
        return ;
    }
    else
    {
        cout<<N<<endl;
        N--;
        back(N);
        
            
        
    }
    

}
// another way
void dis(int i,int N)
{
    if(i<1)
    {
        return ;
    }
    else
    {
        cout<<i;
        dis(i-1,N);
    }
    
}
    


int main()
{
    int N;
    cout<<"enter the number of times you want to print";
    cin>>N;
    // name(1,N);
//     print(1,N);
// back(N);
dis(N,N);

}
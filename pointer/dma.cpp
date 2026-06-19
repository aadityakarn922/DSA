#include<iostream>
using namespace std;
int update2(int &n)
{
    return n++;
}
int update(int n)
{
    return n++;
}
int main()
{
    /*int i=8;
    int &j=i;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i; */
    int n=5;
    cout<<"before"<<" "<<n<<endl;
    update(n);
    cout<<"after"<<" "<<n<<endl;
    update2(n);
    cout<<"after"<<" "<<n<<endl;
    return 0;

}
#include<iostream>
using namespace std;


int main()
{
//     int num=5;
//     cout<<num<<endl;
//     cout<<&num<<endl;
//     int *ptr=&num;

//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     cout<<sizeof(num)<<endl<<sizeof(ptr)<<endl;
//     int *q=0;
//     int i=9;
//     q=&i;
//     cout<<i<<endl<<*q<<endl;

     int a;
     int p=7;
    a=p;
    a++;
    cout<<p<<endl;
    int b=8;
    int *r=&b;
    (*r)++;
    cout<<*r<<endl<<b;
    int *e=r;
    cout<<e<<"-"<<r;
    cout<<*e<<"_"<<*r<<endl;

 }
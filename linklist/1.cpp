#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

class Node
{
    public:
    int data;
    Node * next;
    public:
    Node(int data1,Node *next1)
    {
        data=data1;
        next=next1;
    }

    
};
int main()
{
    vector<int> arr={1,2,4,5};
    Node *y=new Node(arr[0],nullptr);
    cout<<y->data<<endl;
    return 0;

}

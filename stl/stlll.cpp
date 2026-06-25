#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void ccpair()
{
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second;
    pair<int ,pair<int,int>> q={1,{7,8}};
    cout<<q.first<<" "<<q.second.first<<q.second.second;
    pair<int,int>arr[]={{1,3},{1,2,}};
    cout<<arr[0].first<<" "<<arr[1].second;

}
int main()
{
    ccpair();
    return 0;
}
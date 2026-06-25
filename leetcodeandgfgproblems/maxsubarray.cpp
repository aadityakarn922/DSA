#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;


class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
          int n = arr.size();
        if (n < k) return 0;

        int windowSum = 0;
        int maxSum = 0;

        // calculate sum of first window
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
        maxSum = windowSum;

        // slide the window
        for (int i = k; i < n; i++) {
            windowSum += arr[i] - arr[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return maxSum;
    }

};

int main()
{
    Solution obj;
    vector<int> arr={2,4,6,7,8};
    int k=3;
    int res=obj.maxSubarraySum(arr,k);
    cout<<res<<" ";

}
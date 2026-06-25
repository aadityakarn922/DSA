#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = 0;
        int sum = 0;
        int res = INT_MAX;

        while (high < n) {
            sum += nums[high];

            while (sum >= target) {
                res = min(res, high - low + 1);
                sum -= nums[low];
                low++;
            }

            high++;
        }

        return (res == INT_MAX) ? 0 : res;
    }
};

int main() {
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    Solution obj;
    int result = obj.minSubArrayLen(target, nums);

    cout << "Minimum subarray length: " << result << endl;

    return 0;
}
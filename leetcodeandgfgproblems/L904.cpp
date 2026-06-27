#include <iostream>
#include <vector>

#include <unordered_map>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int res = 0;

        unordered_map<int, int> f;

        for (int high = 0; high < fruits.size(); high++) {
            f[fruits[high]]++;

            while (f.size() > 2) {
                f[fruits[low]]--;

                if (f[fruits[low]] == 0)
                    f.erase(fruits[low]);

                low++;
            }

            res = max(res, high - low + 1);
        }

        return res;
    }
};

int main() {
    Solution obj;

    vector<int> fruits = {1 , 2, 1};
    cout << obj.totalFruit(fruits) << endl;   

    return 0;
}
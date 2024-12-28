#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count = count + 1;
                if (count > max) {
                    max = count;
                }
            }
            if (nums[i] == 0) {
                count = 0;
            }
        }
        return max;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<int> test1 = {1, 1, 0, 1, 1, 1};
    cout << "Test Case 1: " << solution.findMaxConsecutiveOnes(test1) << endl; // Expected output: 3

    // Test Case 2
    vector<int> test2 = {1, 0, 1, 1, 0, 1};
    cout << "Test Case 2: " << solution.findMaxConsecutiveOnes(test2) << endl; // Expected output: 2

    // Test Case 3
    vector<int> test3 = {0, 0, 0, 0};
    cout << "Test Case 3: " << solution.findMaxConsecutiveOnes(test3) << endl; // Expected output: 0

    // Test Case 4
    vector<int> test4 = {1, 1, 1, 1};
    cout << "Test Case 4: " << solution.findMaxConsecutiveOnes(test4) << endl; // Expected output: 4

    return 0;
}

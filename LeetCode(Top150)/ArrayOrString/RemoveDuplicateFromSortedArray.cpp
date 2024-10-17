#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> set;
        int index = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (set.find(nums[i]) == set.end()) {
                nums[index] = nums[i];
                set.insert(nums[i]);
                ++index;
            }
        }
        return index;
    }
};


int main() {
}
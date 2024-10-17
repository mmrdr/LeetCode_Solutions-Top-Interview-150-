#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> dict;
        int index = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (dict.find(nums[i]) == dict.end()) dict[nums[i]] = 0;
            ++dict[nums[i]];
            if (dict[nums[i]] <= 2) {
                nums[index] = nums[i];
                ++index;
            }
        }
        return index;
    }
};



int main() {

}
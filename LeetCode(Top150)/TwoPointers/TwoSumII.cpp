#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        while(i <= j) {
            if (numbers[i] + numbers[j] < target) {
                ++i;
            } else if (numbers[i] + numbers[j] > target) {
                --j;
            } else {
                return {i, j};
            }
        }
        return {0,0};
    }
};

int main() {
}
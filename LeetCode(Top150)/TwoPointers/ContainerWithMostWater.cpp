#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int i = 0;
        int j = height.size() - 1;
        while(i < j) {
            ans = max(ans, (j - i) * min(height[i], height[j]));

            if (height[i] < height[j]) {
                ++i;
            } else {
                --j;
            }
        }
        return ans;
    }
};

int main() {
}
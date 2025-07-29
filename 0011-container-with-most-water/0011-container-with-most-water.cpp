#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int ans = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int width = right - left;
            ans = max(ans, h * width);

            // Move the pointer with the smaller height
            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return ans;
    }
};

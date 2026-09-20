#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int total = 0;
        int maxLeft = 0, maxRight = 0;

        while (left < right) {
            if (height[left] <= height[right]) {
                maxLeft = max(maxLeft, height[left]);
                total += maxLeft - height[left];
                left++;
            } else {
                maxRight = max(maxRight, height[right]);
                total += maxRight - height[right];
                right--;
            }
        }
        return total;
    }
};

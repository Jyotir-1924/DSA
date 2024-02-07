#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) {
        int i = 0, j = 0,ans = 0,count = 0,n=nums.size();

        while (j < n) 
        {
            if (count <= k)
            {
                if (nums[j] == 0)
                    count++;
                j++;
            }

            if (count > k) 
            {
                if (nums[i] == 0)
                    count--;
                i++;
            }

            if ((j - i) > ans && count <= k)
                ans = j - i;
        }

        return ans;
    }
};
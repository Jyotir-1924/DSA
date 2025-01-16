class Solution
{
public:
    int xorAllNums(vector<int> &nums1, vector<int> &nums2)
    {

        // Brute Force
        // vector<int> nums3;
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //         nums3.push_back(nums1[i]^nums2[j]);
        //     }
        // }
        // int ans=0;
        // for(int i=0;i<nums3.size();i++){
        //     ans=nums3[i]^ans;
        // }
        // return ans;

        // Approach 1 :

        // unordered_map<int,long> flag;
        // int n=nums1.size(),m=nums2.size();
        // for(auto &it : nums1){
        //     flag[it] += m;
        // }
        // for(auto &it: nums2){
        //     flag[it] += n;
        // }
        // int ans = 0;
        // for(auto &it:flag){
        //     if(it.second % 2 != 0)
        //         ans=ans^it.first;
        // }
        // return ans;

        // Initialization:

        // An unordered map flag is used to track the frequency contribution of each number.
        // Variables n and m store the sizes of nums1 and nums2.
        // Update Frequencies:

        // For each element in nums1, its frequency in the map is incremented by the size of nums2 (m), as each element pairs with all elements in nums2.
        // Similarly, for each element in nums2, its frequency is incremented by the size of nums1 (n).
        // Compute XOR:

        // Iterate through the flag map.
        // If a number’s total frequency is odd, include it in the XOR operation (ans = ans ^ key).
        // Result:

        // Return the computed XOR value (ans) as the final result.
        // Key Points:
        // The algorithm ensures that only numbers with an odd total contribution to pairings affect the XOR result.
        // It efficiently reduces redundant computations by leveraging a frequency map.

        //         Approach 2

        //         int n=nums1.size(), m=nums2.size(),ans=0;
        //         if(n%2!=0){
        //             for(auto &it:nums2){
        //                 ans^=it;
        //             }
        //         }
        //         if(m%2!=0){
        //             for(auto &it:nums1){
        //                 ans^=it;
        //             }
        //         }
        //         return ans;

        //         Key Observation:

        // When calculating the XOR of all pairs between nums1 and nums2, each element in nums1 is XORed with all elements in nums2.
        // If the size of one array is even, its elements contribute an even number of times and do not affect the overall XOR result.
        // Initialization:

        // Variables n and m store the sizes of nums1 and nums2.
        // Initialize ans to 0 to store the final XOR result.
        // Odd Size Check for nums1:

        // If the size of nums1 (n) is odd, every element in nums2 contributes to the final XOR.
        // Iterate through nums2 and XOR each element with ans.
        // Odd Size Check for nums2:

        // If the size of nums2 (m) is odd, every element in nums1 contributes to the final XOR.
        // Iterate through nums1 and XOR each element with ans.
        // Result:

        // Return ans as the final XOR of all valid pairs.
        // Key Points:
        // This solution avoids using extra space and reduces computational overhead by leveraging array sizes.
        // Complexity:
        // Time:
        // O(n+m), as it only iterates through each array once if required.
        // Space:
        // O(1), as no additional data structures are used
    }
};
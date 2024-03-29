class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int n=nums.size();
        int high=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                high=i;
                break;
            }
        }
        if(high==-1)
            return;
        int low=high+1;
        while(low<n)
        {
            if(nums[low] != 0)
            {
                swap(nums[low],nums[high]);
                high++;
            }
            low++;
        }
        // OR the below mentioned program.
        int i=0,j=0;
        while(i<n)
        {
            if(nums[i] != 0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
    }
};
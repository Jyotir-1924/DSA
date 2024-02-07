// For unsorted array we use XOR to calculate the answer.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto x:nums)
            ans^=x;
        return ans;
    }
};

// For sorted data we use binary search technique

int getSingleElement(vector<int> &arr)
{
	int low=0,high=arr.size()-1;
	while(low<high)
	{
		int mid= (high+low)/2;
		if(mid%2)
			mid--;
		if(arr[mid] == arr[mid+1])
			low = mid + 2;
		else
			high=mid;
	}
	return arr[high];
}
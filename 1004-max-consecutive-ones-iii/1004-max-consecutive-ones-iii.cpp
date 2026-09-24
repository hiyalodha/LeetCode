class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int zerocount=0;
        int maxi=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0)
                zerocount++;
            
            while(zerocount>k){
                if(nums[left]==0)
                    zerocount--;
                left++;
            }

            maxi=max(maxi, right-left+1);
        }
        
        return maxi;
    }
};
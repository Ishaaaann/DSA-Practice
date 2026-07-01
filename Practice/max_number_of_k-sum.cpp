class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=0;
       sort(nums.begin(), nums.end());
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            if(nums[left]+nums[right]==k){
                n++;
                left++;
                right--;
            }
            else if(nums[left]+nums[right]<k){
                if(min(nums[left],nums[right])==nums[left])
                left++;
                else
                right--;
            }
            else if(nums[left]+nums[right]>k){
                if(max(nums[left],nums[right])==nums[left])
                left++;
                else
                right--;
            }
        }
        return n;
        
    }
};

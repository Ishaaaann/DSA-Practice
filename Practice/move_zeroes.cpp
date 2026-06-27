class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ints;
        

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
            ints.push_back(nums[i]);   
        }

         for(int i=0;i<ints.size();i++)
              nums[i]=ints[i];

              int si=ints.size();
        
        for(int i=0;i<nums.size()-si;i++)
            nums[si+i]=0 ;       
   
};
};

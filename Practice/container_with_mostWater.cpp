class Solution {
public:
    int maxArea(vector<int>& height) {
      int left=0;
      int right=height.size()-1;
      int max=0;
      while(left<right){
        if(min(height[left],height[right])*(right-left)>max)
        max=(min(height[left],height[right])*(right-left));
        if(height[right]>height[left]){
           left++;
        }
        else
          right--;
          }
          return max;
    
};
};

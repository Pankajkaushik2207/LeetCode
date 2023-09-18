class Solution {
public:
    void sortColors(vector<int>& nums) {
      int n = nums.size();
        // selection sort
        // for(int i =0;i<n;i++){
        //     int miniIndex = i;
        //     for(int j = i+1;j<n;j++){
        //         if(nums[j]<nums[miniIndex]){
        //             miniIndex = j;
        //         }
        //     }
        //     swap(nums[i],nums[miniIndex]);
        // }
        
        // bubble sort
        for(int round  = 1;round<n;round++){
            for(int j= 0;j<n-round;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};
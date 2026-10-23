class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityNo = nums[0];
        int count = 1;
        for(int i=0;i<nums.size();i++){
            if(majorityNo == nums[i]){
                count++;
            }
            else{
                count--; 
            }

            if(count == 0){
                majorityNo = nums[i];
                count = 1;
            }
        }
        return majorityNo; 
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int newcount=0;
        for(int i=0;i<nums.size();i++){
            
            if(newcount>=count){
                count=newcount;
            }
            if(nums[i]==0){
                newcount=0;
            }
            else{
                newcount++;
            }
        }
        if(newcount>count){
            count=newcount;
        }
        return count;
        
    }
};

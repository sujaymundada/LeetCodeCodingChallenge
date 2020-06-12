/*************************** Sujay *************************

* File Name             :   searchIndex.cpp
    
* Author                :   Sujay

* Creation Date         :   10-06-2020

* Last Modified         :   Wed Jun 10 14:14:30 2020

***********************************************************/



class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        for(int i=0;i<nums.size();i++){
            if(nums[i] >= target) return i ; 
        }
        return nums.size(); 

    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int , int > fre;

        for(int i = 0 ; i< nums.size() ; i++){
         
            if(fre[nums[i]] == 1){
                return true;
            }
            fre[nums[i]] = 1;
        }

        return false;

    }
};
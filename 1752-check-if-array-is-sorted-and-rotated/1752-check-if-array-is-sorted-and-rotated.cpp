class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans;
        ans = nums;
        
        sort(ans.begin(), ans.end());

        if(ans == nums){ return true;}

        for(int i = 0 ; i < n ; i++){
            rotate(ans.begin(),ans.begin()+1,ans.end());
            if(ans == nums){ return true;}
        }
        return false;
    }
};
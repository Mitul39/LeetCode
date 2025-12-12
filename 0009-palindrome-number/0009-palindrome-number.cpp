class Solution {
public:
    bool isPalindrome(int x) {
        long ans = 0;
        long n=x;
    
         while(x>0){
            ans = (ans*10) + (x%10);
            x = x/10; 
        }
        if(n==ans){
            return true;
        }   
        return false;
    }
};
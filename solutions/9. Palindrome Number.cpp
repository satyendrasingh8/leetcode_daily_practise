class Solution {
public:
    //2147483647
    bool isPalindrome(int x) {
       long int num = 0;
        int y = x;
        if(x<0 || x>=2147483647){
            return false;
        }
        while(x>0){
            num = num*10;
            num = num + (x%10);
            x = x/10;
        }
        return num == y;
    }
};

class Solution {
public:
    int uniquePaths(int m, int n) {
        // Using Recursion time Complexity will be exponential
        // Using Recursion with DP time Complexity will be O(n*m)
        //but Using trick( nCr ) we reduce it to O(m-1) or O(n-1)
        // So by using (nCr)....
        int N=m-1+n-1;
        int r=m-1;
        double res=1;
        for(int i=1;i<=r;i++){
            res=res*(N-r+i)/i;
        }
        return (int)res;
    }
};

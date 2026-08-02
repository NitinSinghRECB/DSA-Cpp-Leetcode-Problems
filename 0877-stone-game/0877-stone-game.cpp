class Solution {
public:
    int solve(vector<int>& piles , int i , int j, vector<vector<int>>&dp ){
        if(i>j) return 0;

        if(dp[i][j]!=-1) return dp[i][j];

        int leftPick = piles[i]-solve(piles , i+1 , j,dp);
        int rightPick = piles[j]-solve(piles , i , j-1,dp);

        int ans  = max(leftPick , rightPick);
        dp[i][j] = ans;
        return dp[i][j];
    }
    bool stoneGame(vector<int>& piles) {
        //return true;
        // are bhai ye kya ho gaya 

        //ok ok isko bhi solve karte hai
        int n = piles.size();
        vector<vector<int>>dp(n+1 , vector<int>(n+1 , -1)); 
        int ans = solve(piles , 0 , piles.size()-1 , dp);
        return ans>0;
    }
};
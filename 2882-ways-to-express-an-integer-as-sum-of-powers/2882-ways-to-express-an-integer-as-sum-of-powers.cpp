const int MOD = 1000000007;
class Solution {
public:
    int numberOfWays(int n, int m) {
         vector<int> powers;
    for (int i = 1;; i++) {
        long long val = 1;
        for (int j = 0; j < m; j++) val *= i; // i^m
        if (val > n) break;
        powers.push_back((int)val);
    }

    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for (int p : powers) {
        for (int sum = n; sum >= p; sum--) {
            dp[sum] = (dp[sum] + dp[sum - p]) % MOD;
        }
    }

    return dp[n];
    }
};
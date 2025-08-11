class Solution {
public:
   vector<int> productQueries(int n, vector<vector<int>>& queries) {
    const int MOD = 1e9 + 7;
    vector<long long> v;
    long long p = 1;
    int temp = n;
    while(temp > 0) {
        if(temp % 2 == 1) {
            v.push_back(p);
        }
        temp = temp / 2;
        p = p * 2;
    }
    vector<int> res;
    for(int i = 0; i < queries.size(); i++) {
        int l = queries[i][0];
        int r = queries[i][1];
        long long ans = 1;
        for(int j = l; j <= r; j++) {
            ans = (ans * v[j]) % MOD;
        }
        res.push_back((int)ans);
    }
    return res;
}
};
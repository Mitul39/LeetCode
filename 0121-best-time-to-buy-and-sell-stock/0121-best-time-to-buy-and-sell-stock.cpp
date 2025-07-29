#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice)
                minPrice = price;  // update minimum price
            else if (price - minPrice > maxProfit)
                maxProfit = price - minPrice;  // update max profit
        }
        return maxProfit;
    }
};

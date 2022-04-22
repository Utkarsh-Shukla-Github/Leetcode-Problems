class Solution {
    const int INF = 1e9 + 5;
public:
    int maxProfit(vector<int>& prices) {
        int best_with_stock = -INF, best_without_stock = 0;
        
        for(int price: prices) {
            best_with_stock = max(best_with_stock, best_without_stock - price);
            best_without_stock = max(best_without_stock, best_with_stock + price);
        }
        return best_without_stock;
    }
};
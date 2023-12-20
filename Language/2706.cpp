#include <iostream>
#include <vector>
#include <limits>

class Solution {
public:
    int buyChoco(std::vector<int>& prices,int money) {
        int min_cost = std::numeric_limits<int>::max();
        int n = prices.size();

        for (int f=0; f<n; ++f) {
            for (int s=f+1; s<n; ++s) {
                int cost=prices[f] + prices[s];
                if (cost<min_cost) {
                    min_cost=cost;
                }
            }
        }

        if (min_cost<=money) {
            return money-min_cost;
        }
        else {
            return money;
        }
    }
};

int main() {
    Solution solution;
    std::vector<int> prices;
    int money, price;

    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> price;
        prices.push_back(price);
    }
    std::cin >> money;
    int result = solution.buyChoco(prices, money);
    std::cout << "Result: " << result << std::endl;

    return 0;
}


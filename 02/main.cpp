/*Best time to buy and sell stock
 *
 * Note: stock must be bought before being sold*/
// method: greedy approach
#include <iostream>
int buyAndSellStock(int array[], int length) {
  // prices of stock for everyday
  int buy{array[0]}, max_profit{0};
  for (int i{0}; i < length - 1; ++i) {
    if (array[i] < buy)
      buy = array[i];

    if (array[i] - buy > max_profit)
      max_profit = array[i] - buy;
  }
  return max_profit;
}
int main() {

  int prices[]{7, 1, 5, 2, 6, 4};
  int length{sizeof(prices) / sizeof(prices[0])};
  std::cout << buyAndSellStock(prices, length) << '\n';
  return 0;
}

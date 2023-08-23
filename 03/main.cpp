/*Given an array of n elements that contains elements from 0 to n-1,
 * with any of these numbers appearing any number of times.
 * Find these repeating numbers in O(n) and using only constant memory space.
 *
 *Input : n = 7 and array[] = {1, 2, 3, 6, 3, 6, 1}
  Output: 1, 3, 6

  Explanation: The numbers 1 , 3 and 6 appears more
  than once in the array.
 * */
#include <array>
#include <iostream>
#include <vector>
template <size_t N> void findSimilar(std::array<int, N> array, int n) {
  for (int i{0}; i < n ; ++i) {
    array[array[i] % n] += n;
  }
  for (int i{0}; i < n; ++i) {
    if(array[i] >= n * 2)
      std::cout << i << " ";

  }
  std::cout << '\n';
}
int main() {
  // int array[] = {1, 2, 3, 6, 3, 6, 1};
  std::array<int, 7> array{1, 2, 3, 6, 3, 6, 1};
  int n = 7;

  findSimilar(array, n);

  return 0;
}

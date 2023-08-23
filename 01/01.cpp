/*find a pair with the given sum in an array*/
#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>

// void findPair(std::array<int, 6> array, int arrayLength, int target) {
void findPair(int array[], int arrayLength, int target) {
  std::sort(array, array + arrayLength);
  // std::sort(array.begin(), array.end());
  // std::sort(std::begin(array), std::end(array));

  int low{0}, high{arrayLength - 1};
  while (low < high) {
    if (array[low] + array[high] == target) {
      std::cout << "pair found: (" << array[low] << "," << array[high] << ")\n";
      return;
    }
    (array[low] + array[high] < target) ? low++ : high--;
  }
}
int main() {
  int array[]{8, 7, 2, 5, 3, 1};
  // std::array<int, 6> array{8, 7, 2, 5, 3, 1};
  std::cout << "Enter target: ";
  int target{};
  std::cin >> target;
  int arrayLength{sizeof(array) / sizeof(array[0])};
  /* for (int startIndex{0}; startIndex < arrayLength - 1; ++startIndex) {
    int smallestIndex{startIndex};
    for (int currentIndex{startIndex + 1}; currentIndex < arrayLength;
         ++currentIndex) {
      if (array[currentIndex] < array[smallestIndex]) { smallestIndex =
  currentIndex;
      }
      if (array[currentIndex] + array[startIndex] == target) {
        std::cout << array[startIndex] << ", " << array[currentIndex] << '\n';
      }
    }
    std::swap(array[startIndex], array[smallestIndex]);
  } */
  findPair(array, arrayLength, target);

  return 0;
}

/*find a pair with the given sum in an array*/
#include <iostream>
#include <type_traits>
#include <utility>

int main() {
  int array[]{8, 7, 2, 5, 3, 1};
  std::cout << "Enter target: ";
  int target{};
  std::cin >> target;
  int arrayLength{sizeof(array) / sizeof(array[0])};
  for (int startIndex{0}; startIndex < arrayLength - 1; ++startIndex) {
    int smallestIndex{startIndex};
    for (int currentIndex{startIndex + 1}; currentIndex < arrayLength;
         ++currentIndex) {
      if (array[currentIndex] < array[smallestIndex]) {
        smallestIndex = currentIndex;
      }
      if(array[currentIndex] + array[startIndex] == target){
        std::cout << array[startIndex] << ", " << array[currentIndex] << '\n';
      }
    }
    std::swap(array[startIndex], array[smallestIndex]);
  }

  for (int startIndex{0}; startIndex < arrayLength - 1; ++startIndex) {
    for (int currentIndex{startIndex + 1}; currentIndex < arrayLength;
         ++currentIndex) {
      if(array[currentIndex] + array[startIndex] == target){
        std::cout << array[startIndex] << ", " << array[currentIndex] << '\n';
      }
    }
  }

  std::cout << "Print:\n ";
  for (int i{0}; i < sizeof(array) / sizeof(array[0]); ++i) {
    std::cout << array[i] << ' ';
  }
}

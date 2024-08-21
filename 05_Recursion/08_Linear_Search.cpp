// climbing Stair leetcode ques.70

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int index, int target) {
  // base case
  if (index >= size)
    return false;
  if (arr[index] == target)
    return true;
  // resursive calll
  return linearSearch(arr, size, index + 1, target);
}

int main() {
  int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 11};
  int size = sizeof(arr) / sizeof(int);
  if (linearSearch(arr, size, 0, 5)) {
    cout << "Element found";
  } else {
    cout << "Element not found";
  }
  return 0;
}
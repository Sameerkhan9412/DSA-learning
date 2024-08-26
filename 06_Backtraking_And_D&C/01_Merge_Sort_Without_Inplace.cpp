#include <iostream>
using namespace std;

void merge(int arr[], int s, int e) {
  int mid = (s+e)/2;

  int lenLeft = mid - s + 1;
  int lenRight = e - mid;

  //create left and right array
  int *left = new int[lenLeft];
  int *right = new int[lenRight];

  //copy values from original array to left array
  int k = s;
  //k -> starting index of left array values in original arrya
  for(int i=0; i<lenLeft; i++) {
    left[i] = arr[k];
    k++;
  }

  //copy values from original array to right array
  k = mid+1;
  for(int i=0; i<lenRight; i++) {
    right[i] = arr[k];
    k++;
  }

  //actual merge logic here
  //left array is already sorted
  //right array is already sorted
  int leftIndex = 0;
  int rightIndex = 0;
  //yahi pr galti karte h log
  int mainArrayIndex = s;

  while(leftIndex < lenLeft &&  rightIndex < lenRight) {

    if(left[leftIndex] < right[rightIndex] ) {
      arr[mainArrayIndex] =  left[leftIndex];
      mainArrayIndex++;
      leftIndex++;
    }
    else {
      arr[mainArrayIndex] =  right[rightIndex];
      mainArrayIndex++;
      rightIndex++;
    }
  }


  //2 more cases

  //1 case -> left array exhaust but right array me element abhi bhi bache hai
  while(rightIndex < lenRight) {
    arr[mainArrayIndex] =  right[rightIndex];
    mainArrayIndex++;
    rightIndex++;
  }


  //2nd case -> rigght array exhaust but left array me element abhi bhi bache hai
  while(leftIndex < lenLeft) {
    arr[mainArrayIndex] =  left[leftIndex];
    mainArrayIndex++;
    leftIndex++;
  }
  //1 more step pending
  delete[] left;
  delete[] right;
}

// Merge sort code
void mergeSort(int arr[], int s, int e) {
  if (s > e)
    return;
  if (s == e) {
    // single eelmenet fount
    return;
  }
  // break

  int mid = s + (e - s) / 2;
  // left and right sub arrays ko sort karao
  // recursion call for left sub array
  mergeSort(arr, s, mid);
  // recursion call for right sub array
  mergeSort(arr, mid + 1, e);

  // merge both arrays
  merge(arr, s, e);
}

int main() {
  int arr[] = {1,2,4,5,6,9};
  int size = sizeof(arr) / sizeof(int);
  int s = 0;
  int e = size - 1;

  cout << "Before Merge Sort" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  mergeSort(arr, s, e); 
  cout << "After Merge Sort" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}

/*
time complexity : O(nlogn)
*/
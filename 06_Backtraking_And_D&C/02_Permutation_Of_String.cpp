#include <iostream>
using namespace std;

/*
  what is backtracking:
  it is nothing but a method to solve a problem by trying out all the possible
  solutions and then backtracking to find the best solution. backtracking is
  simple recursion , bus recursion calll se bapas aate huy mujhe kuch additional
  operation perform krne parenge.
*/
void printPermutation(string str, int index) {
  // base case
  if (index >= str.length()) {
    cout << str << " ";
  }

  for (int j = index; j < str.length(); j++) {
    swap(str[index], str[j]);
    // recursion
    printPermutation(str, index + 1);
    // backtracking  -> changes nullify krne k liye because by reference me
    // upper string me changes aaajate hai, without backtracking, changes
    // nullify nhi hote agar string pass by reference share nhi krenge to , code
    // sahi chalega, by referece use kiya hai isliye , warna is code ko ignore
    // krsakte hai

    swap(str[index], str[j]);
  }
}
int main() {
  string str = "abc";
  int index = 0;
  printPermutation(str, index);
  return 0;
}
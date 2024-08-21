// climbing Stair leetcode ques.70

#include <iostream>
using namespace std;

int ClimbingStairs(int n) {
  if (n == 1)
    return 1;
  if (n == 2)
    return 1;
  int ans = ClimbingStairs(n - 1) + ClimbingStairs(n - 2);
  return ans;
}

int main() {
  int n = 5;
  cout << "the no. of stairs=" << ClimbingStairs(n);
}
#include <iostream>
#include <vector>
using namespace std;
/*
   a function that will handle all the below mentioned possibilities :
   possibility hai:
   ->path closed
   ->out of bound ho
   check , is position already visited
*/

bool isSafe(int sourceX, int sourceY, int newX, int newY, int maze[][4],
            int row, int col, vector<vector<bool>> &visited) {
  if ((newX >= 0 && newX < row) && (newY >= 0 && newY < col) &&
      maze[newX][newY] == 1 && visited[newX][newY] == false) {
    return true;
  } else {
    return false;
  }
}

void printAllPath(int maze[][4], int row, int col, int sourceX, int sourceY,
                  string &output, vector<vector<bool>> &visited) {
  // base case
  if (sourceX == row - 1 && sourceY == col - 1) {
    // reached destinition
    cout << output << endl;
    return;
  }
  // 1 case solve krna hai baki recursion sambhal lega 
   
  // UP
  int newX = sourceX - 1;
  int newY = sourceY;
  if (isSafe(sourceX, sourceY, newX, newY, maze, row, col, visited)) {
    // mark visited
    visited[newX][newY] = true;
    // call recursion
    output.push_back('U');
    printAllPath(maze, row, col, newX, newY, output, visited);
    // backtacking
    output.pop_back();
    visited[newX][newY] = false;
  }
   
  // RIGHT
  newX = sourceX;
  newY = sourceY + 1;
  if (isSafe(sourceX, sourceY, newX, newY, maze, row, col, visited)) {
    // mark visited
    visited[newX][newY] = true;
    // call recursion
    output.push_back('R');
    printAllPath(maze, row, col, newX, newY, output, visited);
    // backtacking
    output.pop_back();
    visited[newX][newY] = false;
  }
  // DOWN
  newX = sourceX + 1;
  newY = sourceY;
  if (isSafe(sourceX, sourceY, newX, newY, maze, row, col, visited)) {
    // mark visited
    visited[newX][newY] = true;
    // call recursion
    output.push_back('D');
    printAllPath(maze, row, col, newX, newY, output, visited);
    // backtacking
    output.pop_back();
    visited[newX][newY] = false;
     
  }
    // LEFT
    newX = sourceX;
    newY = sourceY-1;
    if (isSafe(sourceX, sourceY, newX, newY, maze, row, col, visited)) {
      // mark visited
      visited[newX][newY] = true;
      // call recursion

      output.push_back('R');
      printAllPath(maze, row, col, newX, newY, output, visited);
      // backtacking
      output.pop_back();
      visited[newX][newY] = false;
    }
}
  int main() {
    int maze[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 1, 0}, {1, 1, 1, 1}};
    int row = 4;
    int col = 4;

    int sourceX = 0;
    int sourceY = 0;

    string output = "";

    // create visited array
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    if (maze[0][0]==0) {
      // src postion is closed , that means rat cannot move
      cout << "No path exists" << endl;
    } else {
      visited[sourceX][sourceY] = true;
      printAllPath(maze, row, col, sourceX, sourceY, output, visited);
    }
    return 0;
  }

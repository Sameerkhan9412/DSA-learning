/*
    1) in cpp,macros are preprocessor directives that allow you to define constants , functions, or code snippets that can be used to throughtout your code . they are typically define eusing the #define directive and are evaluated by the preprocessor before the code is compiled.

    2) macros can be used for a varity of purposes , such as defining constants or creating shorthand for commonly used expressions.
*/

#include<iostream>
using namespace std;
#define PI 3.1415
#define MAXX(x,y) (x>y?x:y)
float circleArea(float r){
    return PI*r*r;
}

void fun(){
    int x=6;
    int y=15;
    int z=MAXX(x,y);
    cout<<z<<endl;
}
int main(){
    cout<<circleArea(65.5)<<endl;
    fun();
    return 0;
}
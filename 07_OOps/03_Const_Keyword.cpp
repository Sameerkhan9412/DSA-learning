/*
    -------------------------------------------------
            CONSTANT KEYWORD IN CPP
    ---------------------------------------------

    1) The const keyword is used to declare that a variable function or object is immutable, ie, its value cannot be changed after reintialization.
    2) eg, if you declare a variable as const int x=5; you cannot modify the value of x later in the program any to modify the value will result in a compilation error.
    3) you can declare a function as const , which means that it does not modify any state of the object. it is called on.
    4)compiler may be able to store const variables in read only memory, which can result in fater access time .
    ex:

*/
/*
#include<iostream>
using namespace std;
int main(){
    // const int x=10;
    // x=30; 
    // this will return an error,ex expression must be modifyable lvalue.

    // 2. const with pointer:
    const int *a=new int;   //const data,non const pointer.

    *a=2;
    cout<<*a<<endl;
    int b=5;
    a=&b;
    cout<<*a<<endl;

    //const pointer , but non const data
    int *const a=new int (2);

    //const pointer, const data
    const int *const a=new int (10);
    return 0;
}
*/

/*
    C++ have 2 concept:
    a)lvalue:variable having memory location.ex int x;
    b) variable doesnt have memroy location..ex int &b;
initailiztion can be done but reinitiazation cannot be done.
*/

// ----------------------------------------------------------------------
//             const function
// --------------------------------------------------------------
    // this method cant even change any of the member variable
    //agr hm chate hai esa funciton likhna isme classs k variable kabhi change n ho then we use const function

#include<iostream>
using namespace std;
class abc{
    int x;
    int *y;
    public:
    abc(){
        x=0;
        y=new int(0);
    }
    abc(int _x,int _y){
        x=_x;
       y=new int(_y);
    }
    int getX() const{       //ab ye kis bhi variable ko modify nhi krega
        // x=50;// this will return an error
        return x;
    }
    void setX(int _val){
        x=_val;
    }
    int getY() const {
        return *y;
    }
    void setY(int _val){
        *y=_val;
    }
};

void printABC(const abc &a){
    cout<<a.getX()<<" "<<a.getY()<<endl;
}

int main(){
    // abc a;
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;

    abc a(1,2);
    printABC(a);    // output: 1 2
    return 0;
}




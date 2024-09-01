#include<iostream>
using namespace std;
/*
class abc{
    public :
    int x,y;
    void print() const {   
        /*
            isko kaise lg rha hai ki ye obj1 ka hi x hai or yafir obj2 ka x nhi hai? 
            cpp confuse kyon nhi krta
            because hamre hr member func ke ander ek hidden parameter pass hota hai, jo ki obj1 ka pinter hai which "this" pointer.
        */
        // cout<<x<<" "<<y<<endl;
        //     //OR
        // cout<<this->x<<" "<<this->y<<endl;
            //both are same

    
//     }
// };
// ----------------------------------------
//              non static
// ---------------------------------------

// int main(){
//     abc obj1={1,2};
//     abc obj2={4,5};
//     obj1.print();   
//     obj2.print();  
//     obj1.x=50;
//     cout<<obj1.x;

//     /*
//     output: 1 2
//             4 5
//     */ 
//     return 0;
// }


/*----------------------------------------------
        static
---------------------------------------------*/
class abc{
    /*
        ab baat krte hai, static data member kya hote hai,
        1)static data member:that variable is going to share memory with all of the class instances.
        2)static member function:there in no instance of that class being passed into that method.
    */
    public :
    static int x,y; 
    void print() const{
        cout<<x<<" "<<y<<endl;
    }
    // static method
    static void print2(){
        cout<<x<<" "<<y<<endl;
    }
};

int abc::x; //static data members ko ese decalre krna hota h,ika mtlb hai,abc ke ssaare instances ,is particular variable ki single copy ko share krenge
int abc::y;
int main(){
    abc obj1;
    obj1.x=1;
    obj1.y=2;
    obj1.print();
    obj1.print2();
    abc obj2;
    obj2.x=10;
    obj2.y=20;
    obj2.print();
    obj2.print2();  //same output milega

    //static method ke baare me kahee or se study krna hai.
    return 0;
    /*
    ---------------------------------
            OUTPUT
    ------------------------------
    1   2
    10  20
    */

}











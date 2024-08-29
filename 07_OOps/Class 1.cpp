/*

-------------------------------------------------------------------
        class 1 contents:
----------------------------------------------------------------

class, objects,constructors,access specifiers,polymorphism

*/



#include<iostream>
#include<string>
#include<vector>
using namespace std;

//  class Student{  //Class is a bundle of properties and behavior. it is a blueprint of objectp
//     int id;         //class ke blueprint ka koi size hoga?-> 1 byte hoga because 1 byte is smallest addressing memory
//     int age;    //by default class ka access specifier private hota hai. jeevan jab ek insaan aata hai to uski saari information private hoti hai,fir aap instagram pr jaate ho or apni profile create krte hai or aap kehte ho me ye ye cheeze public krdunga, apna naam public krdunga,age bta dunga, by default saari cheeze private hoti hai,similary jab hm jb bhi class bnate hai, ssaari information private hoti hai.ex ek student hai, uski ek girl friend hai , ab wo ye baat kisi ko share nhi krna chahta,
//     bool present;
//     string name;
//     int nos;
    /*
        when we print size of student class object if inside the class:
        int id;  then size -> 4
        int id; int age;  then size -> 8
        int id; int age;bool present;  then size -> 12 why? 
                because of padding, what is padding?
                cpu have ragister in which each ragister size is 4 byte in 32 bit system 
                CPU se connected ek pipe hoti hai jo ki memory tak jati hai which is called memory bus
                wo hamare program ki memory se data utha utha kr lata hai, to wo ek hi baar me 4 byte read krle laayega or wo ragister pr fela deta hai.
                here 3 bytes extra allocated which is padding.

                -> compiler jab 4-4 bytes uthata hai to wo uske liye fast processing hoti hai but jaise si hm use 2-1 bytes uthane ke liye kahenge to isme usko 1 byte nikaalne me jyada time lgega islite wo extra bytes add krdeta hai , usi ko paddding kaehte hai.

        double a; double b,char c; then size will be 20 which is wrong , correct ans is 24
            because here compiler will to pick up big datatype , here big is 8 bytes.
        double a;double b;char c;bool h; -> ans 24 because compiler take char and bool in one go. here 6 bytes padding is added.


        ---------------------------------------------------
                CONCLUSION
        --------------------------------------------------
        SABSE bade datatype ke nearest multiple pe memory perle aao

        only bool ans; ->then size? -> 1😂

         SABSE bade datatype ke nearest multiple pe memory perle aao-> is point ko mt bhulna sab hojayege

        string name; ->isme string class instace 24 bytes leta hai now how? kisi ne likhi hogi use pta hoga.


        ---------------------------------------------------
                access specifier
        -------------------------------------------------
        by default , all things are private .
            there must be a way jo cheeze public krpaaye, to cpp me kaise hm kisi cheez ko private or public krsakte hai?
            uska naam hota hai, Access specifier,
            they define scope of access.

     */
    // ex : 
    // class Student{
    //     private:
    //     string gf;
    //     public:
    //     string name;
    //     int age;

        /* attributes/behevior :jab uski gf hai to uska kuch behavior bhi hoga like:chat krta hoga gf se,study bhi krta hoga, sleep bhi krte hoga,bunk bhi krta hoga
        ab kuchh information esi hai, jo wo btane me khush hai, or kuch information esi bhi hai ho wo share krne me khush nhi hai
        like wo study krta hai batane me khush h,bunk maarte hai batane me khush h but chat karta hai btane me khush nhi hai
        jis type se hm apni kuch information private rkhte ho kuch info.. public rkhte hai

        similarly jb hm class me bhi jb hm student bnate hai kuch info.. private rkhta hai or kuch public rakhte hai

        baat samjh me aati hai ye nhi, yes or no🥲
        */
    //     void study(){
    //         cout<<"Studying";
    //     }
    //     void sleep(){
    //         cout<<"Sleeping";
    //     }
    //     void bunk(){
    //         cout<<"Bunking";
    //     }
    //     void gfChatting(){
    //         cout<<"Chatting"<<endl;
    //     }
    // }

    // int main(){
    //     Student st1;
    //     st1.name="sameer";
    //     st1.age=3
    //     st1.gf="h..........."//this will generate an error
    // }




    //nt a;   //size pr koi frk nhi prega, bacause jab ye function actually call honge tab ye memory lenge
    
// };

// int main(){
//     // Student st1,st2;    //st1,st2 both are separate students, Object is an instance of a class 
//     cout<<sizeof(Student);// output should be 48 bytes but my ans is 56 , i dont know how.

//     return 0;
// }



/*---------------------------------------------------------------
        ABSTRATION
----------------------------------------------------------------
-> MEANS CHEEZON KO UPER UPER SE USE KRO , DONT GO INTO IMPLEMENTION
->USE THINGS IN ABSTRACT WAY





*/






// -----------------------------------------------------------
//             CONSTRUCTOR
// -----------------------------------------------------------
/*
    in above , we have doing this,
     Student st1;
        st1.name="sameer";
        st1.age=3
        st1.gf="h..........."//this will generate an error

-> so, if i have many want to create many object then each time should we doing work like that again and again?
    absolutely no,
    so, constructor is only function in the class in cpp that have no return type and Ctor is short form of costructor, so what it does?
    ->it construct instance of a class

*/
class Student{
    private:
        string gf;
    public:
        string name;
        int age;

        // constructor-> name is same as class name
        /*
            construcor is function or method which is used to assign values for the class data members/attributes.
            by default jb maine constructor nhi likha tha,to compiler ne khud se hi ek constructor add krdiya hoga, use hm kehte hai, default constructor.wo constructor kuch esa dikh rha hoga

            Student(){
            
            }
            kuchh nhi likha isme.compilter ko class me constructor hona mandetory hai.


        */
        Student(){// it is default compiler. whenever default constuctor is called then it will initialized/assign garbage value for each attrivute of a class
            cout<<"Constructor is callled"<<endl;
        }
        //ab jab maine constor likh diya to ab kya compiler construor add krega?: no , because compiler ne pehle constructor isliye add kiya tha , kyonki use lga , programmer bewakoof hai to usne pehle add krdiya, ab nhi krega.

        // Student(string _name,string _gf,int _age){
        //     name=_name;
        //     gf=_gf;
        //     age=_age;
        //     cout<<"Parameterixed constructor called"<<endl;
        // }

        // this same thing we can write is as:
        Student(string name,string gf,int age){
            this->name=name;        //name=name-> this will create an problem
            this->gf=gf;
            this->age=age;
            cout<<"Parameterixed constructor called"<<endl;
            // this is pointer that point at current object and "this" is pointer of type Students and this pointer is added by compiler privately
        }
        Student(string _name,int _age){
            name=_name;
            age=_age;
            cout<<"Parameterixed constructor called in which have 2 parameter"<<endl;
        }

         void study(){
            cout<<"Studying";
        }
        void sleep(){
            cout<<"Sleeping";
        }
        void bunk(){
            cout<<"Bunking";
        }
        void gfChatting(){
            cout<<"Chatting"<<endl;
        }
};

int main(){
    Student st1;    // output: constructor is called
    Student st2;    // st2 kahan pr allocate hoga? -> stack pr
    // to jab bhi me object create krrha hu, hr baar constructor call ho rha hai, so what is the scope of constructor? ans:public
    //if we make constructor as private then it will return an error.
    cout<<st1.name;

    Student st3("sameer","khan",20);    //isme sirf parameterized constructor call hoga
    cout<<st3.name<<endl;
    // cout<<st3.gf<<endl;// this will generate an error because is private.
    Student st4("sameer2",20);    //iski gf nhi hai,this will call constructor in which have only 2 parameter ,if it is not then it will generate error.


}

// --------------------------------------------------------------------------
//             POLYMORPHISM:
// ---------------------------------------------------------------------

/*
    yahan pr teenon constructor ke name same hai, to maine yahan pr nhi bataya konsa construcot call krna hai,
    ab ek term ho ti hai polymorphysm
    polymorphism means many forms.
    jaise ki aap apne papa ke bete ho,apni mummy ke bhi bete ho,again aap apni gf ke bhi bf ho,iske baad aap apni behen k bhai hoge, cousin ke chacha hoge, means aap ek hi bnde ho, apni different different hai, bnda ek hi hai ,
    similarly yahan pr function ek hi hai student naam ka,but wo yahan pr kitne kaam krrha hai, wo multi form dikha rha hai
    yes or no
    or kya aap bta rhe ho, tu kab konsa form ada krege? nhi , wo khud se determine krrha hai

    isiko hm kehte hai polymorphism


    imp: if i remove default constructor that created by me and i added parameterized constructor then ab default constructor run krege jab me non paramterixed object create krunga?
    no, becuase default constructor is only call when there is no constructors.
*/

Student st6;// ye momort kahan allocate krega? stack pr
cout<<str6.name;    // use for access data from stack.

// allocating in heap-> fir aapko delete bhi krna parega
Student *str7=new Student(); //allocate memroy in heap
cout<<str7.name;    // this will generate an error
cout<<str7->name;   //for access data from heap
cout<<(*str7).name;   //for access data from heap
// both are valid for heap

//ab memory leak hoga , ise kaise solve kre?
delete s4;      //now we can say no leak


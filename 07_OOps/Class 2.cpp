#include<iostream>
using namespace std;
/*
class Student{
    private:
    string gf;
    public:
    string name;
    int age;

    Student(string name,int age,string gf){
        this->name=name;
        this->age=age;
        this->gf=gf;
    }

    //getter /setter
    string getGFName(){ // to get the value of  private member
        return gf;  //both are same
        //return this->gf;
    }

    void setGfName(string gf){//to update the value of private members
        this->gf=gf;
    }

    void Study(){
        cout<<"Studying";
    }
    void bunk(){
        cout<<"bunking";
    }
    void Sleeping(){
        cout<<"sleeping";
    }
    void  chatting(){
        cout<<"chatting";
    }
};


int main(){
    Student st("sameer",20,"malik");
    // cout<<st.getGFName()<<endl;//we can get private data using getter
    st.setGfName("Indumati");
    cout<<"gf naem is"<<st.getGFName()<<endl;
    return 0;
}


*/

/*
-------------------------------------------------------------
        abstraction
---------------------------------------------------------------

*/
/*
Abstraction is another core concept in object-oriented programming (OOP). It refers to the practice of hiding the complex implementation details of a system and exposing only the necessary and relevant parts to the user. In C++, abstraction can be achieved using abstract classes and interfaces.

### Example of Abstraction in C++

```cpp*/
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function providing interface framework.
    virtual void draw() = 0;  // = 0 makes this function pure virtual
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw();  // Output: Drawing a Circle
    shape2->draw();  // Output: Drawing a Rectangle

    // Clean up
    delete shape1;
    delete shape2;

    return 0;
}
```
/*
### Explanation:

1. **Abstract Class (`Shape`)**: 
   - The class `Shape` is an abstract class because it contains a pure virtual function `draw() = 0`. This means that any class that inherits from `Shape` must provide an implementation for the `draw()` function.
   - Abstract classes cannot be instantiated directly. You can only create pointers or references to them.

2. **Derived Classes (`Circle` and `Rectangle`)**:
   - `Circle` and `Rectangle` classes inherit from the `Shape` class and provide their own implementations of the `draw()` function.
   - These classes are concrete classes because they provide implementations for all pure virtual functions in the base class.

3. **Polymorphism**:
   - In the `main()` function, `Shape* shape1 = new Circle();` and `Shape* shape2 = new Rectangle();` demonstrate the concept of polymorphism. The `draw()` method called on `shape1` and `shape2` will invoke the appropriate method depending on the actual object type (`Circle` or `Rectangle`).

### Benefits of Abstraction:
- **Simplified Interface**: Users interact with a simplified interface without needing to understand the complex underlying details.
- **Flexibility and Maintainability**: The implementation can change without affecting the users of the abstraction.
- **Code Reusability**: Common interfaces (like `Shape`) can be reused across different parts of a program.

*/


/*------------------------------------------------
            Encapsulation
-------------------------------------------------*/
/*
Encapsulation in C++ is implemented using classes, where data members (variables) and member functions (methods) are bundled together. Access to the data members is typically restricted using access specifiers like `private`, `protected`, and `public`. The `private` access specifier is commonly used to hide data members, and public member functions are provided to access and modify the private data.

->it is a way of implementing abstraction.

why encapsulation:-control how class data is modify.


->easy to handle
->protect integrity/security

-------------------------
perfect encapsulation:
--------------------------
-> if all data members are private.
->agr private hhonge to get or set kaise honge , through getter and setter.

encapsulation is often a mean to achieve abstraction, how, by hiding internal details and exposing what is necessary.
-> agr interview me puche what is encapsulation in short, to ise bol dena in short,

Here's a basic example of encapsulation in C++:*/

```cpp
#include <iostream>
using namespace std;

class Employee {
private:
    // Private data members
    string name;
    int salary;

public:
    // Constructor
    Employee(string empName, int empSalary) {
        name = empName;
        salary = empSalary;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for name
    void setName(string empName) {
        name = empName;
    }

    // Getter for salary
    int getSalary() {
        return salary;
    }

    // Setter for salary
    void setSalary(int empSalary) {
        if (empSalary > 0) {
            salary = empSalary;
        } else {
            cout << "Invalid salary amount!" << endl;
        }
    }
};

int main() {
    // Create an Employee object
    Employee emp("John", 50000);

    // Accessing the private data members through public methods
    cout << "Name: " << emp.getName() << endl;       // Output: Name: John
    cout << "Salary: " << emp.getSalary() << endl;   // Output: Salary: 50000

    // Modifying the private data members through public methods
    emp.setName("Jane");
    emp.setSalary(60000);

    cout << "Updated Name: " << emp.getName() << endl;     // Output: Updated Name: Jane
    cout << "Updated Salary: " << emp.getSalary() << endl; // Output: Updated Salary: 60000

    // Attempting to set an invalid salary
    emp.setSalary(-10000); // Output: Invalid salary amount!

    return 0;
}
```
/*
### Explanation:
- **Private Members:** The `name` and `salary` attributes are private, meaning they cannot be accessed directly from outside the class.
- **Public Methods:** The methods `getName()`, `setName()`, `getSalary()`, and `setSalary()` are public, meaning they can be accessed from outside the class. These methods are used to interact with the private data members.
- **Encapsulation:** The private data is encapsulated within the class, and the public methods provide controlled access to this data, ensuring that it cannot be modified arbitrarily. This promotes data security and integrity.

When you run the program, you'll see how encapsulation works by protecting the private data and controlling how it's accessed or modified.*/



/*---------------------------------------------
        INHERITANCE
--------------------------------------------------*/


        /*------------------------------------------
        
        super class/parent class/base class
                    |
        sub class /parent class/drived class
        --------------------------------------------*/


// Inheritance is a key concept in object-oriented programming (OOP) that allows a new class, known as a derived class or subclass, to inherit properties and behavior (data and methods) from an existing class, known as a base class or superclass. This promotes code reuse and establishes a natural hierarchy between classes.

// ### Basic Example of Inheritance in C++

// Here's an example that demonstrates how inheritance works in C++:

// ```cpp
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Derived class
class Dog : public Animal {  // Dog inherits from Animal    //public is mode of inheritance
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    Dog myDog;

    // Accessing the method from the base class
    myDog.eat();  // Output: This animal is eating.

    // Accessing the method from the derived class
    myDog.bark();  // Output: The dog is barking.

    return 0;
}
```

// ### Explanation

// - **Base Class (Animal)**: This is the class from which other classes will inherit. It has a method `eat()` that is available to all classes that inherit from it.

// - **Derived Class (Dog)**: This class inherits from the `Animal` class using the `public` keyword. This means that `Dog` inherits all the public and protected members of `Animal`. The `Dog` class also has its own method, `bark()`.

// - **`main()` Function**: Here, we create an object `myDog` of the `Dog` class. This object can call both the `eat()` method inherited from `Animal` and the `bark()` method defined in `Dog`.

// ### Types of Inheritance

// C++ supports different types of inheritance:

// 1. **Single Inheritance**: A class inherits from a single base class.
//     ```cpp
    class B : public A { };
    // ```

// 2. **Multiple Inheritance**: A class inherits from more than one base class.
//     ```cpp
    class C : public A, public B { };
    // ```

// 3. **Multilevel Inheritance**: A class is derived from a class which is also derived from another class.
//     ```cpp
    class B : public A { };
    class C : public B { };
    // ```

// 4. **Hierarchical Inheritance**: Multiple classes are derived from a single base class.
//     ```cpp
    class B : public A { };
    class C : public A { };
    // ```

// 5. **Hybrid Inheritance**: A combination of two or more types of inheritance.
//     ```cpp
    class C : public A, public B { };
    // ```

// ### Access Specifiers in Inheritance

// - **public inheritance**: Public and protected members of the base class remain public and protected in the derived class.
// - **protected inheritance**: Public and protected members of the base class become protected members in the derived class.
// - **private inheritance**: Public and protected members of the base class become private members in the derived class.

// ```cpp
class Base {
protected:
    int x;
};

class Derived : private Base {  // x is private in Derived
public:
    void show() {
        cout << "x = " << x << endl;
    }
};
// ```

// In this case, `x` is protected in the `Base` class but becomes private in the `Derived` class due to private inheritance.

// Inheritance in C++ is a powerful tool that helps organize and manage code by creating a hierarchical relationship between classes.



/*

    |Base class access modifier|    Mode of inheritance         |
    |                          |Public  |Protected  |Private    |        
    Public                     |Public | Protected  |Private    |
    Protected                  |Protected| Protected  |Private  |
    Private                     |NA       |NA           |NA     | not accessible


protected:members declared with protected access modifier are accessible within class itself and to its derived class.
private:-> within class hota hai
        -> derived class visiblity not possible.
        ->private data cant inherit.


private data derived class me inherit nhi hota hai.

*/

/*
--------------------------------------------
        MULTIPLE INHERITANCE
---------------------------------------------
*/

Here’s an example of multiple inheritance in C++:

```cpp
#include <iostream>
using namespace std;

// Parent Class 1
class Person {
public:
    string name;
    int age;

    void setPersonInfo(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Parent Class 2
class Employee {
public:
    int employeeID;
    double salary;

    void setEmployeeInfo(int id, double sal) {
        employeeID = id;
        salary = sal;
    }

    void displayEmployeeInfo() {
        cout << "Employee ID: " << employeeID << ", Salary: $" << salary << endl;
    }
};

// Child Class inheriting from both Person and Employee
class Manager : public Person, public Employee {
public:
    void displayManagerInfo() {
        displayPersonInfo();
        displayEmployeeInfo();
    }
};

int main() {
    Manager mgr;
    mgr.setPersonInfo("John Doe", 30);
    mgr.setEmployeeInfo(1001, 75000);

    cout << "Manager Information:" << endl;
    mgr.displayManagerInfo();

    return 0;
}
```

### Explanation:
- **Person** class contains attributes `name` and `age` and has a method to display this information.
- **Employee** class contains attributes `employeeID` and `salary` and has a method to display this information.
- **Manager** class inherits from both `Person` and `Employee`, allowing it to access attributes and methods from both parent classes.

### Output:
When you run the program, the output will be:

```
Manager Information:
Name: John Doe, Age: 30
Employee ID: 1001, Salary: $75000
```

This demonstrates how the `Manager` class can utilize the features of both `Person` and `Employee` classes through multiple inheritance.


// ------------------------------------------------------------------------------
//          POLYMORPHISM
// ----------------------------------------------------------

// ->Many forms
// ->existing in many form

// it have 2 types
// 1) compile time polymorphism-> it is faster than run time polymorphism. compile time polymorphism is also known as static polymorphism
    // to do that i have 2 ways:
    // 1)function overloading->ex. parameterized constructor,normal function,isme function ka naam same hota hai but no of paramter or return type different hote hai.
    // 2) operator overloading:(find all operator in cpp which can be overloaded)=,+,-,++,(),etc
// 2) runtime polymorphism

// Polymorphism in C++ is the ability of a function, object, or method to take on many forms. There are two types of polymorphism in C++:

// 1. **Compile-time Polymorphism (Static Polymorphism):**
//    - Achieved through function overloading and operator overloading.

// 2. **Run-time Polymorphism (Dynamic Polymorphism):**
//    - Achieved through inheritance and virtual functions.

// ### Example of Compile-time Polymorphism (Function Overloading):

// ```cpp
#include <iostream>
using namespace std;

class MathOperations {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two double values
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    MathOperations mathOps;

    cout << "Sum of 2 and 3: " << mathOps.add(2, 3) << endl;
    cout << "Sum of 2, 3, and 4: " << mathOps.add(2, 3, 4) << endl;
    cout << "Sum of 2.5 and 3.5: " << mathOps.add(2.5, 3.5) << endl;

    return 0;
}
```

### Explanation:
- The `add` method is overloaded to work with different types and numbers of arguments.
- The correct version of the method is chosen at compile-time based on the arguments passed.

### Example of Run-time Polymorphism (Using Virtual Functions):

```cpp
#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    // Virtual function
    virtual void sound() {
        cout << "This is an animal sound." << endl;
    }
};

// Derived Class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived Class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal *animalPtr;
    Dog dog;
    Cat cat;

    // Pointing to Dog object
    animalPtr = &dog;
    animalPtr->sound();  // Output: Dog barks.

    // Pointing to Cat object
    animalPtr = &cat;
    animalPtr->sound();  // Output: Cat meows.

    return 0;
}
```

### Explanation:
- The `sound` function in the `Animal` class is declared as `virtual`.
- The derived classes `Dog` and `Cat` override the `sound` function.
- At run-time, the correct function is called based on the type of object pointed to by the `animalPtr`.

### Output:
```
Dog barks.
Cat meows.
```

This demonstrates run-time polymorphism, where the decision of which function to invoke is made at run-time, depending on the actual object type.











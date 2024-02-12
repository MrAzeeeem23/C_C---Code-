// Friend function is used to inherite the private methods are variables from parant class to chiled class
// private is only acceable within the parent class or super class.

// there are two methods that we can use insted of using friend function 
// 1) getters and setters.
// 2) or put the values in protechted member.

// ---------NOTE---------
// Friend function is not a prefered method to use insted we can use protected method to avoid security issues.

#include <iostream>
#include <string>

using namespace std;

// base class
class Man{
    string _name;
    int _age;
    Man(){} 

    friend class Superman; // friend keyword is used and along with the child class name. it gives the permission to access all of the private members.

protected:
    Man(const string & name, const int age)
    : _name(name) , _age(age){

    }
    void run(){puts("I can run"); }

public:
    void sayName() const;
};

void Man::sayName() const {
    cout << "My name is: " << _name << " and my age is: " << _age << endl;
}

// Superclass

class Superman : public Man{
    bool flight;
public:
    Superman(string name) : Man(name , 26){}
    void run(){
        printf("I can run at light speed %d \n", _age);
        }
};

class Spiderman : public Man{
    bool Wapping;
public:
    Spiderman(string name) : Man(name , 19){}
    void run(){
        printf("I can run at normal speed %d \n");
        // if is put the _age in spider man class it will not execute.
    }
};



int main(){
    
    Superman Mark("Mark");
    Mark.sayName(); 
    
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

// base class
class Money{
public:
    void money(){
        puts("i got 500k amount of money in my account");
    }
};

class Man{
    string _name;
    int _age;
    Man(){} 

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
    void run(){puts("I can run at light speed");}
};

class Spiderman : public Man , public Money{
    bool Wapping;
public:
    Spiderman(string name) : Man(name , 19){}
    void run(){
        puts("I can run at normal speed");
    }
};



int main(){
    
    Superman Mark("Mark");
    Mark.sayName(); 

    Spiderman peter("Peter parker");
    peter.money();

    return 0;
}
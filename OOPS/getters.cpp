#include <iostream>
#include <string>

using namespace std;

class myuser{
    // we should use underscore at the starting of the name is is considerd to be the best practice.
    int _Secret = 22; // by default it is private 

    public:
    string name = "hello world";
    void func()
    // {
    //     // cout << "print massage: " << name << endl;
    // }

    // this is a setter
    // "const" is a keyword use to consider it to be constant.
    void setuser(const int &newscreat){
        _Secret = newscreat;
    }
    // this is getter(refer the example of it on line no 40 or below)

    int mylog()const;

    int getuser()/*const*/{
        // we can use const to give access to the const object.
        return Secret;
    }
};
// if in case we wnat to access class method outside of the class or it is not an object of a class.
// we use some of the sentatic sugar to access them

// First we have to use the class name and :: this methos is called scope resilution this sign and method name. to access them.
// NOTE- functions used in a class are said to be methods.
void myuser::func(){
        cout << "print massage: " << name << endl;
}

// if a method in a class have only const and it is not returning anything use have to use again sentatical sugar.
int myuser::mylog()const {
    cout << "hello i am method from class"
}

int main(){
    myuser ankit;
    ankit.name = "ankit";
    ankit.func();
    ankit.setuser(333);

    cout << ankit.getuser() << endl;

    return 0;

}

// ---------NOTE------------//
/*
Is is most common to use constant objects but their is a catch
in order to access constant method in side a class we use const keyword in the getter method
non constant object can access const methods but constant objects cannot access non constent methods.


*/
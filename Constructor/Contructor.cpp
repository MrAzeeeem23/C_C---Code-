#include <iostream>
#include <string>

using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;


    public: 
    Phone(); // default constructor
    Phone(const string & name, const string & os, const int & price); // paramether constructor
    Phone(const Phone &); // Copy constructor

    // getter
    string getName(){
        return _os;
    }

    ~Phone();
};

Phone::Phone() : _name(), _os("andy"), _price(){
    puts("default constructor");
}

Phone::Phone(const string & name, const string & os,const int & price) : _name(name),_os(os),_price(price){
    puts("this is parameter constructor");
}

Phone::Phone(const Phone & values){
    puts("override copy constuctor");
    _name = "new-"+values._name;
    _os = "ver-"+values._os;
    _price = values._price;
}

Phone::~Phone(){
    printf("Distructor is called %s\n" , _name.c_str());
}

int main(){
    
    Phone samsungS24;
    cout << samsungS24.getName() << endl;

    Phone Oneplus12("OP12", "Oxygen14" , 70000);
    cout << Oneplus12.getName() << endl;

    return 0;
}

// if the constructor is defined in private member then object of that class is can not be decleared.

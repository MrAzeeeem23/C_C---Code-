#include <iostream>
#include <string>

using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;

    Phone() // default constructor

    public: 
    Phone(const string & name, const string & os, const int & price); // paramether constructor
    Phone(const Phone &); // Copy constructor

    // getter
    string getName(){
        return _os;
    }

    ~Phone();
};


Phone::Phone() : _name(), _os(), _price(){
    puts("default constructor");
}

phone::Phone(const string & name, const string & os,const int & price) : _name(name),_os(os),_price(price){
    puts("this is parameter constructor");
}

Phone::Phone(const Phone & values){
    puts("override copy constuctor")
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
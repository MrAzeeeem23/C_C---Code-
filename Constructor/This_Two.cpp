// this is a self referensing point

#include <iostream>
#include <string>

using namespace std;

class Rectangle{
    double _length;
    double _breath;

public: 
    // constructor
    Rectangle(double l = 2.0, double b = 3.0){
        _length = l;
        _breath = b;
    }

    double Area(){
        return _length * _breath;
    }

    int compare(Rectangle rectangle){
        return this->Area() > rectangle.Area();
    }
};

int main(){

    Rectangle R1(2.0, 2.0);
    Rectangle R2(4.0, 4.0);

    if(R1.compare(R2)){
        cout << "H2 is smaller "; 
    }else {
        cout << "H2 is bigger" ;
    }

    return 0;
}
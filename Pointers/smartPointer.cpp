#include <iostream>
#include <string>
#include <memory>

using namespace std;

class User{
public:
    User(){
        cout << "user constructor" endl;
    } // constructor

    ~User(){
        cout << "user distructor" endl;
    }

    void testcall(){
        cout << "hello world" << endl;
    }

}

int main(){

    {
        
    }

    return 0;
}

// _____NOTE_____________
/*
1) Unique Pointers
2) Memory gets free as memory ends
3) you cannot copy them
*/
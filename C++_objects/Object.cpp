#include <iostream>

using namespace std;


// "struct" keyword is used to define the structure of the object.
struct my_user{
    const int uId;
    const char *name;
    const char *Email;
    bool active_account;
    
};

int main(){
    //my_user refers to the object structure and new_user refers to the new object which have values of it in {}
    my_user new_user = {1,"AzeemKhan","azeem@Email.com",true};

    my_user second_user = {2,"AashirHaris", "Aashir@Email.com", true};

    cout << "Show Email Id: " << second_user.Email << endl;

    return 0;
}

//------------NOTE-------------//
// when we access the boolean value and try to compile it it will return 1 or 0 .
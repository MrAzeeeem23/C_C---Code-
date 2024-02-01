#include <iostream>

using namespace std;

struct my_user{
    const int uId;
    const char *name;
    const char *Email;
    int active_account;
    
};

int main(){

    my_user new_user = {1,"AzeemKhan","azeem@Email.com",true};

    my_user second_user = {2,"AashirHaris", "Aashir@Email.com", true};

    cout << "Show Email Id: " << second_user.Email<< endl;

    return 0;
}
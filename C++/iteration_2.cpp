#include <iostream>

using namespace std;

int main(){
    int my_array[] = {1,2,3,4,5,6};

    for(int i : my_array){
        cout << i << endl;
    }

    char name_l[] = "azeem";

    int i = 0;
    for(i; name_l[i]; i++){
        cout << name_l[i] << endl;
    }

    return 0;
}
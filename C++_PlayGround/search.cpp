#include <iostream>

using namespace std;

void func(char* arr,char target){
    
    for (int i = 0; i <= sizeof(arr); i++)
    {
        if(arr[i] == target){
            cout << arr[i] << endl;
        }
    }
}

int main(){
    char arr[] = {'a','b','c','x','y','z'};

    func(arr,'x');

    return 0;
    
}
#include <iostream>

using namespace std;

int main(){
    int some_api = 2;

    try{
        cout << "tring to use api values \n";
        cout << "trying to use again \n";
        throw some_api;
        cout << "nothing is going to print after throw and return \n";
    }
    catch(int n){
        cout << "Exeption handled corretly \n";
    } catch(...){
        cout << "some thing went wrong \n";
    }

    cout << "execute rest of the code \n";

}
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main(){

    list<int> mylist;

    for(int i = 0; i <+ 10; ++i){
        mylist.push_back(i);
    }

    cout << mylist.front() << endl;

    cout << mylist.back() << endl;

    mylist.pop_back();

    mylist.reverse();

    for(int i: mylist){
        cout << i << endl;
    }

    cout << "\n";

    mylist.sort() // not recomended.
    return 0;
}
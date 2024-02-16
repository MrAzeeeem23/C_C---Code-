#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main(){

    queue<int> Myqueue;

    Myqueue.push(2);
    Myqueue.push(3);
    Myqueue.push(4);
    Myqueue.push(5);
    Myqueue.push(6);

    cout << Myqueue.front() << endl;
    cout << Myqueue.back() << endl;
    Myqueue.pop();
    cout << Myqueue.front() << endl;

    while(!Myqueue.empty()){
        cout << " " << Myqueue.front();
        Myqueue.pop();
    }

    cout << "\n";
    cout << Myqueue.front() << endl;

    priority_queue<int> mypq;

    mypq.push(20);
    mypq.push(30);
    mypq.push(60);
    mypq.push(50);
    mypq.push(3);

    cout << "this is priority queue" << endl;

    while (!mypq.empty()){
        cout << " " << mypq.top();
        mypq.pop();
    }
    
    return 0;

}
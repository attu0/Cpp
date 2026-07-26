#include<bits/stdc++.h>
using namespace std;

int main(){
    //fifo
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    cout<<q.back();
    cout<<q.front();
    cout<<q.empty();

    //all operations happpens in constant time
    return 0;
}
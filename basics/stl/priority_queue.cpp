#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(1); //{1}
    pq.push(2); //{2,1}
    pq.push(3); //{3,2,1}
    pq.emplace(4); //{4,3,2,1}
    cout<<pq.top(); //prints 4
    pq.pop(); //{3,2,1}
    cout<<pq.top(); //prints 3

    priority_queue<int,vector<int>,greater<int>> minpq; //min heap
    // same as above but in small to big fasion

    return 0;
}
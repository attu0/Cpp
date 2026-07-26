#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.emplace_back(2);
    l.push_front(3);
    l.emplace_front(4);

    //rest functions are same as vector but complexity is O(n) in list and O(1) in vector
    
    return 0;
}
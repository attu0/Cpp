#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.emplace_back(2);
    d.push_front(3);
    d.emplace_front(4);
    d.pop_back();
    d.pop_front();
    d.back();
    d.front();

    //rest functions are same as vector


    return 0;
}
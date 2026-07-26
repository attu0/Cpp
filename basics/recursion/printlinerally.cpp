#include<bits/stdc++.h>
using namespace std;

void print(int a,int b){
    if(a>b){
        return;
    }
    cout<<a<<" ";
    print(a+1,b);
}

void print2(int a,int b){
    if(b<a){
        return;
    }
    cout<<b<<" ";
    print2(a,b-1);
}

void bt(int a){
    if(a<1){
        return;
    }
    bt(a-1);
    cout<<a<<" ";
}


int main(){
    print(1,10);
    cout<<endl;
    print2(1,10);
    cout<<endl;
    bt(10);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


void print(int cnt,int n){
    if (cnt>n){
        return;
    }
    cout<<"Atharv"<<endl;
    print(cnt+1,n);
}

int main(){
    print(1,10);
    return 0;
}
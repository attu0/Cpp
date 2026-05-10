#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin >> age;
    if(age>18){
        cout << "You are Abult";
    }else if (age >15){
        cout << "You are an Teen";
    }else{
        cout<< "You are an kid";
    }
    return 0;
}
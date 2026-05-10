#include<bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    default:
        cout<<"Enter number between 1-7";
        break;
    }
    return 0;
}
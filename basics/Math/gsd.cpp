#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = a%b;
    }
    if(a==0) return b;
    else return a;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << "The GCD of " << a << " and " << b << " is " << gcd(a,b) << endl;  
    return 0;
}
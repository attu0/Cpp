#include<bits/stdc++.h>
using namespace std;

int armstrong(int n){
    if(n < 0){
        return 0;
    }
    int temp = n;
    while(temp!=0){
        int a = temp%10;
        int b = pow(a,3);
        n = n - b;
        temp = temp/10;
    }
    if(n == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin >> n;
    armstrong(n) ? cout << "Yes, it is an armstrong number." << endl : cout << "No, it is not an armstrong number." << endl;
    return 0;
}
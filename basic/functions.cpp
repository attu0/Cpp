#include<bits/stdc++.h>
using namespace std;

int sumof2(int a,int b){
    return a+b;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int res = sumof2(num1,num2);
    cout << res<<endl;
    cout<<min(num1,num2)<<endl;
    cout<<max(num1,num2)<<endl;
    return 0;
}


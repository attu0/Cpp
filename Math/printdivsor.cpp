#include<bits/stdc++.h>
using namespace std;

void divisor(int n){
    vector<int> divisors;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            divisors.push_back(i);
            if(n/i!=i) divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(),divisors.end());
    for(int d : divisors){
        cout<<d<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    divisor(n);
    return 0;
}
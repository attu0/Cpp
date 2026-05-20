#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    int cnt =0;
    for(int i=1;i*i<n;i++){
        if(n%i==0){
            cnt++;
            if(n%i!=i) cnt++;
        }
    }
    if(cnt==2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin >> n;
    prime(n) ? cout << "Yes, it is a prime number." << endl : cout << "No, it is not a prime number." << endl;
    return 0;
}
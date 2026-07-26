#include<bits/stdc++.h>
using namespace std;

// Patterns
// for outer loops count no. of lines
// for inner loops focus on colums, & connect them somehow to the rows
// pritn inside inner for loop
// observe sysmetry

//Q
// 12345
// 1234
// 123
// 12
// 1

//sol


void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);
    return 0;
}
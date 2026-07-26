#include<bits/stdc++.h>
using namespace std;

// Patterns
// for outer loops count no. of lines
// for inner loops focus on colums, & connect them somehow to the rows
// pritn inside inner for loop
// observe sysmetry

//Q
// 1
// 22
// 333
// 4444
// 55555

//sol
//outer loop for n times
// for 0--> 1, 1--> 2 2, 2--> 3 3 3; so on

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
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
#include<bits/stdc++.h>
using namespace std;

// Patterns
// for outer loops count no. of lines
// for inner loops focus on colums, & connect them somehow to the rows
// pritn inside inner for loop
// observe sysmetry

//Q
// *****
// ****
// ***
// **
// *

//sol
//outer loop n times
//

void print1(int n){
    for(int i=n;i>=0;i--){
        for(int j=i;j>=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    // for(int i=0;i<n;i++){
        // for(int j=0;j<n-i;j++){
            // cout<<"*";
        // }
        // cout<<endl;
    // }
}

int main(){
    int n;
    cin>>n;
    print1(n);
    return 0;
}
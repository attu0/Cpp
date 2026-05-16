#include<bits/stdc++.h>
using namespace std;

// Patterns
// for outer loops count no. of lines
// for inner loops focus on colums, & connect them somehow to the rows
// pritn inside inner for loop
// observe sysmetry

//Q
// *
// **
// ***
// ****

//sol
//outer loop for 4 times
// for 1st line print 1 star, for 2nd line print 2 stars, for 3rd line print 3 stars, for 4th line print 4 stars

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
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
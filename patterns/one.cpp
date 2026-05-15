#include<bits/stdc++.h>
using namespace std;

// Patterns
// for outer loops count no. of lines
// for inner loops focus on colums, & connect them somehow to the rows
// pritn inside inner for loop
// observe sysmetry

// Q 
// ****
// ****
// ****
// ****


//sol 
// 4 lines outter will run for 4 times
// inner loop will run for 4 times to print 4 stars in each line

int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
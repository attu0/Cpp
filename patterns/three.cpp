#include<bits/stdc++.h>
using namespace std;

// Patterns
// for outer loops count no. of lines
// for inner loops focus on colums, & connect them somehow to the rows
// pritn inside inner for loop
// observe sysmetry

//Q
// 1
// 12
// 123
// 1234
// 12345

//sol
// outer loop for 5 times
// for 1st line print 1, for 2nd line print 1 & 2, for 3rd line print 1,2 & 3, for 4th line print 1,2,3 & 4, for 5th line print 1,2,3,4 & 5
// 0-->1, 1--> 1 2, 2--> 1 2 3, so on  

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
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
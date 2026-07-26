#include<bits/stdc++.h>
using namespace std;

int main(){
    sort(a,a+4); //for array
    sort(v.begin(),v.end()); //for vectors

    //sort in decending order
    sort(a,a+n,greater<int>); //sorrts in decending order

    //self written comperator
    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    //sort it acc to 2nd ele in ascending
    //if 2nd is same then sort acc to 1st ele in decending
    sort(a,a+n,comp);

    //binary
    int num = 7;
    int cnt = __builtin_popcount(); //no. of 1 in binary form
    long long num 165786578687;
    int cnt = __builtin_popcountll();    //for datatype change
    return 0;
}

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first < p2.first) return false;
    return true;
}
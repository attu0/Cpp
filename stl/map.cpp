#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mpp;
    map<int,pair<int,int>> mp;
    //key value same as hashmap
    mpp[1] = 2;
    mpp.emplace({3,1});
    mpp.insert({1,2});
    //stores unique keys in sorted manner
    for (auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    auto it = mpp.find(3); //gets the address in map
    cout<<*(it).second(); //returns value of value in map at that address

    cout<<mpp.lower_bound(2);
    cout<<mpp.upper_bound(3);
    
    //erase swap size empty are same
    //0(log(n)) mostly
    return 0;
}
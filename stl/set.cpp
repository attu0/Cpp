#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.emplace(3);
    st.emplace(3);
    cout<<st.size();
    //stores in sorted fasion but no repetition
    auto it = st.find(3); //return iterator who points to the 3
    st.erase(3); //remove 3

    int cnt = st.count(1)// where it is present or not, cause the occrance in set is only once
    st.erase(it); // erase using iterator

    st.clear();
    //rest is same as others

    //imp
    cout<<st.lower_bound(2);
    cout<<st.upper_bound(2);

    //tc in 0(log(n)) for all operations, sorted and unique presence
    return 0;
}
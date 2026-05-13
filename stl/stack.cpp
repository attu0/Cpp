#include<bits/stdc++.h>
using namespace std;

int main(){
    //lifo
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);
    cout<<st.top();
    st.pop();
    cout<<st.top();
    cout<<st.size();
    cout<<st.empty();

    stack<int>st1,st2;
    st1.swap(st2);

    // push pop top 0(1) tc

    return 0;
}
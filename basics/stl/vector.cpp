#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector <pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2); //better than push_back runs faster
    vector<int> v(5,100); //{100,100,100,100,100}
    vector<int> v(5); //{0,0,0,0,0}
    vector<int> v1(v); //copy of v
    //how to access elements in vector

    vector<int>::iterator it = v.begin(); //1st elem
    it++;
    cout<<*(it)<<" ";
    vector<int>::iterator it = v.end(); ///next after the last element
    v.back(); //last element
    cout<<v[0]<<" "<<v.at(0); //same same but different
    return 0;
    //looping

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it:v){
        cout<<it<<" ";
    }

    //remove element
    v.erase(v.begin()+1); //rem that element
    v.erase(v.begin()+1,v.begin()+3); //rem [start,end)

    //insert fun
    v.insert(v.begin(),20); //insert at the beginning
    v.insert(v.begin()+1,2,20); //insert 2 20s at the position of begin+1
    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end()); //insert copy vector at the beginning

    cout<<v.size();
    v.pop_back(); //rem last element
    v1.swap(v); //swap v and v1
    v.clear(); //rem all elements
    cout<<v.empty(); //check if vector is empty or not
}
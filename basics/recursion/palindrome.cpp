#include<bits/stdc++.h>
using namespace std;

bool checkpal(string &s,int i){
    if (i>=s.size()/2){
        return true;
    }
    if (s[i]!=s[s.size()-i-1]){
        return false;
    }
    return checkpal(s,i+1);

}

int main(){
    string s = "MAM";
    cout << endl << checkpal(s,0) << endl;
    return 0;
}
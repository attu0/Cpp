#include<bits/stdc++.h>
using namespace std;

int return_palindrome(int n){
    int rev=0,rem,temp;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==n){
        return 1;
    }
    else{
        return 0;
    }
}   

int main(){
    int n;
    cin>> n;
    if(return_palindrome(n)){
        cout<< "Yes, it is a palindrome."<< endl;
    }
    else{
        cout<< "No, it is not a palindrome."<< endl;
    }
    return 0;
}
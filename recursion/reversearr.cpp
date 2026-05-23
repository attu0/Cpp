#include<bits/stdc++.h>
using namespace std;

void rev(int arr[], int l, int r){
    if(l >= r){
        return;
    }

    swap(arr[l], arr[r]);

    rev(arr, l + 1, r - 1);
}

void rev2(int arr[],int i,int n){
    if(i>=n/2){
        return;
    }

    swap(arr[i],arr[n-i-1]);

    rev2(arr,i+1,n);

}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    rev2(arr, 0, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
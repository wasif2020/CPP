#include <bits/stdc++.h>
using namespace std;
int secondlar(int arr[],int n){
    int maxim=INT_MIN;
    int sl=-1;
    int m=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>maxim){
            sl=m;
            m=i;
            maxim=arr[i];
        }
    }
    if(sl==-1){
        return -1;
    }
    return sl;
}

int main() {
    int arr[]={3,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<secondlar(arr,n);
    return 0;
}

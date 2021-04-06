#include<iostream>
using namespace std;

int main(){
int a[5]={1,5,8,9,0};
cout<<a<<endl; // contains the address of first element of the array
cout<<a+1<<endl;// contains address of second element of array

for(auto x:a){
  cout<<x<<endl;
}

  return 0;
}

#include<iostream>
using namespace std;
void armstrongNo(int n){
int ans=0;
int rem;
int temp=n;
while(n>0){
  rem=n%10;
  ans=ans+rem*rem*rem;
  n=n/10;
}
  if(ans==temp){
    cout<<"armstrongNo";
  }
  else{
    cout<<" not armstrongNo";
  }
}
int main(){
int n;
cin>>n;
armstrongNo(n);

  return 0;
}

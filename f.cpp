#include <iostream>
using namespace std;
int BinarySearch(int arr[], int key, int s, int e)
{
 int mid;
 if (s > e){
  cout << "Number is not found";
  return 0;
 } else {
  mid = (s + e) / 2;
  if(arr[mid] == key){
   cout << "key is at postion: " << mid;
   return 0;
 } else if (key > arr[mid]) {
   BinarySearch (arr, key, mid+1, e);
 } else if (key < arr[mid]) {
   BinarySearch (arr, key, s, mid-1);
  }
 }
}
int main(){
 int arr[100], key, i, n, s, e;
 cout <<"Enter the size of array"<<endl;
 cin >> n;
 cout <<"Enter the elements of array"<<endl;
 for(i=0; i<n; i++) {
  cin >> arr[i];
 }
 cout <<"Enter key element :";
 cin >> key;
 s = 0;
 e = n-1;
 BinarySearch (arr, key, s, e);
 return 0;
}

#include<iostream>
using namespace std;
class Mark{
public:
  int physics;
  int maths;
  int chemistry;
  int english;
  int hindi;
Mark(int a, int b,int c, int d, int e){
  physics=a;
  maths=b;
  chemistry=c;
  english=d;
  hindi=e;
}
  void subjectmarks(){
  cout<<"physics="<<physics<<endl;
  cout<<"maths="<<maths<<endl;
  cout<<"chemistry"<<chemistry<<endl;
  cout<<"english="<<english<<endl;
  cout<<"hindi="<<hindi<<endl;
  }
};
int main(){
  Mark m(50,60,70,80,90);
  cout<<"marks of students:-"<<endl;
  m.subjectmarks();
  return 0;
}

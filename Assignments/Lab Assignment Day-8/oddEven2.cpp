#include<iostream>
#define MAX 10

using namespace std;
class Stack{
 public:
 int a[MAX];
 int i=-1;
 bool isempty(){
  bool t;
  if(i==-1)
   t=1;
  else
   t=0;
  return t;
 }
 bool isfull(){
  if(i==MAX-1)
   return 1;
  else
   return 0;
 }


 void in(int n){
  if(isfull()==1)
   cout<<"CAN'T ENTER MORE DATA "<<endl;
  else{  
   i++;
   a[i]=n; 
      
   }
 
 } 
 void pop(){
  if(isempty()==1)
   cout<<"NOTHING TO POP"<<endl;
  else
   i--;
 }
 void show(){
  int j=0;
  
  for(j=0;j<=i;j++)
   cout<<a[j]<<" ";
  cout<<endl;
 }
 int peek(){
  cout<<"PEEK IS "<<a[i]<<endl;
 }


};
class twostack{
 public:
 Stack odd;
 Stack even;
 void in(int n){
  if(n%2==0){
   even.in(n);
  }
  else
   odd.in(n);
 }
 void show(){
  cout<<"ODD STACK "<<endl;
  odd.show();
  cout<<"EVEN STACK "<<endl;
  even.show();
 }
};
int main(void){
 twostack a;
 a.in(4);
 a.in(6);
 a.in(5);
 a.in(7);
 a.show();
 return 0;
}

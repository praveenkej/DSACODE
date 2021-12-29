#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter the number a"<<endl;
  cin>>a;
  cout<<"enter the number b"<<endl;
  cin>>b;
  char op;
  cout<<"enter the operation "<<endl;
  cin>>op;
  switch(op){
  case '+': cout<<(a+b)<<endl;
            break;
  case '-': cout<<(a-b)<<endl;
            break;
  case '*':cout<<(a*b)<<endl;
            break;
  case '/':cout<<(a / b)<<endl;
           break;
  case '%':cout<<(a%b)<<endl;
           break;
  default :cout<<"please enter valid operation"<<endl;
}
return 0;
}

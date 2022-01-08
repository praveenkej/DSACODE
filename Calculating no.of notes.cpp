#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    int num =1;
   
  switch(num){
       case 1:cout<<"number of Hundred notes = "<<x/100<<endl;
       x=x-(x/100)*100;
       case 2:cout<<"number of 50 ruppes note="<<x/50<<endl;
       x=x-(x/50)*50;
       case 3:cout<<"number of twenty rupees note= "<<x/20<<endl;
       x=x-(x/20)*20;
       case 4: cout<<"number of 1 rupees note= "<<x<<endl;
    
  }
}
    

// Print weather given number -ve , +ve < zero.
#include<iostream>
using namespace std;
int main (){
  int a;
  cin>> a;
  if (a>0){
      cout<<"positive";
  }
  else if (a==0){
        cout<<"Zero";
  }
  else{
      cout << "negative";
  }


}

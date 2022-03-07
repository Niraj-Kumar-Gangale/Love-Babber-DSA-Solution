// Print weather given number uppercase, lowercase, number.
#include<iostream>
#include <math.h>

using namespace std;
int main (){
  int a;
  a= cin.get();
  if(a>='a'&& a<='z'){
      cout << "lower case\n";
  }else if (a>='A'&& a<='Z'){
      cout << "uppper case\n";
  }
  else{
      cout <<"Number in the input\n";
  }
}


// Print weather given number -ve , +ve < zero.
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































//
//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//
//int lcmOfTwo(int a, int b) {
//    int lcm;
//    if(a>b)
//        lcm = a;
//    else
//        lcm = b;
//    while(1) {
//        if( lcm%a==0 && lcm%b==0 ) {
//
//            break;
//        }
//        lcm++;
//    }
//    return lcm;
//}
//
//
//int main(){
//    int time1,time2;
//    int r1,r2,s1,s2,t,d;
//    cin>>r1>>r2>>s1>>s2>>t>>d;
//    // for r1>r2
//    if (r1>r2){
//        // condition  when there is no point of interection
//        if ((r1+r2)<d&&(r1-r2)>d){
//            //code
//            cout<<"no crash";
//            exit;
//        }
//            // condition for the one point of interection
//        else if ((r1+r2)==d&&(r1-r2)==d){
//            //code
//            //point e and f are the same
//            double t1=(2*r1*3.141592653589793)/s1;
//            time1=t1;
//            double t2=(2*r2*3.141592653589793)/s2;
//            time2=t2;
//            int lcm = lcmOfTwo(time1,time2);
//            cout<<lcm<<" "<<"E&F"<<endl;
//            exit;
//
//        }
//            //for two point interection
//        else{
//            //code
//            //outside
//
//            //point e
//
//            //point f
//
//            //inside
//
//            //point e
//
//            //point f
//
//            //center on the line
//
//            //point e
//
//            //point f
//
//        }
//    }
//        //if r1<r2
//    else if (r1<r2){
//        // condition 1 when there is no point of interection
//        if ((r1+r2)<d||(r2-r1)>d){
//            //code
//            cout<<"no crash";
//            exit;
//        }
//            // condition for the one point of interection
//        else if ((r1+r2)==d||(r2-r1)==d){
//            //code
//            //point e and f are the same
//            double t1=(2*r1*3.141592653589793)/s1;
//            time1=t1;
//            double t2=(2*r2*3.141592653589793)/s2;
//            time2=t2;
//            int lcm = lcmOfTwo(time1,time2);
//            cout<<lcm<<" "<<"E&F"<<endl;
//            exit;
//
//        }
//            //for two point interection
//        else{
//            //code
//            //outside
//
//            //point e
//
//            //point f
//
//            //inside
//
//            //point e
//
//            //point f
//
//            //center on the line
//
//            //point e
//
//            //point f
//        }
//    }
//        // r1=r2
//    else{
//        if ((r1+r2)<d){
//            //code
//            cout<<"no crash";
//            exit;
//        }
//            // condition for the one point of interection
//        else if ((r1+r2)==d){
//            //code
//            //point e and f are the same
//            double t1=(2*r1*3.141592653589793)/s1;
//            time1=t1;
//            double t2=(2*r2*3.141592653589793)/s2;
//            time2=t2;
//            int lcm = lcmOfTwo(time1,time2);
//            cout<<lcm<<" "<<"E&F"<<endl;
//            exit;
//
//        }
//            //condition for 2 point intererction
//        else{
//            //code
//            //outside
//
//                //point e
//
//                //point f
//
//            //inside
//
//                //point e
//
//                //point f
//
//            //center on the line
//
//                //point e
//
//                //point f
//        }
//
//    }
//}
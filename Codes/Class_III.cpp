//make Class_III.ex

#include <iostream>

using namespace std;
class TwoNum{
public:
   // these variable are only one during the whole running time meaning that objects share this variable
  static double a;
  //mutable varibales are only those that the constant function is allowed to change them
  double b;
  mutable double max;
  
public:
  TwoNum(){a=0;b=0;};
  TwoNum(double aout, double bout){a=aout;b=bout;}
  ~TwoNum(){};
  
  void Print_num(){
    cout<<"static a:"<<a<<", non-static b:"<<b<<endl;
  }
  //similar like general functions, methods can also defined as inline
  inline double MAX() const{ //this function must be constant as it will be later used in another constant function
    return (a>b ? a : b);
  }
  
//despite teh fact that the function is constant, but it is allowed to change the value of the mutable variables
//typical way of defining a constrant function
//   <return-value> <class>::<member-function>(<args>) const
// {
//         // ...
// }
//constant function can act on constant and nonconstant objects
  double Square_Max() const{
    max=MAX();
    return max*max; 
  }
  void Print_a(){
    cout<<"static a is: "<<a<<endl;
  }
};
//the way that we have define is similar like the global variables but using them is less dangress 
double TwoNum::a; //defining the static varible

int main(){
  
  //defining a constant variable which its value is fixed during the whole running time
  //using const is better than employing a macro as it is understable by the compiler 
  // and not substituted at the preprocessing part
  const int SIZE=5;
  //one can define an array of objects;
  //calling concstructor for each of teh elements of the array object
  TwoNum Num_arr[SIZE]={ TwoNum(1.2,3.2), TwoNum(4.5,2.1), TwoNum(7.5,6.2), TwoNum(0.2,8.1), TwoNum(2.1,4.5) };
  
  for(int i=0; i< SIZE; i++){
    Num_arr[i].Print_a();
    cout<<"The squeare of maximum value of element["<<i<<"] is= "<< Num_arr[i].Square_Max()<<endl;
  }
  Num_arr[SIZE-1].Print_a();
}



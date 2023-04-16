#include <iostream>

class Three_Num{
public:
  double a;
  double b;
  double c;
  
  Three_Num();
  Three_Num(double aout, double bout=0, double cout=0);
  
  ~Three_Num();
  
  // this means that the class of Find_min_Threenum 
  //can use all the defined functions and variables of this class
  friend class Find_min_Threenum; 
};
class Find_min_Threenum{
public:
  
  Find_min_Threenum();
  
  ~Find_min_Threenum();
  
  double Min_val(Three_Num V); 
};
//-------------------------------------------------------------
//constructor
Find_min_Threenum::Find_min_Threenum(){
  //nothing
}
//deconstructor
Find_min_Threenum::~Find_min_Threenum(){
  //Nothing
}
//defining the function using the friend class
double Find_min_Threenum::Min_val(Three_Num V){
  double temp= (V.a>V.b ? V.b: V.a);
  double min= (V.c>temp ? temp:V.c);
  return min;
}
//----------------------------------------------------------------
//constructor
Three_Num::Three_Num(){
  a=0;
  b=0;
  c=0;
};
//constructor with initializer
Three_Num::Three_Num(double aout, double bout, double cout){
  a=aout;
  b=bout;
  c=cout;
}
//deconstructor
Three_Num::~Three_Num(){
  //nothing
}
//----------------------------------------------------------------
int main(){
  Three_Num Number3;
  Find_min_Threenum Min;
  Number3 = Three_Num(2.0,1.2,3.5);
  
  std::cout<< Min.Find_min_Threenum::Min_val(Number3) <<std::endl;
  
  return 0;
}



//First make object files: 
// g++ -Wall  -c DNUM.cpp -o dnum.o 
// g++ -Wall  -c CNUM.cpp -o cnum.o 
//
// Linlikng the object files and compiling : g++ -Wall  -o Class_I Class_I.cpp cnum.o dnum.o
//run:: Class_I

#include <iostream>
#include "CNUM.hpp"
#include "DNUM.hpp"

//friend function can be defined in the main cpp file
void Compare_num(DOUB_NUM DNum, CPLX_NUM cplxnum){
  double realcplx=cplxnum.GetIm();
  double imagcplx=cplxnum.GetReal();
  double doubnum = DNum.get_val();
  std::cout<<"CPLX: ("<<realcplx<<","<<imagcplx<<"), double number is: "<< doubnum <<std::endl;
}

int main(){
  
  CPLX_NUM CNum;
  DOUB_NUM DNum;
  double realnum,imagnum;
  
   CNum=CPLX_NUM(1.05,2.3); //view that as a way to initialize the object
   DNum=DOUB_NUM(1.0);
  
   CNum.ShowNum();
   realnum=CNum.GetReal();
   imagnum=CNum.GetIm();
  
  std::cout<< "real:"<<realnum<<", imag:"<<imagnum<<std::endl;
   Compare_num(DNum, CNum);
  
  return 0;
}
//compile by ::   g++ -Wall  -c CNUM.cpp -o cnum.o 

#include <iostream>
#include "CNUM.hpp"

CPLX_NUM::CPLX_NUM(){
  re_=0;
  im_=0;
  re=0;
  im=0;
}
CPLX_NUM::CPLX_NUM(double a){
  re_=a;
  re=a;
  im_=0;
  im=0;
}
CPLX_NUM::CPLX_NUM(double a, double b){
  re_=a;
  re=a;
  im_=b;
  im=b;
}
CPLX_NUM::~CPLX_NUM(){
  //do nothing
}
void CPLX_NUM::ShowNum(){
  std::cout<<"Number is: ("<<re_<<","<<im_<<")"<<std::endl;
}
double CPLX_NUM::GetReal(){
  return re_;
}
double CPLX_NUM::GetIm(){
  return im_;
}
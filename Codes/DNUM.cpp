// compile by: g++ -Wall  -c DNUM.cpp -o dnum.o
#include <iostream>
#include "DNUM.hpp"

DOUB_NUM::DOUB_NUM(){
  num_=0;
}

DOUB_NUM::DOUB_NUM(double num_ber){
  num_=num_ber;
}
DOUB_NUM::~DOUB_NUM(){
//   do nothing
}
double DOUB_NUM::get_val(){
  return num_;
}

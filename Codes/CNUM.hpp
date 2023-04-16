#ifndef __CNUM_H_INCLUDED__  
#define __CNUM_H_INCLUDED__ 

#include <iostream>
#include "DNUM.hpp"
class DOUB_NUM;

//Class is a collection of members and functions
//any object of the class have access to the functions and members
//modifyung the mmebers of the class is only possible through the class functions(methods)
//
//members of the class can have different accessibilities which are {public, protected, private}
// public: these members are accessible by all objects and can be modified through the whole program
//private: this access specifier

class CPLX_NUM{
public:
  double re;
  double im;
  
  //it is better to use private variables inside your class which is possible to access them only through methods
private:
  double re_;
  double im_;
public:
  //Constructors are called when an object of a class is creating which can have or have not any argument
  CPLX_NUM();
  CPLX_NUM(double a);
  CPLX_NUM(double a, double b);
  
  //deconstructor will be called when an object is removed
  ~CPLX_NUM();
  
  //The class can contain several methods 
  void ShowNum();
  double GetReal();
  double GetIm();
  
   friend void Compare_num(DOUB_NUM DNum, CPLX_NUM cplxnum);
  
}; // an object can aslo be defined directly after the definition of the class "} Num1,Num2;"



#endif
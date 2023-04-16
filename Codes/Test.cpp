 #include <iostream>
#include <complex>
/*
 using namespace std;*/
 
#define PI 3.14159
#define CPLX std::complex<double>



int main(){
  typedef unsigned int UINT; 

   short int ashort=2;
   UINT unsign=8;
   const int Vconstint=3;
   
   double doub =3.1;
   float g =3.2;   

   std::cout<< ashort << std::endl;
   std::cout<< unsign << std::endl;
   std::cout<< doub << std::endl;
   std::cout<< g << std::endl;

   
   CPLX Vcplx(2.0,3.0);
   
   std::cout<< Vcplx << std::endl;
   
   bool Vbool="True";
   std::cout<< Vbool << std::endl;
  
  
  return 0;
}
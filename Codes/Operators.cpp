/*
 * How to execute: 
 * g++ -Wall -std=c++11 Operators.cpp -o Operators
 * 
 * it is important to work with the c++11 as some of the functions in this code is not defined in previous versions
 * 
 * How to run:
 * 
 * ./Operators
 */

#include <iostream>
#include <complex>
#include <cmath>

// using namespace std;

int main(int argc, char* argv[]){
  
  //To reduce the coding lines by defining new names for types
  typedef std::complex<double> CPLX;
  typedef double DOUB;
  
  
  DOUB Vdouble1, Vdouble2, Vdouble3;
  
  
  Vdouble1= 2.3;
  Vdouble2= 4.2;
  
   std::cout<<"==============ARITHMETIC OPERATOR==========="<<std::endl;
   std::cout << "Vdouble1="<<Vdouble1 <<", Vdouble2= "<<Vdouble2<<std::endl;
   Vdouble3 = Vdouble1 + Vdouble2;
   std::cout << "Vdouble1 + Vdouble2 = " << Vdouble3 << std::endl ;
   Vdouble3 = Vdouble1 - Vdouble2;
   std::cout << "Vdouble1 - Vdouble2 = " << Vdouble3 << std::endl ;
   Vdouble3 = Vdouble1 * Vdouble2;
   std::cout << "Vdouble1 * Vdouble2 = " << Vdouble3 << std::endl ;
   Vdouble3 = Vdouble1 / Vdouble2;
   std::cout << "Vdouble1 / Vdouble2 = " << Vdouble3 << std::endl ;
   Vdouble3 = int(Vdouble1) % int(Vdouble2);
   std::cout << "int(Vdouble1) % int(Vdouble2) = " << Vdouble3 << std::endl ;
   Vdouble3 +=2.3; //This is the same as Vdouble3 =Vdouble3 + 2.3
   std::cout << "Vdouble3 +=2.3 :" << Vdouble3 << std::endl ;
   Vdouble3 *=2.0; //This is the same as Vdouble3 =Vdouble3 * 2.3
   std::cout << "Vdouble3 *=2.0 :" << Vdouble3 << std::endl ;
   Vdouble3 ++; //This is the same as Vdouble3 =Vdouble3 +1
   std::cout << "Vdouble3 ++ =" << Vdouble3 << std::endl ;
   Vdouble3 --; //This is the same as Vdouble3 =Vdouble3 -1
   std::cout << "Vdouble3 -- =" << Vdouble3 << std::endl ;
   Vdouble3 = Vdouble1 * Vdouble2 + Vdouble3;
   std::cout << "Vdouble1 * Vdouble2 + Vdouble3 =" << Vdouble3 << std::endl ;
   
   
   std::cout<<"===========NOTE============="<<std::endl;
   
   //difference between prefix and postfix incrementation
   /*
    * 
    * In the prefix version (++i): 
    * the value of i is incremented, and the value of the expression is the new value of i.
    * In the postfix version (i++):
    * the value of i is incremented, but the value of the expression is the original value of i.
    * 
    * postfix(i++) is also can be cosidered as the post incrementation,
    * as it first assign the variable and then apply the incrementation
    */
   
   Vdouble2= 4.2;
   std::cout << "Vdouble2= "<<Vdouble2<<std::endl;
   Vdouble3= Vdouble2 ++;
   std::cout << "Vdouble3 = Vdouble2++ =" << Vdouble3 <<", Vdouble2= "<<Vdouble2 << std::endl ;
   
   Vdouble2= 4.2;
   Vdouble3= ++ Vdouble2;
   std::cout << "Vdouble3 = ++Vdouble2 =" << Vdouble3 <<", Vdouble2= "<<Vdouble2 << std::endl ;
   
   
   std::cout<<"===========OTHER OPERATORS=============="<<std::endl;
   
   /* Address operator "&":
    * We will employ this operator to access the address of a variable in the memory
    * 
    *
    * Pointing operator "*"
    * This operator will points to a place in the memory
    * 
    * 
    * Comma operator ","
    *  To perform two~(or more) expresions together.
    * Remember that the compiler reads from right to left.
    * The value of a comma-separated list of expressions is the value of the right-most expression.
    *
    *
    *Conditional operator "?"
    * 
    * NOTE:if the condition is true, the expresion between "?" and ":" will be evaluated,
    * and otherwise "result_if_false" will be the output
    * 
    *( condition ? result_if_true : result_if_false ) 
    * 
    * */
    
//    Address operator "&":
    std::cout<<"Address of Vdouble3:: &Vdouble3= "<< &Vdouble3 <<", value of Vdouble3= "<< Vdouble3 <<std::endl;
    
//     Pointing operator "*"
    std::cout<<"Point to the Address of Vdouble3:: &Vdouble3= "<< *(&Vdouble3 )
    <<", value of Vdouble3= "<< Vdouble3 <<std::endl;
    
   
//     Comma operator ","
    int i,a,b;
    a=3;
    b=7;
    i=(a,b);
    std::cout<<"i=(a,b):: i="<<i<<", a="<<a<<", b="<<b<<std::endl;
    
    a=3;
    b=7;
    i=(a++,b);
    std::cout<<"i=(a++,b):: i="<<i<<", a="<<a<<", b="<<b<<std::endl;
    
    a=3;
    b=7;
    i=(a++, a+b);
    std::cout<<"i=(a++,a+b):: i="<<i<<", a="<<a<<", b="<<b<<std::endl;
    
    
    
//     Conditional operator "?"
    DOUB result;
    a=3;
    b=7;
    result= (a<b ? a :b);
    std::cout<<"result= (a<b ? a :b):: result= "<<result<<", a= "<<a<<", b= "<<b<<std::endl;
    
    a=-7;
    b=-3;
    result= (a<std::sin(b) ? std::exp(a) : std::cos(b));
    std::cout<<"result= (a<sin(b) ? exp(a) :cos(b)):: result= "<<result<<", a= "<<a<<", b= "<<b<<std::endl;
   
   
   
   
   std::cout<<"===========MATHEMATICAL FUNCTIONS============="<<std::endl;
   /* To employ simple mathematical  functions like "sin", "exp"
    * one should add the cmath library by #include<cmath>
    * for the description of all included functions 
    * one can have a look at 
    * http://www.cplusplus.com/reference/cmath/
    * 
    * NOTE: without adding the "using namspace std" 
    * one should employ the name of the namespace before any member of that
    * i.e. "std::sin(Variable)"
    */
    
    Vdouble3 = std::exp(Vdouble1) * std::sinh(std::tan(Vdouble2));
    std::cout << "exp(Vdouble1) * sinh(tan(Vdouble2)) = " << Vdouble3 << std::endl ;
   
     //NOTE fmax is provided in c++11 and not previous versions
    Vdouble3 = std::fmax(std::cosh(Vdouble1) , std::sinh(Vdouble2));
    std::cout << "fmax(cosh(Vdouble1) * sinh(Vdouble2)) = " << Vdouble3 << std::endl ;
   
   
   std::cout<<"============COMPLEX NUMBERS=========="<<std::endl;
   
   // For working with complex numbers we have to first add its header file  #include <complex>
   // This header file consists of a class with the name "complex" which has some methods and operators
   // For the details of that, one can have  alook at
   //   http://en.cppreference.com/w/cpp/numeric/complex
   
   
   /*there are two ways of assiging a value to complex variables
    * 1) at the defining time: std::complex<double> Vcplx(2.3,3.7);
    * 
    * 2) during the code by assiging its real and imaginary value
    * i.e. Vcplx.real(2.3);
    *      Vcplx.imga(3.7);
    */
   
    CPLX Vcplx1(1.0,2.0), Vcplx2, Vcplx3; //NOTE "CPLX"  is the replaced name for the type "std::complex<double>"
    Vcplx1.real(1.0);
    Vcplx1.imag(2.0);
    Vcplx2.real(3.0);
    Vcplx2.imag(6.5);
   
    
   std::cout << "Vcplx1="<<Vcplx1 <<", Vcplx2= "<<Vcplx2<<std::endl;
   Vcplx3 = Vcplx1 + Vcplx2;
   std::cout << "Vcplx1 + Vcplx2 = " << Vcplx3 << std::endl ;
   Vcplx3 = Vcplx1 - Vcplx2;
   std::cout << "Vdouble1 - Vdouble2 = " << Vcplx3 << std::endl ;
   Vcplx3 = Vcplx1 * Vcplx2;
   std::cout << "Vcplx1 * Vcplx2 = " << Vcplx3 << std::endl ;
   Vcplx3 = Vcplx1 / Vcplx2;
   std::cout << "Vcplx1 / Vcplx2 = " << Vcplx3 << std::endl ;
   
   
   //There are also some functions which are available in this class like
    Vcplx3 = exp(Vcplx1) + sin(Vcplx2);
    std::cout << "exp(Vcplx1) + sin(Vcplx2) = " << Vcplx3 << std::endl ;

   
   
  
  
  
  
  
  
  return 0;
}
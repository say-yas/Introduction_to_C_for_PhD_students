/*
 * How to compile:
 * g++ -Wall Functions.cpp -o Functions
 * 
 * How to execute:
 * ./Functions
 * 
 */

#include <iostream>
#include <complex>
#include "head_func.hpp"

#define CPLX std::complex<double> 

/*
 * Functions are defined differently which are
 * 
 * 1) above the main function,
 * Type_of_output name_function( data_type_input1 input1, data_type_input2 input2){
 *  statements;
 *  return output;
 * }
 * 
 * 2) the function will be only introduced above the "main function" and its details will be below the "main function" 
 * 
 * ABOVE: Type_of_output name_function( data_type1, data_type2 ) ;
 * 
 * BELOW: Type_of_output name_function( data_type_input1 input1, data_type_input2 input2){
 * 		 statements;
 *		  return output;
 * 	}
 * 
 * 3) One can write the full function in a file and save that as a header file ".hpp" and include that like
 * #inclde "my_functions.hpp"
 * 
 * 4) The arguments of the function can be assigned to default values, but all of those should make
 * a continous group at the end of argument list of the function 
 * 
 * NOTE: functions which are not supposed to have any output would have the "Type_of_output" as "void"
 * 
 * 
 * The arguments of functions can be passed by either their value or their address
 * 
 * 
 */

int global_var; //to define a global variable, one should define that out of the main function
double extern_val=1.0;//defining an external variable which can be accessed by all header files after declaration

/// passing the inputs by values.


/* Function overloading: in c++ you can overload a function name by various paparemter lists
 * This is also known as function polymorphism
 *As an example have a look at Sum_double functions with double and long double arguments 
 */
double Sum_double(double rhs, double lhs){ 
      /* all the variables which are defined inside the function, are local
       * local variable means that they are only and only accessible inside the function.
       */
      double result; 
      
      result= rhs + lhs;
      
      return result;
}
double Mult_Sum_double(double first_num, double second_num, double third_num=2.0, double fourth_num=1.0){ 
      
      return (first_num * second_num + third_num * fourth_num );
}
double Sum_double(long double rhs, long double lhs){ 
      /* all the variables which are defined inside the function, are local
       * local variable means that they are only and only accessible inside the function.
       */
      double result; 
      
      result= rhs + lhs;
      
      return result;
}
/*
 * The inline function is giving the compiler the hint that instead of jumping back and forth from the main function
 * to this inline function just copy  its lines during the compiling time as 
 * this function has very few statements
 * 
 * This will slightly speed up your code
 */
inline double Sum_double( float rhs, float lhs){
    return double(rhs+ lhs);
}
CPLX Sum_complex(CPLX rhs, CPLX lhs){
      CPLX result;
      
      result.real()= rhs.real() + lhs.real();
      result.imag()= rhs.imag() + lhs.imag();
      
      return result;
}
void End_Sum(void){ // this function neither has an input nor a variable output
//   if there is local variable with the same name as the global variable, the system would ignore the global one
// To still have an access to the global_variable one should use "::" begore the name of the global_variable
   int global_var;
  global_var=1;
  
  std::cout<<"******************************"<<std::endl;
  std::cout<<"local globa_var is: "<<global_var<<std::endl;
  std::cout<<"global globa_var incremented after calling the Sum function is: "<<::global_var<<std::endl;
  std::cout<<"=============================="<<std::endl;
}
int Sum_int(int , int ); //NOTE that there is a ";"
template <class T> //T is the type of the arguments, one can have more than one argument class/typename as well
T Sum(T rhs, T lhs){
      T result;
      
      result= rhs + lhs;
      global_var +=1;
      
      return result;
}
template <typename T> //T is the type of the arguments, one can have more than one argument typename as well
T Sum_2(T rhs, T lhs){
      T result;
      
      result= rhs + lhs;
      global_var +=1;
      
      return result;
}
//recursive functions: calling a function inside itself
int Factorial(int x=1){
//     n!= n*(n-1)!
    if(x !=0){
	return x*Factorial(x-1);
    }else return 1;
    
}



int main(){
  
  int Vint1, Vint2;
  Vint1 = 1;
  Vint2 = 3;
  std::cout<<"Int::"<<Vint1<<"+"<<Vint2<<"="<<Sum_int(Vint1, Vint2)<<", with Template function=" <<Sum(Vint1, Vint2)<<"\n";
  std::cout<<"Factorial("<<Vint1<<")="<<Factorial(Vint1)<<"\t Factorial("<<Vint2<<")="<<Factorial(Vint2)<<"\n";
  End_Sum();
  Access_to_extern_variable();
  
  double Vdoub1, Vdoub2;
  Vdoub1 = 1.2;
  Vdoub2 = 3.7;
  std::cout<<"Double::"<<Vdoub1<<"+"<<Vdoub2<<"="<<Sum_double(Vdoub1, Vdoub2)<<", with Template function=" <<Sum(Vdoub1, Vdoub2)<<"\n";
  End_Sum();
  Access_to_extern_variable();
  
  float Vfl1, Vfl2;
  Vfl1 = 1.2;
  Vfl2 = 3.7;
  std::cout<<"Float::"<<Vdoub1<<"+"<<Vdoub2<<"="<<Sum_double(Vfl1, Vfl2)<<", with Template function=" <<Sum(Vfl1, Vfl2)<<"\n";
  End_Sum();
  Access_to_extern_variable();
  
  double Vdoub3 = 3.25;
  double Vdoub4 = 8.1;
  double res= Mult_Sum_double(Vdoub1, Vdoub2, Vdoub3, Vdoub4 );
  std::cout<<"Mult_Sum::"<<Vdoub1<<"*"<<Vdoub2<<"+"<<Vdoub3<<"*"<<Vdoub4<<"="<<res<<"\n";
  End_Sum();
  Access_to_extern_variable();
  
  std::complex<double> Vcplx1, Vcplx2, Vres;
  Vcplx1.real() = 1.2;
  Vcplx1.imag() = 0.2;
  Vcplx2.imag() = 0.7;
  Vcplx2.real() = 3.7;
  Vres=Sum(Vcplx1, Vcplx2);
  std::cout<<Vcplx1<<"+"<<Vcplx2<<"="<<Sum_complex(Vcplx1, Vcplx2)<<", with Template function=" <<Vres<<"\n";
  End_Sum();
  Access_to_extern_variable();
  
  
  
  return 0;
}
int Sum_int(int rhs, int lhs=3){
      int result;
      
      result= rhs +lhs;
      
      return result;
}
/*
 * 1) How to compile: insert the following command in terminal
 * g++ -Wall -O2 -std=c++11 Variables.cpp -o Variables
 * 
 * 2) How to execute: insert the following command in terminal
 * ./Variables
 * 
 * or 
 * 
 * ./Variables ./path_to_directory 2 4.56 XY
 * 
 */


#include <iostream> // "iostream header that defines standart stream objects that input/output data"
#include <string>
#include <complex>

//NOTE
//#include <known_headerfiles>
//#include "appended_headedfiles.hpp"

//macros for defining a constant variable 
#define PI 3.14159 

/*
 * uncomenting the following line will enable us to remove all "std::" from the code
 * 
 * But for educatinal and avoding nastineses in implementing large codes
 * it is recommended not to employ that and keep using "std::"
*/
//using namespace std; //std is the namespace of c++ standard library

int main(int argc, char *argv[]) {  // argc and argv are for the command arguments passed to the c++ 
// int main(void){ //in case you do not want to pass any argument from the command line
  
  /*
   * NOTE:: Defining data types
   * Type_of_data name_of_variable ;
   * 
   * the size of the data_type is fixed by the complier
   *the associated data_type max number in one particular data_type is 2^sizeof(variable)
   *
   * char = 8byte = 2^8
   * short = 16byte = 2^16
   * int = 32byte = 2^32
   * 
  */ 
  
  //****************************************
  //integer 
  int Vint=2;
  short int Vshortint=5;
  long int Vlongint=3;
  
  std::cout<<"Integer:"<<std::endl;
  std::cout<<"size (in byte) int: "<<sizeof(Vint)<<std::endl;
  std::cout<< "size (in byte) shot-int: " <<sizeof(Vshortint)<<std::endl;;
  std::cout<<"size (in byte) long_int: "<<sizeof(Vlongint)<<std::endl;
  std::cout<<"============================="<<std::endl;
  //*****************************************
  
  
  //double
  float Vfloat=0.35;
  double Vdouble=0.6;
  long double Vlongdouble=0.245;
  
  std::cout<<"Double:"<<std::endl;
  std::cout<<"size (in byte) float: "<<sizeof(Vfloat)<<std::endl;
  std::cout<< "size (in byte) double: " <<sizeof(Vdouble)<<std::endl;;
  std::cout<< "size (in byte) long-double: "<<sizeof(Vlongdouble)<<std::endl;
  std::cout<<"============================="<<std::endl;
  //****************************************
  
  
  //comlex
  std::complex<double> Vdcomplex=(2.0,3.0);
  std::complex<int> Vicomplex=(2,3);
  std::cout<<"Complex:"<<std::endl;
  std::cout<<"size (in byte) complex<double>: "<<sizeof(Vdcomplex)<<std::endl;
  std::cout<< "size (in byte) complex<int>: " <<sizeof(Vdcomplex)<<std::endl;
  std::cout<<"============================="<<std::endl;
  
  //****************************************
  
  
  //boolian
  //Boolian variables would get "true" or "false" 
  bool Vbool= true;
  
  std::cout<<"Boolean:"<<std::endl;
  std::cout<< "size (in byte) boolean: "<<sizeof(Vbool)<<std::endl;
  std::cout<<"============================="<<std::endl;
  //****************************************
  
  
  //char
  char Vchar={'a'};
  char Vcharstring[]={'j', 'h', 'g', 'f', '\0' };
  //NOTE for having string variables: we should include " #include<string>" to the begining of the code
  //"std" is the standard C++ library
  //"std::string  XYZ" will define a varible "XYZ" which is a object of the class "string" in the namespce"std"
  std::string Vstring="This is a string variable";
  
  std::cout<<"Char and String:"<<std::endl;
  std::cout<<"size (in byte) char: "<<sizeof(Vchar)<<std::endl;
  std::cout<<"size (in byte) charstring: "<<sizeof(Vcharstring)<<std::endl;
  
  //".length()" is a method for the string class objects 
  std::cout<<"size (in byte) string: " <<Vstring.length()<<std::endl; 
  
  std::cout<<"============================="<<std::endl;
  //***************************************
  
  //command arguments
  std::cout<<"Command_line arguments:"<<std::endl;
  std::cout << "Number of appended arguments to commandline: " << argc <<std::endl;
  std::cout<< "which are:" << std::endl;
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    }
     std::cout<<"============================="<<std::endl;
  //**************************************
  
  
  //constant variable
  /*
   * "constant" avriable are those whose value will(and can) not change through the whole program
   * but can be used in the program 
   * There are two ways of defining constant variables:
   * 
   * 1) From the begining of the code by using "macros" as
   * 
   * #define macro_name replaced_text_or_value
   * 
   * Ex. #define PI 3.14159
   * 
   * NOTE that there is no ";" at the end of this line as it is preprocessor directives which
   * "give instruction to the compiler to preprocess the information before actual compilation starts"
   * 
   * 2) In any part of the code by using "const"
   * 
   * const data_type  name_variable = value_variable
   * 
   * Ex. const int Vcint=30;
   */
    
    const unsigned int Vcint=30; //unsigned means that only positive numbers can be stored in Vcint
    std::cout << "Value of PI :" << PI << std::endl; 
    std::cout << "Value of constant Vcint :" << Vcint << std::endl; 
     std::cout<<"============================="<<std::endl;
     //**************************************
     
     

return 0;
}
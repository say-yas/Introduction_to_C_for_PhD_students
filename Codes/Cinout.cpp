/*
 * How to compile:
 * g++ -Wall Hello.cpp -o Hello
 * 
 * How to run:
 * ./Hello
 * 
 * "-Wall" turns on all of the compiler warnings
 * 
 * */

//include libraries
#include <iostream> // iostream is a header that defines stream object that input/output data
#include <string>
#include <sstream>// string stream, for "setf"

/// main part of the code where the code excutation would start from
int main(){//main a function which returns an "int" value.
	
	//OUTPUT
  
	//cout is an object in the namespace "std" using for printing data on the screen
	std::cout<<"Hello world"<<std::endl; 
	
	std::cout<<"-------------------------------"<<std::endl;
	//**********************************************
	
	
	
	std::cout<<"-102.3206 in default c++ percision: "<<-102.3206<<std::endl;
	
	//To change the default output percision// at the moment look at it as a black box!
	std::cout.setf(std::ios::fixed,std::ios::floatfield);
	std::cout.precision(10);
	
	std::cout<<"-102.3206 in percision(10): "<<-102.3206<<std::endl;
	
	std::cout<<std::scientific<<"-102.3206 in scientific: "<<-102.3206<<std::endl;
	
	std::cout<<"-------------------------------"<<std::endl;
	//**********************************************
	
// 	Escape code	Description
// 	\n		newline
// 	\t		tab
// 	\v		vertical tab
// 	\'		single quote (')
// 	\"		double quote (")
// 	\?		question mark (?)
// 	\\		backslash (\)
	
	std::cout<<"The seperation by tab"<<"\t"<<", and by vertical tab ";
	std::cout<<"\v"<<", and by having a newline"<<"\n";
	
	
	//*********************************************
	//INPUT
	
	double Vdouble1, Vdouble2;
	std::string Vstring;
	char Vchar;
	
	//cin is an object in the namespace "std" using for recieving data on the screen
	std::cout<<"2) Insert a number: ";
	std::cin>>Vdouble2; // the inserted number will be saved in Vdouble2
	std::cout<<"The inserted number is: "<<Vdouble2<<std::endl;
	
	std::cout<<"1) Insert a number: ";
	 /*added to ignore the upper cin command
	  * as otherwise getline() would consider the witspace as a character
	  * and will not as for a new variable
	  */
	std::cin.ignore();
 	std::getline (std::cin, Vstring);
	std::stringstream(Vstring) >> Vdouble1;
	std::cout<<"The inserted number is: "<<Vdouble1<<std::endl;
	
	std::cout<<"2) Insert a char: ";
	//"get()" is a function for the object "cin" which has been defined in the namespace "std"
	Vchar= std::cin.get();
	std::cout<<"The inserted character is: "<<Vchar<<std::endl;
	
	

	
	
// the main function returns "0"
return 0;
}
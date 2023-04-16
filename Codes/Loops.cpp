/*
 * How to compile:
 * g++ -Wall Loops.cpp -o Loops
 * 
 * 
 * How to execute
 * ./Loops
 * 
 * 
 * 
 */
#include <iostream>
#include <math.h> // included to use the "fabs" function

int main(){
  
  int i,j;
  double err;
  
  
  /* For loop:
   * 
   * for(initial_value ; Final_consition ; increment ){
   *     Statements;
   * }
   * NOTE that each sector of the "for" is separated by ";"
   * 
   * NOTE: "continue" in the loop, will bring the running code to the begining of the loop
   */
  for(i=0; i<=10; i ++){
	 i *=2;
	 std::cout<<"i= " <<i<<std::endl;
	
   }
   std::cout<<"One loop with continue"<<std::endl;
   for(i=0; i<=20; i ++){
	 i ++;
	 std::cout<<"i= " <<i<<std::endl;
	 if(i>5) continue;
	 i+=2;
	
   }
   
   std::cout<<"========Multi for-loops=========="<<std::endl;
  /*
   * One can try to have multi-loops inside each other
   * 
   * if this case at each step of the outer for-loop, the inner for-loop will be excecuted
   */
   for(i=0; i<=10; i ++){
        for(j=i; j<=10; j+=3){
	    i+=3;
	    j++;
	    std::cout<<"inside j-loop:i= " <<i <<", j= "<<j<<std::endl;
	}
	std::cout<<"inside i-loop:i= " <<i <<", j= "<<j<<std::endl;
   }
   std::cout<<"=========for-loops with comma operator========="<<std::endl;
   
   /*
    * It is also possible to mix two for-loops into one by employing the "," operator
    * DO not forget that in comma operator always the right hand conditions would be the final value 
    * 
    * NOTE despite the same initial and incrementation conditions of the upper and lower codes,
    * there results are not the same as the inner for-loop of the upper block
    * did not executed repeatedly in the lower example
    */
   
   for(i=0, j=i; i<=10 && j<=10; i++, j+=3){
     i+=3;
     j++;
     std::cout<<"i= " <<i <<", j= "<<j<<std::endl;
   }
   
   
   std::cout<<"===============While loops================"<<std::endl;
   /*
    * while is a loop which would continute till the time when its conditon becomes false,
    * it is very important to always make sure that the while-loop will not be an infinite loop 
    * 
    * while(Condition){
    *  Statements;
    *} 
    * 
    * 
    */
   
   err=10.0;
   std::cout<<"Enter an integer number less than 100: "<<std::endl;
   std::cin>> i;
   
   err=10.0;
   if(i>100){
	  std::cout<<"Wrong number inserted"<<std::endl;
	  err=0;
   }
   while(err>1.0e-3){
	std::cout<<"i= "<<i<<std::endl;
	for(j=100; j>=0; j--){
	    err = double(fabs(i-j)); //fabs is the absolute-value function
	    std::cout<<"i= "<<i<<"\t"<<"j= "<<j<<"\terr="<<err<<std::endl;
	    if(err<1.0e-3) break;
	}
	if(err>1.0e+3) break;
	i++;
  }
  
  
  
   
   
   
   
   
   
   
  
  return 0;
}
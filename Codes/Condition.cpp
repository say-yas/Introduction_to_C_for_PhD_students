/*
 *How to compile:
 * g++ -Wall Condition.cpp -o Condition
 * 
 *How to run: 
 * ./Condition
 * 
 */
#include <iostream>

using namespace std;

int main(){
  double Vdouble1, Vdouble2;
  Vdouble1 = -1.2;
  Vdouble2 = 3.2;
  
  cout<<"========IF:One conditions========="<<endl;
  /*One condition:
   * 
   * if( codition){
   *    statements;
   *   }
   * or
   * if(condition ) statement;
   */
   
   cout<<"1) Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
   if(Vdouble1 >0) cout<<"Vdouble1= "<<Vdouble1<<endl;
   
   cout<<"****************************"<<endl;
   
   if(Vdouble1 >0){
	Vdouble2 +=Vdouble1;
	cout<<"Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
   }
   cout<<"========IF:Two conditions========="<<endl;
   
   /* Two conditions:
    * if(codition){
    *  statemets;
    *}else{
    *  other_statmets;
    *}
    */
   cout<<"2) Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
    if(Vdouble1 >0) cout<<"(Vdouble1 >0):: Vdouble1= "<<Vdouble1<<endl;
    else cout<<"else:: Vdouble2= "<<Vdouble2<<endl;
    
    
    cout<<"****************************"<<endl;
    
    cout<<"3) Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
    
    if(Vdouble1 >0){
	Vdouble2 +=Vdouble1;
	cout<<"(Vdouble1 >0):: Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
    }else{
	Vdouble2 *=Vdouble1;
	cout<<"else:: Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
    }
    cout<<"========IF:Multi conditions========="<<endl;
    
    /*More than two conditions
     * 
     * if(codition1){
     *   statemets1;
     * }else if(condition2){
     *   statments2;
     * } else if(condition3){
     *   statemets3;
     * }else{
     *  statemets_final;
     * }
     * NOTE
     * During the running time, as soon as a true-condition has been found for any "if" blocks, 
     *the associate stetaments will be executed and the rest blocks after that will be ignored. 
     * 
     * 
     * NOTE 
     * "&&" is the and operator
     * "||" is the or operator
     * "==" equality operator, DO NOT CNFUSED WITH assignment operator "="
     * "!=" is "not equal" operator
     * ">" greater, ">=" greater or equal
     * "<" lesser, "<=" lesser or equal
     */
     
    cout<<"4) Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
    
     if(Vdouble1 >0 && 2*Vdouble2>0 ) cout<<"(Vdouble1 >0 && 2*Vdouble2>0 ) :: Vdouble1= "<<Vdouble1<<endl;
     else if(Vdouble2>0 || Vdouble1>0) cout<<"(Vdouble2>0 || Vdouble1>0):: Vdouble2= "<<Vdouble2<<endl;
     else cout<<"else:: Vdouble2= "<<Vdouble2<<endl;
    
     cout<<"****************************"<<endl;
     
     cout<<"5)Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
     
    if(Vdouble1 == Vdouble2){
	Vdouble2 +=Vdouble1;
	cout<<"(Vdouble1 == Vdouble2):: Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
    }else if(Vdouble2>0){
        Vdouble2 -=Vdouble1;
	cout<<"(Vdouble2>0):: Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
    }else if( (Vdouble1+1.5)> -Vdouble2 ){
	 Vdouble2 /=Vdouble1;
	cout<<"( (Vdouble1+1.5)> -Vdouble2 ):: Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
    }else{
	Vdouble2 *=Vdouble1;
	cout<<"else:: Vdouble1="<< Vdouble1<<", Vdouble2= "<<Vdouble2<<endl;
    }
    
     cout<<"========SWITCH========="<<endl;
     
     /* In contrast to "if", "switch" only can check the equality.
      * 
      * switch(expression){
      *   case( constant-expression(i.e. A)): //meaning "condition" ==A
      *      statements;
      *      break;
      *   case( B ): //meaning "condition" ==B
      *      statements;
      *      break;
      *   case(C): //meaning "condition" ==C || "condition" ==D
      *   case(D):
      *      statemets;
      *      break
      *   default: //otherwise
      *     statemets;
      * }
      * "switch" would drop out of the loop whenever it reaches a "break;" 
      * and it will strt from the case which the constant_expression is the same as the expression.
      */
      
     int Num;
     cout<<"Enter an integer number less than 10: "<<endl;
     cin>> Num;
     
     switch(Num){
       case 0: 
	 cout<<"Num=0"<<endl;
       case 2:
	 cout<<"Num="<<Num<<" is 2!"<<endl;
       case 4:
       case 6:
       case 8:
	 cout<<"Num="<<Num<<" is even!"<<endl;
	 break;
       case 1:
       case 3:
       case 5:
       case 7:
	 cout<<"Num="<<Num<<" is 7!"<<endl;
       case 9:
	 cout<<"Num="<<Num<<" is 9!"<<endl;
	 cout<<"Num="<<Num<<" is odd!"<<endl;
	 break;
       default:
	 cout<<"Num="<<Num<<" is larger than 10";
	 
    }
     
     
     
    
     
  
  return 0;
}



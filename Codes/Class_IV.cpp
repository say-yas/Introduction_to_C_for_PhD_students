#include <iostream>

using namespace std;
//instead of "class" one can use "struct" and keep in mid that the whole members of struct are public
class Rational_num{
public:
  double nomi;
  double denomi;
  
public:
  Rational_num(){};
  //Note how I have initialized value in this constructor
  Rational_num(double nomi_, double denomi_) : nomi(nomi_),denomi(denomi_){}
  
  ~Rational_num(){};
  
  Rational_num Sum_Rational(Rational_num &Num1, Rational_num &Num2){
    
    nomi= Num1.nomi*Num2.denomi + Num1.denomi*Num2.nomi;
    denomi= Num1.denomi*Num2.denomi;
    return *this;// this is a pointer to the object which has been called
    
  }
  void Print_rational(){
    cout<<"The number is= "<<nomi/denomi<<" = "<<nomi<<"/"<<denomi<<endl;
  }
};

int main(){
  Rational_num Frac1, Frac2, Frac3;
  Rational_num *PtrFrac;
  double *Ptrnomi;
  double *Ptrdenomi;
  
  Frac1= Rational_num(2.87,3.6);
  Frac2= Rational_num(5.1,3.2);
  
  PtrFrac=&Frac1;
  // a pointer to the address of the object can call methods by "->" instead of 
  Frac3=PtrFrac->Sum_Rational(Frac1, Frac2);
  
  Frac3.Print_rational();
  
  //a pointer can also have access to public variables
  Ptrnomi= &Frac3.nomi;
  Ptrdenomi= &Frac3.denomi;
  
  cout<<"Nominator is: "<< *Ptrnomi<<", and denominator is: "<< *Ptrdenomi <<endl;
  
  
  
  
  return 0;
}
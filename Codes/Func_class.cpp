#include <iostream>
#include "Func_ax.hpp"

using namespace std;
/*
inline double Mult(float Numin, int b){
  
  return (double(Numin) * double(b));
}

inline double Mult(double Numin, int b){
  
  return ((Numin) * double(b));
}*/


int globint=2;

template <class T>
T Mult (T Numin, int b){
  
  return ((Numin) * (b));
} 


void Print_Num(double Num){
  
  globint++;
  cout<<"Num: "<< Num <<", global variable: "<< globint<<endl;
}


double Mult_2(float , int);







int main(){
  
  int Vint=2;
  float Num=4.5;
  double Num3=4.7;
  
  double Num2=Mult( Num, 2);
  
  cout << Num2 <<endl;
  Print_Num( Num2);
  
  Num2=Mult(Vint, 2);
  
  cout << Num2 <<endl;
  
  Num2=Mult(Num3, 2);
  
  cout << Num2 <<endl;
  
  Num2=Mult_2(float(Num), 2);
  
  cout << Num2 <<endl;
  
  
  Sum_num (Num3, Num2);
  Sum_num (Num3, Num2, Num2);
  Sum_num (4.1, 3.2, 3.42,3.1);
  
  
  
  
  
  return 0;
}

double Mult_2(float Numin, int b){
 
  return (2.4 * double(Numin) * double(b));
}
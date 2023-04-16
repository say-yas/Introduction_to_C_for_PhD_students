#include <iostream>


using namespace std;

template< class T>
void swap_1(T Num1,T Num2,T &Num3,T &Num4){ // Num3, Num4 are alias( references )
  
  Num3=Num2;
  Num4=Num1;
  
}

template< class T>
void swap_2(T &Num1,T &Num2){// & Num1 means that we have declared a reference which is a alias
  T temp;
  temp=Num2;
  Num2=Num1;
  Num1=temp;
}

template< class T>
void swap_3(T *Num1,T *Num2){ // * Num1 means that we have declared a pointer which is holds a emory address
  T temp;
  
  // the value of temp is the VALue of Num1 (* is dereference operator)
  temp= *Num2;
  //value Num2 = value Num1
  *Num2=*Num1;
  //Value Num1 = value temp
  *Num1=temp;
}

int main(){
  double Num1;
  double Num2;
  double Num3=0;
  double Num4=0;
  cout<<"Insert the first number: ";
  cin>>Num1;  
  cout<<"Insert the second number: ";
  cin>>Num2; 
  
  cout<<"Num1: "<<Num1<<", Num2: "<<Num2<<endl;
  swap_1(Num1, Num2, Num3, Num4);
  cout<<"Swaped_1:: Num1: "<<Num3<<", Num2: "<<Num4<<endl;
  
  cout<<"Num1: "<<Num1<<", Num2: "<<Num2<<endl;
  swap_2(Num1,Num2);
  cout<<"Swaped_2:: Num1: "<<Num1<<", Num2: "<<Num2<<endl;
  
  cout<<"Num1: "<<Num1<<", Num2: "<<Num2<<endl;
  swap_3(&Num1,&Num2);
  cout<<"Swaped_3:: Num1: "<<Num1<<", Num2: "<<Num2<<endl;
  
  
  return 0;
}
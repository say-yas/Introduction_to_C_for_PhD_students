#include <iostream>

using namespace std;


class Threevector{

public:
  double elem1;
  double elem2;
  double elem3;
 
  Threevector(); //constructor
  Threevector(const Threevector &Vec); //constructor
  Threevector(double el1); //constructor
  Threevector(double el1, double el2); //constructor
  Threevector(double el1, double el2, double el3); //constructor
  ~Threevector(); //deconstructor
  
  void Print_Vec(){
     cout<<"Vector is:("<< elem1 << "," <<elem2 <<", "<< elem3<<")"<<endl;
  }
  
  Threevector & operator = (const Threevector & Vec){
      elem1=Vec.elem1;
      elem2=Vec.elem2;
      elem3=Vec.elem3; 
      
      return *this;
  }
  
  Threevector & operator + (const Threevector & Vec1 ){
      elem1 += Vec1.elem1;
      elem2 += Vec1.elem2;
      elem3 += Vec1.elem3; 
      
      return *this;
  }
  
  
  
};// note about the semicolon at the end of class definition


Threevector :: Threevector(){
  elem1=0;
  elem2=0;
  elem3=0;
  cout <<"constructor"<<endl;
  
}
Threevector :: Threevector( double el1){
  elem1=el1;
  elem2=0;
  elem3=0;
  cout <<"constructor1"<<endl;
}
Threevector :: Threevector( double el1,  double el2){
  elem1=el1;
  elem2=el2;
  elem3=0;
  cout <<"constructor2"<<endl;
}
Threevector :: Threevector(  double el1, double  el2,  double el3){
  elem1=el1;
  elem2=el2;
  elem3=el3; 
  cout <<"constructor3"<<endl;
}
Threevector :: Threevector(const Threevector &Vec){
  elem1=Vec.elem1;
  elem2=Vec.elem2;
  elem3=Vec.elem3; 
  cout <<"constructor4"<<endl;
}

Threevector::~Threevector(){
  cout <<"deconstructor"<<endl;
}



int main(){
  
  Threevector V1;
  
  V1.elem2= 2.3;// accessing the public member of the class by "."
  V1.Print_Vec();
  
  Threevector V2,Vres;
  V2= Threevector(2.02,3.0,1.3);
  
  cout<<V2.elem1<<","<<V2.elem2<<","<<V2.elem3<<endl;
  
  //Summing two vectors
  Vres= V1+V2;
  Vres.Print_Vec();
  
  return 0;
}
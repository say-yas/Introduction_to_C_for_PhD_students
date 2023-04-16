#include <iostream>

using namespace std;

//operators which we can not redefine ". .* :: ? sizeof"
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
  
  //type class_name::operator "operator"(arguments) 
   //internal operators can only get one argument and the second one is "this"
  bool operator==(const Rational_num& Num1){
    return nomi==Num1.nomi && denomi==Num1.denomi;
  }
  Rational_num operator=(const Rational_num& Num1){
    this->nomi =Num1.nomi;
    this->denomi=Num1.denomi;
    return *this;
  }
  Rational_num operator+=(const Rational_num& Num1){
    this->nomi +=Num1.nomi;
    this->denomi +=Num1.denomi;
    return *this;
  }
  // to pass two argument functions inside a class instead of taking "*this" we can use the friend functions
  friend Rational_num operator-(const Rational_num& Num1, const Rational_num& Num2){
    Rational_num temp;
    temp.nomi= Num1.nomi*Num2.denomi - Num1.denomi*Num2.nomi;
    temp.denomi= Num1.denomi*Num2.denomi;
    return temp;
  }

};
//inheritance
//class derived_class : access_specifier base_class {
//   //Something
// //};//this class do nt have access to private members of the parent function
class Frac_int : public Rational_num{
public:
  int nomiint;
  int denomiint;
public:
  Frac_int(){};
  Frac_int(Rational_num& Num){
    nomiint=int(Num.nomi);
    denomiint=int(Num.denomi);
  };
  
  ~Frac_int(){};

};
std::ostream& operator<<(std::ostream& out, const Rational_num& Num)
{
   return out << Num.nomi << '/' << Num.denomi ;
}
std::ostream& operator<<(std::ostream& out, const Frac_int& Num)
{
   return out << Num.nomiint << '/' << Num.denomiint ;
}
bool operator==(const Rational_num& Num1, const Rational_num& Num2){
  return Num1.nomi == Num2.nomi && Num1.denomi == Num2.denomi;
}
Rational_num operator+(const Rational_num& Num1, const Rational_num& Num2){
  Rational_num temp;
  temp.nomi= Num1.nomi*Num2.denomi + Num1.denomi*Num2.nomi;
  temp.denomi= Num1.denomi*Num2.denomi;
  return temp;
}
Rational_num operator*(const Rational_num& Num1, const Rational_num& Num2){
  Rational_num temp;
  temp.nomi= Num1.nomi*Num2.nomi ;
  temp.denomi= Num1.denomi*Num2.denomi;
  return temp;
}
Rational_num operator*(const Rational_num& Num1, const double& doubNum){
  Rational_num temp;
  temp.nomi= Num1.nomi*doubNum ;
  temp.denomi= Num1.denomi;
  return temp;
}
Rational_num operator*(const double& doubNum, const Rational_num& Num1){
  Rational_num temp;
  temp.nomi= Num1.nomi*doubNum ;
  temp.denomi= Num1.denomi;
  return temp;
}

int main(){
  Rational_num Frac1, Frac2, Frac3;
  Frac_int Fracint1;
  double dnum=3.1;
  
  Frac1=Rational_num(2.1,3.7);
  Frac2=Rational_num(1.51,4.37);
  
  Fracint1=Frac_int(Frac1);
  
  Frac3=Frac1+Frac2;
  
  cout<<Frac1<<" + "<<Frac2<<" = "<<Frac3<<"\n"<<dnum<<"*"<<Frac3<<" = "<<Frac3*dnum<<endl;
  
  cout<<Frac1<<" - "<<Frac2<<" = "<<(Frac1-Frac2)<<"\n"<<dnum<<"*"<<Fracint1<<" = "<<Fracint1*dnum<<endl;
  
  return 0;
}
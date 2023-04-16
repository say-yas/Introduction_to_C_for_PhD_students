#include <iostream>

using namespace std;

class FRAC_NUM;
class Doub_num{
public:
  double Dnum;
  
  
public:
  Doub_num(){};
  Doub_num(double d){
    Dnum=d;
  }
  ~Doub_num(){};
  
  void prdouble_doub(){
    cout << "numer is: "<<Dnum<<endl;
  }
  friend void Compare_num(Doub_num dnum, FRAC_NUM frac);
  
};

class FRAC_NUM{
public:
  double nomi;
  double denomi;
  
public:
  FRAC_NUM(){
    
  };
  FRAC_NUM(double nomi_){
    nomi=nomi_;
    denomi=1;
  }
  FRAC_NUM(double nomi_, double denomi_){
    nomi=nomi_;
    denomi=denomi_;
  }
  
  ~FRAC_NUM(){
    
  };
  
  FRAC_NUM operator=(const FRAC_NUM num1){
    nomi= num1.nomi;
    denomi=num1.denomi;
  return *this;
}


  inline double nom(){
    return nomi;
  }
  inline double denom(){
    return denomi;
  }
  
  double max_num();
  
  void Prdouble_frac(){
    cout << nomi << "/" <<denomi <<endl;
  }
  
  
 
 friend void Compare_num(Doub_num dnum, FRAC_NUM frac);
};

std::ostream& operator<<(std::ostream& out, const FRAC_NUM& Num)
{
   return out << Num.nomi << '/' << Num.denomi ;
}

void Compare_num(Doub_num dnum, FRAC_NUM frac){
  if((frac.nomi/frac.denomi) ==dnum.Dnum) cout<<"match!"<<endl;
  else cout<<"no match!"<<endl;
   frac.Prdouble_frac();
  dnum.prdouble_doub();
}




FRAC_NUM SUM_frac(FRAC_NUM num1, FRAC_NUM num2){
  FRAC_NUM sum;
  
  sum.nomi = (num1.nomi * num2.denomi +  num1.denomi * num2.nomi );
  sum.denomi = num1.denomi * num2.denomi;
  
  return sum;
}

FRAC_NUM Mult_frac(FRAC_NUM num1, FRAC_NUM num2){
  FRAC_NUM mult;
  
  mult.nomi = (num1.nomi * num2.nomi  );
  mult.denomi = num1.denomi * num2.denomi;
  
  return mult;
}

FRAC_NUM operator+(const FRAC_NUM num1 , const FRAC_NUM num2){
  FRAC_NUM sum;
//   sum= SUM_frac(num1, num2);
   sum.nomi = (num1.nomi * num2.denomi +  num1.denomi * num2.nomi );
   sum.denomi = num1.denomi * num2.denomi;
  
  return sum;
}
FRAC_NUM operator*(const FRAC_NUM num1 , const FRAC_NUM num2){
  FRAC_NUM sum;
//   sum= SUM_frac(num1, num2);
   sum.nomi = (num1.nomi * num2.nomi );
   sum.denomi = num1.denomi * num2.denomi;
  
  return sum;
}
FRAC_NUM operator*(const FRAC_NUM num1 , const double num2){
  FRAC_NUM sum;
//   sum= SUM_frac(num1, num2);
   sum.nomi = (num1.nomi * num2 );
   sum.denomi = num1.denomi ;
  
  return sum;
}
FRAC_NUM operator*( const double num2, const FRAC_NUM num1 ){
  FRAC_NUM sum;
//   sum= SUM_frac(num1, num2);
   sum.nomi = (num1.nomi * num2 );
   sum.denomi = num1.denomi ;
  
  return sum;
}

double FRAC_NUM::max_num(){
    return (nomi >denomi ? nomi : denomi );
  }
  
  
double main(){
  FRAC_NUM Frac1, Frac2, Frac3, Frac4;
  Doub_num dnum1;
  dnum1= Doub_num(0.1);
  
  Frac1= FRAC_NUM(1,2);
  Frac2= FRAC_NUM(4,7);
  cout<< "nomi= "<< Frac1.nom() << ", denomi= " << Frac1.denomi << endl;
  Frac3= SUM_frac(Frac1, Frac2);
  
  Frac4= Frac3+ Frac1;
  
  cout << Frac3 << endl;
  Frac3=Frac4+Frac4;
//   Frac3.Prdouble_frac();
//   Frac4.Prdouble_frac();
//   Compare_num( dnum1, Frac1);
  
  

  return 0;
}
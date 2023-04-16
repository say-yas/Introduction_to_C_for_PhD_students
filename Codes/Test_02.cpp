#include<iostream>

int main(){
  
 double a=1.3;
 double b=3.4;
 
 if( a> b ) std::cout << a<<std::endl;
 
 if( a> b ){
    std::cout << a<<std::endl;
    
    std::cout << a+b <<std::endl;
 }
 
 if( a> b ){
    std::cout << a<<std::endl;
 }else{  
    std::cout << b <<std::endl;
 }
 
 if( (a> b && b<2) || (a<4)  ){
    std::cout << a<<std::endl;
 }else if(a==b){
  std::cout << a+b <<std::endl;
}else{  
    std::cout << b <<std::endl;
 }
 
 std::cout << "-----------------------------"<<std::endl;
 double c;
 double err=2;
 double errmax= 1.e+03;
 while(err > errmax){
   c= a -b;
   std::cout<<"c="<<c<<" err: "<<err<<std::endl;
   a ++;
   b+=2.3;
   err /=3;
}
 std::cout << "==============================="<<std::endl;
do{
  c= a -b;
   std::cout<<"c="<<c<<" err: "<<err<<std::endl;
   a ++;
   b+=2.3;
   err /=3;
}while(err > errmax);


for( int i=0; i<100; i+=23){
  std::cout<<i<<std::endl;
}



  
  
  return 0;
}
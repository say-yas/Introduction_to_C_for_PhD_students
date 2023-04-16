/*
 * 
 * g++ -Wall Pointer_References.cpp -o Pointer_References 
 * 
 * 
 * ./Pointer_References 
 * 
 */
#include<iostream>

/*
 * Pointer is a variable which its value is an address of another variable.
 * Pointers will help us to allocate memory dynamically and reduce the nestiness of writing codes
 * 
 * Pointers values are a hexadecimal numbers that represents a memory address 
 * 
 * To declare a pointer we would use an asterisk (*) as
 * 
 * data_type *name_pointer // name_pointer points to the address of a "data_type" variable
 * 
 * 
 * 
 */


void No_Change_num_with_no_output(double Num,  double mult_num=1.0){
  
      Num *=mult_num;
      std::cout<<"Value passed:: Num: "<<Num<<std::endl;     
}
void Change_num_with_no_output_1(double &Num,  double mult_num=1.0){
  
      Num *=mult_num;
      std::cout<<"Address passed using reference:: Num: "<<Num<<std::endl;   
}
void Change_num_with_no_output_2(double *Num,  double mult_num=1.0){
  
      *Num *=mult_num;
      std::cout<<"Address passed using pointer:: Num: "<<*Num<<std::endl;   
}


int main(){
  
  double Vdouble=6.2;
  //Never leave a pointer uninitialized, as dangling pointer can cause problems upon using!
  double *VdoublePtr= NULL;
  
  VdoublePtr =&Vdouble; //VdoublePtr is the address of the "Vdouble". NOTE ampersand sign is for getting the address
  
  std::cout<<"Vdouble="<<Vdouble<<", address Vdouble="<<VdoublePtr<<std::endl;
  
//   To obtain the value of variable that the pointer points to, we should use "*"(derefrence operator)
  std::cout<<"address Vdouble="<<VdoublePtr<<" has the value="<<*VdoublePtr<<std::endl;
  
  std::cout<<"==================================="<<std::endl;
  
  
  //NOTE As "VdoublePtr" points to the address of "Vdouble", whenevr Vdouble changes, it would change automatically
  // and vice versa ===>> both are simply two way of calling the same value
  Vdouble +=2;
  std::cout<<"Vdouble="<<Vdouble<<", address Vdouble="<<VdoublePtr<<" has the value="<<*VdoublePtr<<std::endl;
  
  *VdoublePtr +=2.0;
  std::cout<<"Vdouble="<<Vdouble<<", address Vdouble="<<VdoublePtr<<" has the value="<<*VdoublePtr<<std::endl;
  
  std::cout<<"==================================="<<std::endl;
  
  double mult_num=0.2;
  double Num= 5.2;
  No_Change_num_with_no_output(Num, mult_num);
  std::cout<<"1) NOTE: value passed:: 'Num' did not change! \t Num: "<<Num<<std::endl; 
  std::cout<<"--------------------"<<std::endl;
  Num= 5.2;
  Change_num_with_no_output_1(Num, mult_num);
  std::cout<<"2) NOTE: address passed:: 'Num' did change!\t Num: "<<Num<<std::endl; 
  Num= 5.2;
  double *Numptr;
  Numptr= &Num;
  Change_num_with_no_output_2(Numptr, mult_num);
  std::cout<<"3) NOTE: address passed:: 'Num' did change!\t Num: "<<Num<<std::endl; 
  
 std::cout<<"==================================="<<std::endl;
  
  //Dynamic memmory 
   //dynamically allocate memory by using "new"
  double *Ptrdouble= new double;// This line a pointer in the stack is pointing to an address of a double in heap
  *Ptrdouble = 3.2;
  
  std::cout<<"Address Ptrdouble="<<Ptrdouble<<", value Ptrdouble="<<*Ptrdouble<<std::endl;
  //if you do not need this heap-stored pointer ALWAYS delete them 
  delete Ptrdouble;// in this case the allocated memory in the heap will be free, and otherwise you make a garbage!
  
  std::cout<<"Address Ptrdouble="<<Ptrdouble<<", value Ptrdouble="<<*Ptrdouble<<std::endl;
  
  std::cout<<"==================================="<<std::endl;
  //we can also declare an array
  int *Ptrint=NULL;
  Ptrint = new int[5];
  
  
  //assigning a value to these arrays can be either done by calling their element "Varray[num_element]" or by 
  //using the pointer iterator *(Varray + num_element) :: this means that the pointer should point to the elemnt which its
 // address is num_element away from  the address of the zeroth element 
  for(int i=0; i<5;i++) Ptrint[i]=2*i;
  for(int i=0; i<5;i++) std::cout<<i<<"th element of the pointer is: "<<*(Ptrint+i)<<std::endl;
  
  delete [] Ptrint;
  std::cout<<"-----------------------------------"<<std::endl;
  //
  Ptrint = new int[10];
  for(int i=0; i<10;i++) *(Ptrint+i)= 3*i;
  for(int i=0; i<10;i++) std::cout<<i<<"th element of the pointer is: "<<*(Ptrint+i)<<std::endl;
  delete [] Ptrint;
  Ptrint =NULL;
  
  
  
  
  
  
  
  
  
  return 0;
}
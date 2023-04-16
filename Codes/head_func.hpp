extern double extern_val; //declaring an external variable

void Access_to_extern_variable(void){ // this function neither has an input nor a variable output

std::cout<<"-------------------------------"<<std::endl;
  std::cout<<"external variable is: "<<extern_val<<std::endl;
  
  extern_val *=-5.2;
  
  
  std::cout<<"global external extern_var *=-5.2: "<<extern_val<<std::endl;
  std::cout<<"-------------------------------"<<std::endl;
}
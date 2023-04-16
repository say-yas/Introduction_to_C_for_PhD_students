#ifndef __DNUM_H_INCLUDED__  
#define __DNUM_H_INCLUDED__ 

#include <iostream>
#include "CNUM.hpp"

class CPLX_NUM;//declaration is essential if you what to have the two class freind functions

class DOUB_NUM{
public: 
    double num_;

public: 
    DOUB_NUM();
    DOUB_NUM(double num_ber );
      
    ~DOUB_NUM();
    
    double get_val();

     friend void Compare_num(DOUB_NUM DNum, CPLX_NUM cplxnum_);
      
};


#endif
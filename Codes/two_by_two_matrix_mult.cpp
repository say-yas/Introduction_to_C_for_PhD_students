/*
 * g++ -Wall two_by_two_matrix_mult.cpp -o two_by_two_matrix_mult
 * 
 * 
 * ./two_by_two_matrix_mult
 */
#include <iostream>
#include <cstdlib>// library to have the random function

using namespace std;

int main(){
  
  //Using two dimensional array
  
  double Matrix1[2][2];
  double Matrix2[2][2];
  double Matrix_mult[2][2];
  
  //Filling two matrices by random numbers
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      Matrix1[i][j] = double(rand()%10); 
      Matrix2[i][j] = double(rand() %10); 
      cout<<"Matrix1["<<i<<"]["<<j<<"]= "<< Matrix1[i][j];
      cout<<", Matrix2["<<i<<"]["<<j<<"]= "<< Matrix2[i][j]<<endl;
    }
  }
  
  //mutiplying matrices
  
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      for(int k=0; k<2; k++){
	Matrix_mult[i][j] += Matrix1[i][k] * Matrix2[k][j];
      }
      cout<<"Matrix_mult["<<i<<"]["<<j<<"]= "<< Matrix_mult[i][j]<<endl;
    }
  }
  
  
  //Using two dimensional pointer 
  int row=2;
  int col=2;
  // ** is pointing to a pointer 
  //in the following the pointer points to a pointer which is an array
  double **PMatrix1= new double*[row];
  double **PMatrix2= new double*[row];
  double **PMatrix_mul= new double*[row];
  
  for(int i=0; i<row; i++){
    PMatrix1[i]= new double[col];
    PMatrix2[i]= new double[col];
    PMatrix_mul[i]= new double[col];
  }
  
  //initializing
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      PMatrix1[i][j] = Matrix1[i][j] ; 
      PMatrix2[i][j] = Matrix2[i][j] ; 
      cout<<"Matrix1["<<i<<"]["<<j<<"]= "<< PMatrix1[i][j];
      cout<<", Matrix2["<<i<<"]["<<j<<"]= "<< PMatrix2[i][j]<<endl;
    }
  }
  //computing the matrix multiplication
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      for(int k=0; k<2; k++){
	PMatrix_mul[i][j] += PMatrix1[i][k] * PMatrix2[k][j];
      }
      cout<<"Matrix_mult["<<i<<"]["<<j<<"]= "<< PMatrix_mul[i][j]<<endl;
    }
  }
  
  //deletting the allocated memory
  for(int i = 0; i < row; ++i) {
      delete [] PMatrix1[i];
      delete [] PMatrix2[i];
  }
  delete [] PMatrix1;
  delete [] PMatrix2;

  
  
  return 0;
}
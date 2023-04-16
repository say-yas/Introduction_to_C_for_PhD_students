#include <iostream>
#include <cstdlib> // to have random numbers

using namespace std;

template <class T> //output is passssed by value
T Vec_mult_1(T Vec1[],T Vec2[]){
  T S_mult;
  for(int i=0; i<3; i++){
    S_mult += Vec1[i] * Vec2[i];
  }
  return S_mult; 
}

template <class T>// output is a refrence
void Vec_mult_2(T *Vec1,T *Vec2, T &S_mult){
  for(int i=0; i<3; i++){
      S_mult += Vec1[i] * Vec2[i];
  }
}

template <class T>// output is a pointer
void Vec_mult_2(T *Vec1,T *Vec2, T *S_mult){
  for(int i=0; i<3; i++){
      *S_mult += Vec1[i] * Vec2[i];
  }
}

template <class T>// two dimensional pointer (pointer ot pointer)
void Mat_mult_2(T **PMatrix1, T **PMatrix2, T **PMatrix_mul){
  
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      for(int k=0; k<2; k++){
	PMatrix_mul[i][j] += PMatrix1[i][k] * PMatrix2[k][j];
      }
    }
  }
}

template <class T>// To pass an array, the size should pass 
void Mat_mult_1(T Matrix1[2][2], T Matrix2[2][2], T Matrix_mul[2][2]){ // array tend to pass like a pointer!
  
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      for(int k=0; k<2; k++){
	Matrix_mul[i][j] += Matrix1[i][k] * Matrix2[k][j];
      }
    }
  }
  
  
}


int main(){
  
  double Vec1[3]={2.0,3.2,1.2};
  double Vec2[3]={4.2,6.5,8.1};
  double S_mult;
  
  
  cout<< "results pass by value"<<endl;
  
  S_mult=Vec_mult_1(Vec1, Vec2);
  for(int i=0; i<3; i++){
    if( i>0) cout<<" + ";
  cout<<"V1["<<i<<"]:"<<Vec1[i]<<" * "<<"V2["<<i<<"]:"<<Vec2[i];
  }
  cout<<"=="<<S_mult<<endl;
  
  S_mult =0;
  cout<<"=================================="<<endl;
  
  cout<< "results pass by reference"<<endl;
  double *DVec1= new double[3];
  double *DVec2= new double[3];
  
  //initializing
  for(int i=0; i<3; i++){
    DVec1[i]= Vec1[i]; //*(DVec1 +i)= Vec1[i]
    DVec2[i]= Vec2[i];
  }

  Vec_mult_2(DVec1, DVec2, S_mult);
  
  for(int i=0; i<3; i++){
    if( i>0) cout<<" + ";
  cout<<"V1["<<i<<"]:"<<DVec1[i]<<" * "<<"V2["<<i<<"]:"<<DVec2[i];
  }
  cout<<"=="<<S_mult<<endl;
  
  cout<<"------------------------------------"<<endl;
  
  S_mult =0;
  cout<< "results pass by pointer"<<endl;
   Vec_mult_2(DVec1, DVec2, &S_mult);
  
  for(int i=0; i<3; i++){
    if( i>0) cout<<" + ";
  cout<<"V1["<<i<<"]:"<<DVec1[i]<<" * "<<"V2["<<i<<"]:"<<DVec2[i];
  }
  cout<<"=="<<S_mult<<endl;
  
  cout<<"=================================="<<endl;
  
  //Using two dimensional array
  
  double Matrix1[2][2];
  double Matrix2[2][2];
  double Matrix_mul[2][2];
  
  //Filling two matrices by random numbers
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      Matrix1[i][j] = double(rand()%10); 
      Matrix2[i][j] = double(rand() %10); 
      cout<<"Matrix1["<<i<<"]["<<j<<"]= "<< Matrix1[i][j];
      cout<<", Matrix2["<<i<<"]["<<j<<"]= "<< Matrix2[i][j]<<endl;
    }
  }
  
  Mat_mult_1(Matrix1, Matrix2, Matrix_mul);
  
  
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      cout<<"Matrix_mult["<<i<<"]["<<j<<"]= "<< Matrix_mul[i][j]<<endl;
    }
  }
  
  
    cout<<"=================================="<<endl;
  
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
  
  Mat_mult_2(PMatrix1, PMatrix2, PMatrix_mul);
  
  
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      cout<<"Matrix_mult["<<i<<"]["<<j<<"]= "<< PMatrix_mul[i][j]<<endl;
    }
  }
  
  return 0;
}
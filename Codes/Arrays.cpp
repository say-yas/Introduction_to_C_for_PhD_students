/*
 * How to compile:
 *
 *g++ -Wall -std=c++11 Arrays.cpp -o Arrays
 * 
 * How to execute:
 * ./Arrays
 * 
 */
#include <iostream>
//for the second approach of introducing the library
// http://en.cppreference.com/w/cpp/container/array 
#include <array> 



void Print_Array(int, double[]);
// *Varray would pass the address of the element of the 
void Change_Array_with_no_output(double *Varray, int size_array){
  
      for(int i=0; i<size_array; i++){
	    Varray[i] *=0.5;
	    std::cout<<"Pointer passed:: Varray["<<i<<"]: "<<Varray[i]<<std::endl;
      }
}
void Change_Array_with_no_output_2(double Varray[], int size_array){
  
      for(int i=0; i<size_array; i++){
	    Varray[i] *=0.5;
	    std::cout<<"Array:: Varray["<<i<<"]: "<<Varray[i]<<std::endl;
      }
}


template<typename T, std::size_t size>
void MultArray(std::array<T, size>& Arr, const T Sum_fac) {
    //"auto" is a typename which set its precise type depending on the variable
   // we wre also able to replace "auto" by "double"
    // for ( double elem : myarray) is an iterator over the elemts of an array till the end of its size
  int i=0;  
  for(auto& elem : Arr) {
	elem += Sum_fac;
	std::cout<<"elemets: "<<elem<<"\t";
	std::cout<<"Array["<<i<<"]: "<<Arr[i]<<std::endl;
	i++;
    }
    i=0;
    for(auto elem2 : Arr) {
	elem2 += 2*Sum_fac;
	std::cout<<"elemets: "<<elem2<<"\t";
	std::cout<<"Array["<<i<<"]: "<<Arr[i]<<std::endl;
	i++;
    }
    
    ///NOTE the differences between the output of the two above for loops
    //the first one elem is the address of Arr and thereby any change on that would change the value of Arr as well
    //The second one, elem is the value of Arr elemnts thereby any change on that would not affect Arr
}

/*
 * To define a array one should determine the data_type od each elements( which are all the same type)
 * 
 * One dimension array:
 * 
 * data_type_array_elemts name_array [ size_array]
 * 
 * Two dimension array:
 * 
 * data_type_array_elemts name_array [ size_array][ size_array]
 * 
 * And so on for higher dimesions
 * 
 */

int main(){
  
  ///FIRST APPROACH: BASED  ON C LANGUAGE 
  //different initialization of the array with and without specifying the array_size
  int length_array=5;
  double Vintarr[5] = {9.0, 12.1, 5.2, 7.3, 39.4};
  double Vintarr2[] = {9.0, 12.1, 5.2, 7.3, 39.4};
  
  for(int i=0; i<length_array; i++){
      // to access each elemnt of array we would use "name_array [ element_counter ]"
      // NOTE that the element counter always starts from 0
      std::cout<<"Vintarr["<<i<<"]= "<<Vintarr[i]<<"\tVintarr2["<<i<<"]= "<<Vintarr2[i]<<std::endl;
  }
  Print_Array(length_array, Vintarr);
  
  std::cout<<"==========================="<<std::endl;
  
  
  Change_Array_with_no_output(Vintarr, length_array);
  No_Change_Array_with_no_output(Vintarr2, length_array);
  
  for(int i=0; i<length_array; i++){
      std::cout<<"Compare:: Vintarr["<<i<<"]= "<<Vintarr[i]<<"\tVintarr2["<<i<<"]= "<<Vintarr2[i]<<std::endl;
  }
  
  
  ///SECOND APPROACH: BASED  ON C++ array library ==> should include array library
  
  /*
   * In the array library the array is now a "template  class" 
   * the array should define as
   * 
   * std::array <data_type, size_array > name_array;
   * 
   * accessing each element of array is by
   * 
   * name_array [element_counter]= value;
   * Variable = name_array [element_counter]
   * 
   * To check whether the array is empty or not use:
   * array_name.empty()
   * This is a boolian function which would give one if the array_name is full and zero otherwise
   * 
   * more member functions: and examples http://en.cppreference.com/w/cpp/container/array
   * 
   */
  
  std::array <double,  3> Arr_class = {2.2, 4.7, 1.5};
   
  //only in will not be enough
  MultArray(Arr_class, 3.3);
  
  for(unsigned int i=0; i< Arr_class.size() ; i++){
      std::cout<<"Arr_class["<<i<<"]= "<<Arr_class[i]<<std::endl;
  }

  
  std::cout<<"==========================="<<std::endl;

  ///TWO DIMENSIONAL ARRAY
  double array2d [5][3]={
    {1.0,1.2,1.3},
    {2.0,2.1,2.2},
    {3.0,3.1,3.2},
    {4.0,4.1,4.2},
    {5.0,5.1,5.2}
  };
  for(int i=0; i<5; i++){
    for(int j=0; j<3; j++){
      array2d[i][j]= array2d[i][j] + i+ j;
      std::cout<<"array2d["<<i<<"]["<<j<<"]="<<array2d[i][j]<<std::endl;
    }
  }
    
  
  
  return 0;
}

void Print_Array( int size_array, double Varray[]){
  
  for(int i=0; i<size_array; i++){
	std::cout << "the " << i <<"th element is:"<<Varray[i]<<std::endl; 
  }
  
}



#include <iosteam>
using namespace std;


class Vector {
public:
 double x;
 double y;
 double z;
 
 Vector();
 
 ~Vector();
 
 void Access_x(){
   cout<< x<<endl;
}
  
  
};


int main(){

  
  Vector Vec1;
  Vec1.x= 2;
  Vec1.y= 3.0;
  Vec1.z= 4.5;
  
  
 return 0;
}

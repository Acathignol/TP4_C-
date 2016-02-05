

// ===========================================================================
//                                  Includes
// ===========================================================================
//#include <cstdio>
#include <cstdlib>
//#include <fstream>
#include <iostream>
//#include <string>

using namespace std;

#include "Polynome.h"


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
  
  printf("Hello World! \n");

// =========================  ARRAY ==========================================
  Polynome p1(2);
  cout<<"The size of p1 is: "<<p1.size()<<endl;
  
  Polynome p2(2,5.);    
  cout<<"The values of the table of p2 are: "<<endl;
  for (int i=0 ; i<p2.size();i++){
    cout<<p2.data()[i]<<endl;
  }
  
  p2.set(1,10);
  cout<<"Now the values of the table of p2 are: "<<endl;
  for (int i=0 ; i<p2.size();i++){
    cout<<p2.data()[i]<<endl;
  }
  
  cout<<"Test of operator [] - p2[0]:"<<p2[0]<<endl;
  p2[0]=20;
  cout<<"Test of operator [] - p2[0]:"<<p2[0]<<endl;
  
  Polynome p3 = Polynome (p1+p2);
  cout<<"Test of operator + -a3=a1+a2- The values of p3 are: "<<endl;
  for (int i=0 ; i<p3.size();i++){
    cout<<p3.data()[i]<<endl;
  }
  
  p1 = p3;
  cout<<"Test of operator = -a1=a4- The values of p1 are: "<<endl;
  for (int i=0 ; i<p1.size();i++){
    cout<<p1.data()[i]<<endl;
  }
  

  return 0;
}

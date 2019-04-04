#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h>
#include <algorithm> 

using std::cout;
using std::endl;

void MCMD(int N);

int main(){
    
    int N=100000;
    float uno = 1.0;

    
      for(int i = 1; i < N; i++){
          
          float l = (drand48()*2-1);
          float propuesta = l + (drand48()*2-1);
          float r = std::min(uno ,((propuesta)/l));
          float alpha = drand48();
          
          if(alpha < r){
              
              cout << i << "  " << propuesta << endl;
              
          }
          
          else {
              
              cout << i << "  " << l << endl;
          }
          
          
          
      }
    
}


void MCMD(int NN){
    
}
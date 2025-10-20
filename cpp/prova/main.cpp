#include <iostream>
#include "Counter.h"

using namespace std;


int main(){

   Counter c1;

   

for(int i=0;i<=100;i++){
    cout << "Contatore 1: " << c1.getValue() <<"\n";
    c1.increase(1);
   }
   


    return 0;
}
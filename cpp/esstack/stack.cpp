#include <iostream>
#include "stack.h"

using namespace std;

stack::stack(){
    counter = 0;
    dimensione = 100;
}
void stack::push(int n){
    if(counter<=100){
        array[couter++]=n;
    }
    else{
        cout << "Lo stack è pieno";
    }
}
int stack::pop(){
    return array[--counter];
}
int stack::top(){
    return array[counter-1];
}
int stack::isEmpty(){
    return counter == 0;
}
int stack::size(){
    return counter;
}
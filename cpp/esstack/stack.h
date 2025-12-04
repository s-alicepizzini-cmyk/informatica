#ifndef STACK_H
#define STACK_H

class stack{

    private:
        int dimensione;
        int array[100];
        int counter;

    public:
        stack();
        void push(int n);
        int pop();
        int top();
        int isEmpty(); 
        int size();

};
#endif
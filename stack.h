/*********************
# Name: Caroline Kim
# Data Structure
# Coding Asg 03 - stack.h
# Purpose: Simple Stack
# Understanding simple integer stack in functions and purpose.
# This introduction of stack will help to understand properly to architect ADT in the future.
**********************/

#ifndef CLASSES_STACK_H
#define CLASSES_STACK_H

#define MAX 10

class Stack{

public:

    Stack();

    bool push(int);
    bool isEmpty();
    int pop();
    int peek();


protected:
    int stk[MAX];
    int top;

};

#endif //CLASSES_STACK_H

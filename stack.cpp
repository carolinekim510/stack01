/*********************
# Name: Caroline Kim
# Data Structure
# Coding Asg 03 - stack.cpp
# Purpose: Simple Stack
# Understanding simple integer stack in functions and purpose.
# This introduction of stack will help to understand properly to architect ADT in the future.
**********************/

#include "stack.h"

Stack::Stack(){top = -1;}

bool Stack::push(int x)
{
    bool result = false;
    if(top != MAX - 1)     {
        stk[++top] = x;
        result = true;
    }
    return result;
}

bool Stack::isEmpty() {return top == -1;}

int Stack::pu() {
    if(isEmpty()) {
        throw 'a';
    }
    return stk[top--];
}

int Stack::peek() {
    if(isEmpty()) {
        throw 'b';
    }
    return stk[top];
}
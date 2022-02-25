/*********************
# Name: Caroline Kim
# Data Structure
# Coding Asg 03 - main.cpp
# Purpose: Simple Stack
# Understanding simple integer stack in functions and purpose.
# This introduction of stack will help to understand properly to architect ADT in the future.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    std::cout << "Hello, World!" << std::endl;

    Stack s1;

    // Pushing random numbers (ONLY 5)
    std::cout <<"1 ---------"<<std::endl;
    for (int i = 0; i < MAX *.5; i++){
        if (s1.push(rand()%100)){
            std::cout << "Stack Inserted"<< std::endl;
        } else {
        std::cout << "Stack Overflow" << std::endl;
        }
    }




    // Peeking to find the elements and pop to print (Out of 10, only 5 peek and rests are catch)
    std::cout <<"\n2 ---------"<<std::endl;
    for (int i = 0; i < MAX; i++){
        try {
            std::cout << i << ": " << s1.peek() << std::endl;
            s1.pop();
        } catch (char e) {
            std::cout <<"No more peeking."<<std::endl;
        }
    }





    // Checking to see if stack is empty.
    std::cout <<"\n3 ---------"<<std::endl;
    if (s1.isEmpty()) {
        std::cout << "The stack is empty\n" << std::endl;
    }
    else {
        std::cout << "The stack is not empty\n" << std::endl;
    }




    // Second pop after peek and pop in iteration.
    std::cout <<"4 ---------"<<std::endl;
    try {
        s1.pop();
    } catch (char e) {
        std::cout <<"Stack underflow to pop\n"<<std::endl;
    }




    // Pushing random numbers and peeking at same time (Iterates 15 times: Expect 5 overflow)
    std::cout <<"5 ---------"<<std::endl;
    for (int i = 0; i < MAX * 1.5; i++){
        if (s1.push(rand()%100)){
            std::cout << "Elements Inserted..."<< std::endl;
            std::cout << "The top elemenst is " << s1.peek() << "\n" << std::endl;
        } else {
            std::cout << "Stack Overflow" << std::endl;
        }
    }




    // Peeking the number and pop to empty out the stack
    std::cout <<"\n6 ---------"<<std::endl;
    try {
        for (int i = 0; i < MAX+1; i++){
            std::cout << i << ": " << s1.peek() << std::endl;
            s1.pop();
        }
    } catch (char e) {
        std::cout <<"Stack underflow --- nothing to pop\n"<<std::endl;
    }




    // Chekcing to see if there is any element left in stack (pop)
    std::cout <<"7 ---------"<<std::endl;
    try {
        s1.pop();
    } catch (char e) {
        std::cout <<"Empty Stack no POPPING!\n"<<std::endl;
    }




    // Chekcing to see if there is any element left in stack (peek)
    std::cout <<"7.1 ---------"<<std::endl;
    try {
        s1.peek();
    } catch (char e) {
        std::cout <<"Empty Stack no PEEKING!\n"<<std::endl;
    }




    // Pushing random numbers for the next test
    std::cout <<"8 ---------"<<std::endl;
    for (int i = 0; i < MAX * 1.5; i++){
        if (s1.push(rand()%100)){
            std::cout << "Stack Pushing..."<< std::endl;
            std::cout << "The top elemenst: " << s1.peek() << "\n" << std::endl;
        } else {
            std::cout << "Stack Overflow" << std::endl;
        }
    }




    // Intetionally pop FIRST to find the empty stack and have peek to try (Last 35 is removed)
    std::cout <<"\n9 ---------"<<std::endl;
    try {
      std::cout << s1.peek() << std::endl;
    } catch (char e) {
        std::cout <<"Can't peek"<<std::endl;
    }




    // Adding elements back
    for (int i = 0; i < MAX; i++){
        s1.push(rand()%100);
    }




    // Popping and peeking at the same time
    std::cout <<"\n10 ---------"<<std::endl;
    for (int i = 0; i < MAX + 2; i++){
        try {
            std::cout << "--pop: " << s1.pop() << std::endl;
        } catch (char e) {
            std::cout <<"Stack underflow to pop"<<std::endl;
        }

        try {
            std::cout << "peek: " << s1.peek() << "\n"<< std::endl;
        } catch (char e) {
            std::cout <<"Can't peek"<<std::endl;
        }
    }


}
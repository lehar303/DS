#include "stack.hpp"
#include <iostream>

Stack::Stack(int value){
    Node* newNode = new Node(value);
    top = newNode;
    height = 1;
}

Stack::~Stack(){
    Node *temp = top;
    while (top)
    {
        top = top->next;
        delete temp;
        temp = top;
    }    
}

void Stack::printStack(){
    Node *temp = top;
    while(temp){
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}

Node* Stack::getTop(){
    return (top) ? top : nullptr;
}

int Stack::topValue(){
    return (top) ? top->value : INT16_MIN;
}

int Stack::getHeight(){
    return height;
}

void Stack::emptyStack(){
    Node *temp = top;
    while(top){
        top = top->next;
        delete temp;
        temp = top;
    }
    height = 0;
}

void Stack::push(int num){
    Node *newNode = new Node(num);
    newNode->next = top;
    top = newNode;
    height++;
}

int Stack::pop(){
    if (height == 0) return INT16_MIN;

    Node *temp = top;
    int poppedVal  = top->value;
    top = top->next;
    delete temp;
    height--;
    return poppedVal;
}
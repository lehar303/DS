#include <iostream>

#include "stack.hpp"

int main(){

    Stack *s1 = new Stack(3);
    s1->push(2);
    s1->push(1);
    std::cout << "Height: " << s1->getHeight() << std::endl;
    std::cout << "Top Value: " << s1->topValue() << std::endl;
    s1->printStack();
    std::cout << "Popped Value: " << s1->pop() << std::endl;
    s1->printStack();
    std::cout << "New Height: " << s1->getHeight() << std::endl;
    s1->emptyStack();
    s1->printStack();
    s1->push(5);
    s1->printStack();
}

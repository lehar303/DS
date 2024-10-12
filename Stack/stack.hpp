#include "node.hpp"

class Stack{
    public:

    Stack(int value);
    ~Stack();
    void printStack();
    Node *getTop();
    int topValue();
    int getHeight();
    void emptyStack();
    void push(int num);
    int pop();

    private:
    int height;
    Node *top;
};
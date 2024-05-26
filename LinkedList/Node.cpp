#include <iostream>

class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        next = nullptr;
    }

    ~Node(){
        //std::cout << "Node Destructor" << std::endl;
    }
};
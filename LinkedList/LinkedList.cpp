#include "Node.cpp"
#include <iostream>

class Node;

class LinkedList{
    private:
    Node* head;
    Node* tail;
    int length;

    public:
    LinkedList(int value){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;

    }

    ~LinkedList(){
        Node* temp = head;
        while (head)
        {
            head=head->next;
            delete temp;
            temp = head;
        }
        //std::cout << "LinkedList Destructor" << std::endl;
    }

    void printList(){
        Node* temp = head;
        while(temp){
            std::cout << temp->value << std::endl;
            temp = temp->next;
        }
    }

    void getHead(){
        std::cout << "Head: " << head->value << std::endl;
    }

    void getTail(){
        std::cout << "Tail: " << tail->value << std::endl;
    }

    void getLength(){
        std::cout << "Length: " << length << std::endl;
    }

    void append(int value){
        Node* appendedNode = new Node(value);
        if(head){
            tail->next = appendedNode;            
            tail = appendedNode;
        }
        else{
            head = appendedNode;
            tail = appendedNode;
        }
        length ++;
    }

    void delete_last(){
        if(length == 0) return;
        Node* temp = head;
        if(length == 1){
            head = nullptr;
            tail = nullptr;
        }
        else{
            Node* pre = head;
            while(temp->next){
            pre = temp;
            temp = temp->next;
            }
            tail = pre;
            tail->next = nullptr;        
        }
        delete temp;
        length--;
    }

    void prepend(int value){
        Node* prependedNode = new Node(value);
        if(length == 0){
            head = prependedNode;
            tail = prependedNode;
        }
        else{
            prependedNode->next = head;
            head = prependedNode;
        }
        length++;
    }

    void delete_first(){
        if(length == 0) return;
        Node* temp = head;
        if(length == 1){
            head = nullptr;
            tail = nullptr;
        }
        else{
            head = head->next;
        }
        delete temp;
        length--;
    }

    Node* get(int index){
        if(index < 0 || index >= length){
            return nullptr;
        }
        Node* temp = head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        return temp;
    }

    bool set(int index, int value){
        Node* temp = get(index);
        if(temp){
            temp->value = value;
            return true;
        }
        return false;
    }

    bool insert(int index, int value){
        if(index < 0 || index >= length){
            return false;
        }
        if(index == 0){
            prepend(value);
            return true;
        }
        if(index==length){
            append(value);
            return true;
        }
        Node* newNode = new Node(value);
        Node* temp = get(index - 1);
        newNode->next = temp->next;
        temp->next = newNode;
        length++;
        return true; 
    }

    void delete_node(int index){
        if(index < 0 || index >= length){
            return ;
        }
        if(index == 0){
            return delete_first();
        }
        if(index == length){
            return delete_last();
        }
        Node* prev = get(index - 1);
        Node* temp = prev->next;
        prev->next = temp->next;
        delete temp;
        length--;
    }

    void reverse(){
        Node* temp = head;
        head = tail;
        tail = temp;
        Node* after = temp->next;
        Node* before = nullptr;

        for(int i = 0; i<length; i++){
            after = temp->next;
            temp->next = before;
            before = temp;
            temp = after;
        }
    }
};
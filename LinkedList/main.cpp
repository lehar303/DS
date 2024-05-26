#include "LinkedList.cpp"
#include <iostream>

int main(){
    /* LinkedList* myLinkedList = new LinkedList(1);
    myLinkedList->append(2); 
    myLinkedList->prepend(3);   
    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    myLinkedList->printList();

    std::cout << myLinkedList->get(2)->value << std::endl; */

    /* std::cout << "LL before delete last" << std::endl;
    myLinkedList->printList();

    myLinkedList->delete_last(); */
    
   /*  std::cout << "LL after first delete_last" << std::endl;
    myLinkedList->printList();

    myLinkedList->delete_last();

    std::cout << "LL after second delete_last" << std::endl;
    myLinkedList->printList();

    myLinkedList->delete_last(); */

    /* std::cout << "LL after  delete_last" << std::endl;
    myLinkedList->printList();

    myLinkedList->delete_first();

    std::cout << "LL after first delete_first" << std::endl;
    myLinkedList->printList(); */

    /* myLinkedList->delete_first();

    std::cout << "LL after second delete_first" << std::endl;
    myLinkedList->printList();

    myLinkedList->delete_first();

    std::cout << "LL after third delete_first" << std::endl;
    myLinkedList->printList(); */

    LinkedList* myLinkedList = new LinkedList(11);
    myLinkedList->append(3);
    myLinkedList->append(23);
    myLinkedList->append(7);

    myLinkedList->set(1,4);
    myLinkedList->insert(2,3);
    myLinkedList->printList();
    myLinkedList->delete_node(3);
    std::cout << "-----------" << "\n";
    myLinkedList->printList();
    std::cout << "-----------" << "\n";
    myLinkedList->reverse();
    myLinkedList->printList();

    delete myLinkedList;

    return 0;
}
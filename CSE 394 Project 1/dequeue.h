#include <cstdlib>

#include "node.h"

class Dequeue {
    
private:
    int size;
    node *head;
    node *rear;

public:
    Dequeue();
    bool isEmpty();
    int getSize();
    void insertAtFront(node *n);
    void insertAtRear(node *n);
    int popFront();
    int popRear();
    node* getHead();
    node* getRear();
    
};

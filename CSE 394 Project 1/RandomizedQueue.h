#include <iostream>     // for random number generator
#include <cstdlib>      // NULL is defined here

#include "node.h"

class RandomizedQueue{
    
private:
    int size;
    node *head;
    node *rear;
    
protected:
public:
    RandomizedQueue();
    bool isEmpty();
    int getSize();
    void addItem(node *n);
    int  popRandom();
    int  returnRandom();
    node *getHead();
    node *getRear();
    
};

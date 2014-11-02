#include <iostream>
#include <cstdlib>

#include "dequeue.h"
#include "RandomizedQueue.h"

using namespace std;

int main()
{
    /* Initialize nodes */
    node *testNode1 = new node;
    node *testNode2 = new node;
    node *testNode3 = new node;
    node *testNode4 = new node;
    testNode1->data = 1;
    testNode2->data = 2;
    testNode3->data = 3;
    testNode4->data = 4;
    
    Dequeue *dq = new Dequeue();
    dq->insertAtFront(testNode1);
    dq->insertAtRear(testNode2);
    dq->insertAtRear(testNode3);
    dq->insertAtRear(testNode4);
    
    for (int i = 0; i < 4; i++) {
        cout << "node " << i << " has value of " << dq->popFront() << "\n";
    }
    
    RandomizedQueue *rq = new RandomizedQueue();
    rq->addItem(testNode1);
    rq->addItem(testNode2);
    rq->addItem(testNode3);
    rq->addItem(testNode4);
    
    for (int i = 0; i < 4; i++) {
        cout << "node " << i << " has value of " << rq->returnRandom() << "\n";
    }
    
//    RandomizedQueue *rq = new RandomizedQueue();
//    rq->addItem(testNode1);
//    rq->addItem(testNode2);
//    rq->addItem(testNode3);
//    rq->addItem(testNode4);
//    
//    for (int i = 0; i < 4; i++)
//    {
//        rq->returnRandom();
//    }
    
    return 0;
}
#include "RandomizedQueue.h"

RandomizedQueue::RandomizedQueue()
{
    size = 0;
    head = nullptr;
    rear = nullptr;
}

bool RandomizedQueue::isEmpty()
{
    if (size > 0) {
        return false;
    } else {
        return true;
    }
}

int RandomizedQueue::getSize()
{
    return size;
}


void RandomizedQueue::addItem(node *n)
{
    if (head == nullptr) {
        head = n;
        rear = n;
        size++;
    } else {
        head->prev = n;
        n->next = head;
        head = n;
        size++;
    }
}

int RandomizedQueue::popRandom()
{
    if (size == 0) {
        return NULL;
    } else if (size == 1) {
        node *ret = head;
        int num = head->data;
        head = nullptr;
        rear = nullptr;
        delete ret;
        size = 0;
        return num;
    } else {
        int randNum = (rand()%(size)) + 1;
        node *curr = head;
        
        for(int i=0; i<randNum; i++)
        {
            curr = curr->next;
        }
        
        curr->prev->next = curr->next;
        int num = curr->data;
        curr = nullptr;
        delete curr;
        size--;
        return num;
    }
}

int RandomizedQueue::returnRandom()
{
    int randNum = rand() % size;
    node *curr = head;
    
    for(int i=0; i<randNum; i++)
    {
        curr = curr->next;
    }
    
    int num = curr->data;
    return num;
}


node* RandomizedQueue::getHead()
{
    if (size == 0) {
        return nullptr;
    } else {
        return head;
    }
}

node* RandomizedQueue::getRear()
{
    if (size == 0) {
        return nullptr;
    } else {
        return rear;
    }
}

#include "dequeue.h"

Dequeue::Dequeue()
{
    size = 0;
    head = nullptr;
    rear = nullptr;
}

bool Dequeue::isEmpty()
{
    if (size > 0) {
        return false;
    } else {
        return true;
    }
}

int Dequeue::getSize()
{
    return size;
}

void Dequeue::insertAtRear(node *n)
{
    if (head == nullptr) {
        head = n;
        rear = n;
        size++;
    } else {
        rear->next = n;
        n->prev = rear;
        rear = n;
        size++;
    }
}

void Dequeue::insertAtFront(node *n)
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

int Dequeue::popFront()
{
    if (size == 0) {
        return NULL;
    } else if (size == 1) {
        int ret = head->data;
        delete head;
        head = nullptr;
        rear = nullptr;
        size = 0;
        return ret;
    } else {
        int ret = head->data;
        node *tmp = head->next;
        delete head;
        head = tmp;
        head->prev = nullptr;
        size--;
        return ret;
    }
}

int Dequeue::popRear()
{
    if (size == 0) {
        return NULL;
    } else if (size == 1) {
        int ret = rear->data;
        delete rear;
        rear = nullptr;
        head = nullptr;
        size = 0;
        return ret;
    } else {
        int ret = rear->data;
        node *tmp = head->next;
        delete rear;
        rear = tmp;
        rear->next = nullptr;
        size--;
        return ret;
    }
}

node* Dequeue::getHead() /*ha*/
{
    if (size == 0) {
        return nullptr;
    } else {
        return head;
    }
}

node* Dequeue::getRear()
{
    if (size == 0) {
        return nullptr;
    } else {
        return rear;
    }
}
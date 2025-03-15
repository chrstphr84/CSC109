//
// Created by Christopher Noel on 2/26/25.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "IntNode.h"
#include "LinkedList.h"
#include <iostream>

using std::ostream;

class LinkedList {
public:
    LinkedList(); // constructor
    ~LinkedList(); // destructor
    LinkedList(const LinkedList& other); // copy constructor
    LinkedList& operator=(const LinkedList& other); // assiignment operator
    void Insert(int index, int data);
    void Append(int data);
    void push_front(int data);
    void Delete(int index);
    void PrintList();
    int GetSize();
    IntNode* GetFirst() const;
    IntNode* GetLast();
    //friend ostream &operator<<(ostream &out, const LinkedList &list);
    friend ostream &operator<<(ostream &out, const LinkedList&  list);
private:
    IntNode* head;
    IntNode* tail;
    int size;
};

// int LinkedList::LinkedList(int index, int data) {
//     head = nullptr;
//     tail = nullptr;
//     size = 0;
// }


#endif //LINKEDLIST_H
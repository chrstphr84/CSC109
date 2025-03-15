//
// Created by Christopher Noel on 2/26/25.
//

#include "IntNode.h"
#include "LinkedList.h"
#include <iostream>
using std::ostream;


//Constructor
LinkedList::LinkedList() {
     head = nullptr;
     tail = nullptr;
     size = 0;
 }

// Destructor
LinkedList::~LinkedList() {
    IntNode* current = head;
    IntNode* next = nullptr;
    while (current != nullptr) {
        next = current->GetNext();
        delete current;
        current = next;
    }
    head = nullptr;
    tail = nullptr;
    size = 0;
}

// Copy constructor
LinkedList::LinkedList(const LinkedList& other) {
    head = nullptr;
    tail = nullptr;
    size = 0;

    IntNode* current = other.head;
    while (current != nullptr) {
        Append(current->GetData());
        current = current->GetNext();
    }
}

// Assignment operator
LinkedList& LinkedList::operator=(const LinkedList& other) {
    if (this != &other) {
        // Clean up the current list
        IntNode* current = head;
        while (current != nullptr) {    // delete all nodes in the current list
            IntNode* next = current->GetNext();
            delete current;
            current = next;
        }

        // Copy the other list
        head = nullptr;
        tail = nullptr;
        size = 0;

        IntNode* otherCurrent = other.head;
        while (otherCurrent != nullptr) {
            Append(otherCurrent->GetData());
            otherCurrent = otherCurrent->GetNext();
        }
    }
    return *this; // this is the current object - an EXTRA return statment
}


// Insert a node at a specific index
void LinkedList::Insert(int index, int data) {
        IntNode* newNode = new IntNode(data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else if (index == 0) {
            // newNode->InsertAfter(head);
            // head = newNode;
            push_front(data);
        }
        else if (index == size) {
            // tail->InsertAfter(newNode);
            // tail = newNode;
            push_front(data);
        }
        else {
            IntNode* prev = head;
            for (int i = 0; i < index - 1; i++) {
                prev = prev->GetNext();
            }
            newNode->InsertAfter(prev);
        }
    size++;
}


// Append a node to the end of the list
void LinkedList::Append(int data) {
    IntNode* newNode = new IntNode(data);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->InsertAfter(newNode);
        tail = newNode;
    }
    size++;
}

// Insert a node at the front of the list
void LinkedList::push_front(int data) {
    IntNode* newNode = new IntNode(data);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        newNode->InsertAfter(head);
        head = newNode;
    }
    size++;
    //return head;
}

// Delete a node at a specific index
void LinkedList::Delete(int index) {
     if (index == 0) {
         IntNode* temp = head;
         head = head->GetNext();
         delete temp;
     }
     else {
         IntNode* prev = head;
         for (int i = 0; i < index - 1; i++) {
             prev = prev->GetNext();
         }
         IntNode* temp = prev->GetNext();
         prev->SetNext(temp->GetNext());
         delete temp;
     }
 }

// Print the list
void LinkedList::PrintList() {
    IntNode* current = head;
    while (current != nullptr) {
        current->PrintNodeData();
        current = current->GetNext();
    }
}

// Get the size of the list
int LinkedList::GetSize() {
    return size;
}

// Get the first node
IntNode* LinkedList::GetFirst() const {
    return head;
}

// Get the last node
IntNode* LinkedList::GetLast() {
    return tail;
}

// ostream& operator<<(ostream& out, const LinkedList list) {
//     //IntNode* current = list->GetFirst();
//     IntNode* current = list.GetFirst();
//     while (current != nullptr) {
//         out << current->GetData() << " ";  // incorrect, as we are already have the insertion operator
//         //out << current << " "; //  this was what prof had in his code but it does not work here
//         current = current->GetNext();
//     }
//     return out;
// }

ostream& operator<<(ostream& out, const LinkedList& list) {
    IntNode* current = list.GetFirst();
    while (current != nullptr) {
        out << current->GetData() << " ";
        current = current->GetNext();
    }
    return out;
}
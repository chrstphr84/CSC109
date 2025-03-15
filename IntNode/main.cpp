#include <iostream>
#include <ostream>


#include "LinkedList.h"


using namespace std;

int main() {
    LinkedList list1; // Create linked list object
    list1.Append(10);
    list1.Append(20);
    list1.Append(30);
    list1.Append(40);
    list1.push_front(50);
    list1.push_front(60);

    // list1.Insert(0, 5);
    // list1.Insert(1, 10);
    // list1.Insert(2, 15);
    // list1.PrintList();
    cout << list1 << endl;
    cout << "Size: " << list1.GetSize() << endl;


    // invoke assignment operator
    LinkedList list2 = list1;
    cout << list2 << endl;
    cout << "Size: " << list2.GetSize() << endl;

// invoke copy constructor (with SetNext - this is what the prof used in class)
    LinkedList list3;
    list3 = list1;
    cout << list3 << endl;

    IntNode* headobj = nullptr; // Create IntNode pointers
    IntNode* nodeObj1 = nullptr;
    IntNode* nodeObj2 = nullptr;
    IntNode* nodeObj3 = nullptr;
    IntNode* currobj = nullptr;

    // Front of nodes list
    headobj = new IntNode (-1);
    // Insert nodes
    nodeObj1 = new IntNode (555);
    headobj->SetNext(nodeObj1);

    nodeObj2 = new IntNode (999);
    nodeObj1->SetNext(nodeObj2);

    nodeObj3 = new
    IntNode(777);
    nodeObj2->SetNext(nodeObj3);


    // Pinrt linked list
    currobj = headobj;
    while (currobj != nullptr) {
        currobj->PrintNodeData();
        currobj = currobj->GetNext();
    }

// invoke copy constructor (InsertAfter)
    // LinkedList list3;
    // list3 = list1;
    // cout << list3 << endl;
    //
    // IntNode* headobj = nullptr; // Create IntNode pointers
    // IntNode* nodeObj1 = nullptr;
    // IntNode* nodeObj2 = nullptr;
    // IntNode* nodeObj3 = nullptr;
    // IntNode* currobj = nullptr;
    //
    // // Front of nodes list
    // headobj = new IntNode (-1);
    // // Insert nodes
    // nodeObj1 = new IntNode (555);
    // headobj->InsertAfter(nodeObj1);
    //
    // nodeObj2 = new IntNode (999);
    // nodeObj1->InsertAfter(nodeObj2);
    //
    // nodeObj3 = new
    // IntNode(777);
    // nodeObj2->InsertAfter(nodeObj3);
    //
    //
    // // Pinrt linked list
    // currobj = headobj;
    // while (currobj != nullptr) {
    //     currobj->PrintNodeData();
    //     currobj = currobj->GetNext();
    // }


    // call copy constructor using pointer
    // IntNode* headObj2 = new IntNode(*headobj);
    // // call operator using pointer
    // IntNode* headObj3 = new IntNode();
    // *headObj3 = *headobj;


    return 0;
}
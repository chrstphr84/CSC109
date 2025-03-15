//
// Created by Christopher Noel on 2/27/25.
//

#ifndef CXXTEST_H
#define CXXTEST_H

#include <cxxtest/TestSuite.h>
#<include> "IntNode.h"
#<include> "LinkedList.h"

//Include your classes header file(s) below and uncomment.
//#include "myClass.h"


class newCxxTest : public CxxTest::TestSuite {
public:
    // void testIntNodeConstructor () {
    //     IntNode node(5);
    //     TS_ASSERT(node != nullptr);
    //     TS_ASSERT_EQUALS(node.GetData(), 5);
    //     TS_ASSERT(node.GetNext() == nullptr);
    // }
    // void testIntNodeInsertAfter () {
    //     IntNode* node1 = new IntNode (5) ;
    //     IntNode* node2 = new IntNode (10);
    //     node1->InsertAfter(node2) ;
    //     TS_ASSERT_EQUALS (node2->GetNext(), node1);
    //
    //
    // }
    // void testIntNodeGetNext () {
    //     IntNode* node1 = new IntNode (5);
    //     IntNode* node2 = new IntNode (10);
    //     node1->InsertAfter(node2);
    //     TS_ASSERT_EQUALS(node1->GetNext), node2);
    // }
    //
    // // test SetNext (autocomplete was different than what was in class)
    // void testIntNodeSetNext () {
    //     IntNode* node1 = new IntNode(5);
    //     IntNode* node2 = new IntNode(10);
    //     node1->SetNext(node2);
    //     TS_ASSERT_EQUALS(node1->GetNext(), node2);
    // }
    //
    // void testIntNodePrintNodeData () {
    //     IntNode* node = new IntNode(5);
    //     TS_ASSERT_THROWS_NOTHING(node->PrintNodeData());
    // }
    //
    // void testIntNodeOperatorOverload () {
    //     IntNode* node1 = new IntNode(5);
    //     IntNode* node2 = new IntNode(10);
    //     *node1 = *node2;
    //     TS_ASSERT_EQUALS(node1->GetData(), 10);
    // }
    //
    // void testIntNodeCopyConstructor () {
    //     IntNode* node1 = new IntNode (5);
    //     IntNode* node2 = new IntNode (*node1);
    //     TS_ASSERT_EQUALS(node2->GetData(), 5);
    // }
    //
    // void testIntNodeDestructor () {
    //     IntNode* node = new IntNode(5);
    //     TS_ASSERT_THROWS_NOTHING(delete node);
    // }
    //
    // void testLinkedListConstructor () {
    //     LinkedList* list = new LinkedList();
    //     TS_ASSERT(list != nullptr);
    //     TS_ASSERT(list->GetSize(), 0);
    //     TS_ASSERT(list->GetFirst(), nullptr);
    //     TS_ASSERT(list->GetLast(), nullptr);
    // }
    //
    // void testLinkedListDestructor () {
    //     LinkedList* list = new LinkedList();
    //     TS_ASSERT_THROWS_NOTHING(delete list);
    // }
    //
    // void testLinkedListCopyConstructor () {
    //     LinkedList* list1 = new LinkedList();
    //     list1->Append(5);
    //     list1->Append(10);
    //     LinkedList* list2 = new LinkedList(*list1);
    //     TS_ASSERT_EQUALS(list2->GetSize(), 2);
    //     TS_ASSERT_EQUALS(list2->GetFirst()->GetData(), 5);
    //     TS_ASSERT_EQUALS(list2->GetLast()->GetData(), 10);
    //     }
    //
    // void testLinkedListAssignmentOperator () {
    //     LinkedList* list1 = new LinkedList();
    //     list1->Append(5);
    //     list1->Append(10);
    //     LinkedList* list2 = new LinkedList();
    //     *list2 = *list1;
    //     TS_ASSERT_EQUALS(list2->GetSize(), 2);
    //     TS_ASSERT_EQUALS(list2->GetFirst()->GetData(), 5);
    //     TS_ASSERT_EQUALS(list2->GetLast()->GetData(), 10);
    // }
    //
    // void testLinkedListInsert () {
    //     LinkedList* list = new LinkedList();
    //     list->Insert(0, 5);
    //     list->Insert(1, 10);
    //     list->Insert(1, 7);
    //     TS_ASSERT_EQUALS(list->GetSize(), 3);
    //     TS_ASSERT_EQUALS(list->GetFirst()->GetData(), 5);
    //     TS_ASSERT_EQUALS(list->GetFirst()->GetNext()->GetData(), 7);
    //     TS_ASSERT_EQUALS(list->GetLast()->GetData(), 10);
    // }
    //
    // void testLinkedListAppend () {
    //     LinkedList* list = new LinkedList();
    //     list->Append(5);
    //     list->Append(10);
    //     TS_ASSERT_EQUALS(list->GetSize(), 2);
    //     TS_ASSERT_EQUALS(list->GetFirst()->GetData(), 5);
    //     TS_ASSERT_EQUALS(list->GetLast()->GetData(), 10);
    // }
    //
    // void testLinkedListPushFront () {
    //     LinkedList* list = new LinkedList();
    //     list->push_front(5);
    //     list->push_front(10);
    //     TS_ASSERT_EQUALS(list->GetSize(), 2);
    //     TS_ASSERT_EQUALS(list->GetFirst()->GetData(), 10);
    //     TS_ASSERT_EQUALS(list->GetLast()->GetData(), 5);
    // }
    //
    // void testLinkedListDelete () {
    //     LinkedList* list = new LinkedList();
    //     list->Append(5);
    //     list->Append(10);
    //     list->Append(15);
    //     list->Delete(1);
    //     TS_ASSERT_EQUALS(list->GetSize(), 2);
    //     TS_ASSERT_EQUALS(list->GetFirst()->GetData(), 5);
    //     TS_ASSERT_EQUALS(list->GetLast()->GetData(), 15);
    // }
    //
    // void testLinkedListGetSize () {
    //     LinkedList* list = new LinkedList();
    //     list->Append(5);
    //     list->Append(10);
    //     TS_ASSERT_EQUALS(list->GetSize(), 2);
    // }
    //
    // void testLinkedListGetFirst () {
    //     LinkedList* list = new LinkedList();
    //     list->Append(5);
    //     TS_ASSERT_EQUALS(list->GetFirst()->GetData(), 5);
    // }
    //
    // void testLinkedListGetLast () {
    //     LinkedList* list = new LinkedList();
    //     list->Append(5);
    //     TS_ASSERT_EQUALS(list->GetLast()->GetData(), 5);
    // }

    void testLinkedListConstructor() {
    LinkedList list;
    TS_ASSERT_EQUALS(list.GetSize(), 0);
    TS_ASSERT_EQUALS(list.GetFirst(), nullptr);
    TS_ASSERT_EQUALS(list.GetLast(), nullptr);
}

void testLinkedListDestructor() {
    LinkedList* list = new LinkedList();
    TS_ASSERT_THROWS_NOTHING(delete list);
}

void testLinkedListCopyConstructor() {
    LinkedList list1;
    list1.Append(5);
    list1.Append(10);
    LinkedList list2(list1);
    TS_ASSERT_EQUALS(list2.GetSize(), 2);
    TS_ASSERT_EQUALS(list2.GetFirst()->GetData(), 5);
    TS_ASSERT_EQUALS(list2.GetLast()->GetData(), 10);
}

void testLinkedListAssignmentOperator() {
    LinkedList list1;
    list1.Append(5);
    list1.Append(10);
    LinkedList list2;
    list2 = list1;
    TS_ASSERT_EQUALS(list2.GetSize(), 2);
    TS_ASSERT_EQUALS(list2.GetFirst()->GetData(), 5);
    TS_ASSERT_EQUALS(list2.GetLast()->GetData(), 10);
}

void testLinkedListInsert() {
    LinkedList list;
    list.Insert(0, 5);
    list.Insert(1, 10);
    list.Insert(1, 7);
    TS_ASSERT_EQUALS(list.GetSize(), 3);
    TS_ASSERT_EQUALS(list.GetFirst()->GetData(), 5);
    TS_ASSERT_EQUALS(list.GetFirst()->GetNext()->GetData(), 7);
    TS_ASSERT_EQUALS(list.GetLast()->GetData(), 10);
}

void testLinkedListAppend() {
    LinkedList list;
    list.Append(5);
    list.Append(10);
    TS_ASSERT_EQUALS(list.GetSize(), 2);
    TS_ASSERT_EQUALS(list.GetFirst()->GetData(), 5);
    TS_ASSERT_EQUALS(list.GetLast()->GetData(), 10);
}

void testLinkedListPushFront() {
    LinkedList list;
    list.push_front(5);
    list.push_front(10);
    TS_ASSERT_EQUALS(list.GetSize(), 2);
    TS_ASSERT_EQUALS(list.GetFirst()->GetData(), 10);
    TS_ASSERT_EQUALS(list.GetLast()->GetData(), 5);
}

void testLinkedListDelete() {
    LinkedList list;
    list.Append(5);
    list.Append(10);
    list.Append(15);
    list.Delete(1);
    TS_ASSERT_EQUALS(list.GetSize(), 2);
    TS_ASSERT_EQUALS(list.GetFirst()->GetData(), 5);
    TS_ASSERT_EQUALS(list.GetLast()->GetData(), 15);
}

void testLinkedListGetSize() {
    LinkedList list;
    list.Append(5);
    list.Append(10);
    TS_ASSERT_EQUALS(list.GetSize(), 2);
}

void testLinkedListGetFirst() {
    LinkedList list;
    list.Append(5);
    TS_ASSERT_EQUALS(list.GetFirst()->GetData(), 5);
}

void testLinkedListGetLast() {
    LinkedList list;
    list.Append(5);
    TS_ASSERT_EQUALS(list.GetLast()->GetData(), 5);
}

};


#endif //CXXTEST_H

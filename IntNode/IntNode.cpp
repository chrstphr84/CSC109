#include "IntNode.h"
#include <iostream>

using std::cout;
using std::endl;
using std::swap;

// Constructor
IntNode::IntNode(int dataInit, IntNode *nextLoc)
{
    this->dataVal = dataInit;
    this->nextNodePtr = nextLoc;
}




// copy constructor
IntNode::IntNode(const IntNode &other)
{
    this->dataVal = other.dataVal;
    this->nextNodePtr = nullptr;
}

// assignment operator (using rhs)
// IntNode &IntNode::operator=(const IntNode &rhs)
// {
//     if (this != &rhs)
//     {
//         // reuse the copy constructor
//         IntNode temp(rhs);
//         swap(dataVal, temp.dataVal);
//         swap(nextNodePtr, temp.nextNodePtr);
//     }
//     return *this;
// }

IntNode &IntNode::operator=(const IntNode &other)
{
    if (this != &other)
    {
        // reuse the copy constructor
        //IntNode temp(other);
        this->dataVal = other.dataVal;
        this->nextNodePtr = nullptr;
    }
    return *this;
}

/* Insert node after this node.
 * Before: this --> next
 * After:  this -- node -- next
 */
void IntNode::InsertAfter(IntNode *nodeLoc)
{
    IntNode *tmpNext = nullptr;

    tmpNext = this->nextNodePtr;    // Remember next
    this->nextNodePtr = nodeLoc;    // this -- node -- ?
    nodeLoc->nextNodePtr = tmpNext; // this -- node -- next
}

// Print dataVal
void IntNode::PrintNodeData()
{
    cout << this->dataVal << endl;
}

bool IntNode::operator==(const IntNode &rhs) const
{
    return this->dataVal == rhs.dataVal;
}

bool IntNode::operator!=(const IntNode &rhs) const
{
    return !(*this == rhs);
}

int IntNode::GetData() const
{
    return dataVal;
}

void IntNode::SetData(int data)
{
    dataVal = data;
}

// Grab location pointed by nextNodePtr
IntNode *IntNode::GetNext()
{
    // if (nextNodePtr == nullptr) return nullptr;
    return nextNodePtr;
}

void IntNode::SetNext(IntNode *nextLoc)
{
    this->nextNodePtr = nextLoc;
}


// overload
//ostream &operator<<(ostream &out, const IntNode &node)
ostream &operator<<(ostream &out, const IntNode* node)
{
    //out << node.dataVal;
    out << node->dataVal;
    return out;
}

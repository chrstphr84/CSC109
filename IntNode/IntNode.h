
// Created by Christopher Noel on 2/26/25.
//

#ifndef INTNODE_H
#define INTNODE_H
#include <ostream>


using std::ostream;

class IntNode {
public:
    // Constructor
    IntNode(int dataInit, IntNode *nextLoc = nullptr);

    // Copy constructor
    //IntNode(const IntNode &node);

    // Copy constructor
    IntNode(const IntNode &other);

    // Assignment operator
    //IntNode &operator=(const IntNode &rhs);
    IntNode &operator=(const IntNode &other);

    // Insert node after this node
    void InsertAfter(IntNode *nodeLoc);

    // Print dataVal
    void PrintNodeData();

    // Comparison operators
    bool operator==(const IntNode &rhs) const;
    bool operator!=(const IntNode &rhs) const;

    // Getters and setters
    int GetData() const;
    void SetData(int data);
    IntNode *GetNext();
    void SetNext(IntNode *nextLoc);

    // Friend function for output
    friend std::ostream &operator<<(std::ostream &out, const IntNode *node);

private:
    int dataVal;
    IntNode *nextNodePtr;
};


#endif //INTNODE_H

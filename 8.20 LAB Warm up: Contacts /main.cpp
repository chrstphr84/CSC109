// A linked list is built in this lab. Make sure to keep track of the head node.
//
// Step 1: Define class ContactNode per the following specifications:
// Private data members
// string contactName
// string contactPhoneNumber
// ContactNode* nextNodePtr
// Constructor with parameters for name followed by phone number (1 pt)
// Public member functions
// GetName() - Accessor (1 pt)
// GetPhoneNumber() - Accessor (1 pt)
// InsertAfter(ContactNode* newNode) - Insert newNode after the current node (2 pts)
// GetNext() - Accessor (1 pt)
// PrintContactNode() - Output contactName and contactPhoneNumber of the current node according to the format shown in the example below.
// Ex: If the name is Roxanne Hughes and the phone number is 443-555-2864, PrintContactNode() outputs:
//
// Name: Roxanne Hughes
// Phone number: 443-555-2864
// Step 2: Define main() to read the name and phone number for three contacts and output each contact. Create three ContactNodes and use the nodes to build a linked list. (2 pts)
// Ex: If the input is:
//
// Roxanne Hughes
// 443-555-2864
// Juan Alberto Jr.
// 410-555-9385
// Rachel Phillips
// 310-555-6610
// the output is:
//
// Person 1: Roxanne Hughes, 443-555-2864
// Person 2: Juan Alberto Jr., 410-555-9385
// Person 3: Rachel Phillips, 310-555-6610
// Step 3: Output the linked list. Use a loop to call each node's PrintContactNode(). (2 pts)
// Ex:
//
// CONTACT LIST
// Name: Roxanne Hughes
// Phone number: 443-555-2864
//
// Name: Juan Alberto Jr.
// Phone number: 410-555-9385
//
// Name: Rachel Phillips
// Phone number: 310-555-6610


#include <iostream>
#include <string>

using namespace std;

class ContactNode {
    public:
        /* Declare member functions here */
        ContactNode(string name, string phone);
        string GetName();
        string GetPhoneNumber();
        void InsertAfter(ContactNode* newNode);
        ContactNode* GetNext();
        void PrintContactNode();

    private:
        /* Declare data members here */
        string contactName;
        string contactPhoneNumber;
        ContactNode* nextNodePtr;
};

/* Define member functions here */
ContactNode::ContactNode(string name, string phone) {
    this->contactName = name;
    this->contactPhoneNumber = phone;
    this->nextNodePtr = nullptr;
}

string ContactNode::GetName() {
    return this->contactName;
}

string ContactNode::GetPhoneNumber() {
    return this->contactPhoneNumber;
}

void ContactNode::InsertAfter(ContactNode* newNode) {
    newNode->nextNodePtr = this->nextNodePtr;
    this->nextNodePtr = newNode;
}

ContactNode* ContactNode::GetNext() {
    return nextNodePtr;
}

void ContactNode::PrintContactNode() {
    cout << "Name: " << contactName << endl;
    cout << "Phone number: " << contactPhoneNumber << endl;
}

int main() {
    /* Type your code here. */
    ContactNode* head = nullptr;
    ContactNode* currNode = nullptr;
    ContactNode* newNode = nullptr;
    string name;
    string phone;

    for (int i = 1; i <= 3; i++) {
        getline(cin, name);
        getline(cin, phone);

        newNode = new ContactNode(name, phone);

        if (head == nullptr) {
            head = newNode;
        } else {
            currNode->InsertAfter(newNode);
        }
        currNode = newNode;
    }

    for (int i = 1; i <= 3; i++) {
        if (i == 1) {
            currNode = head;
        } else {
            currNode = currNode->GetNext();
        }
        cout << "Person " << i << ": " << currNode->GetName() << ", " << currNode->GetPhoneNumber() << endl;
    }

    cout << endl;

    cout << "CONTACT LIST" << endl;
    currNode = head;
    while (currNode != nullptr) {
        currNode->PrintContactNode();
        cout << endl;
        currNode = currNode->GetNext();
    }

    return 0;
}


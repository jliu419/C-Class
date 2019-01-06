// Specification file for the CycloneList class
// Written By:
// IDE:

#ifndef CYCLONE_LIST_H
#define CYCLONE_LIST_H
#include "Cyclone.h"

class CycloneList
{
private:
    // Declare a structure for the list
    struct ListNode
    {
        Cyclone c;     // The value in this node
        ListNode *next;  // To point to the next node
    };
    
    ListNode *head;      // List head pointer
    int count;           // To keep track of the number of nodes in the list
    
    
public:
    CycloneList(); 
    ~CycloneList();   // Destructor
    
    // Linked list operations
    int getCount() const {return count;}
    void insertNode(Cyclone);
    bool deleteNode(string);
    void displayList() const;
    bool searchList(string);
};

#endif

// Implementation file for the CycloneList class
// Written By: @author Albert Liu
// IDE: xcode


// search
// print
// delete
// destroy

#include <iostream>         // For cout  and NULL
#include <cctype>
#include "CycloneList.h"
using namespace std;


//**************************************************
// displayList shows the value
// stored in each node of the linked list
// pointed to by head.
//**************************************************
CycloneList::CycloneList()
{
    head = new ListNode; // head points to the sentinel node
    head->next = NULL;
    count = 0;
}


/*********
 * display everything in the list.
 */
void CycloneList::displayList() const
{
    ListNode *pCur;  // To move through the list
    
    // Position pCur: skip the head of the list.
    pCur = head->next;
    
    cout << "========       ==========       ===========================    " << endl;
    cout << " Wind             Name              Storm category at       " << endl;
    cout << " (Mph)                               peak intensity         " << endl;
    cout << "========       ==========       ===========================    " << endl;

    // While pCur points to a node, traverse the list.
    while (pCur)
    {
        // Display the value in this node.
        cout <<  pCur->c.getwind() << "              " << pCur->c.getname() << "              ";
        
        if (pCur->c.getcat() == "TD")
            cout << "Tropical depression";
        else if (pCur->c.getcat() == "TS")
            cout << "Tropical Storm";
        else if (pCur->c.getcat() == "C1")
            cout << "Category 1 hurricane";
        else if (pCur->c.getcat() == "C2")
            cout << "Category 2 hurricane";
        else if (pCur->c.getcat() == "C3")
            cout << "Category 3 hurricane";
        else if (pCur->c.getcat() == "C4")
            cout << "Category 4 hurricane";
        else if (pCur->c.getcat() == "C5")
            cout << "Category 5 hurricane";
        else
            cout << "unused name";
        
        cout << endl;
        // Move to the next node.
        pCur = pCur->next;
    }
    cout << "========       ==========       ===========================    " << endl;

    cout << endl;
}

//**************************************************
// The insertNode function inserts a node with
// stu copied to its value member.
//**************************************************
void CycloneList::insertNode(Cyclone dataIn)
{
    ListNode *newNode;  // A new node
    ListNode *pCur;     // To traverse the list
    ListNode *pPre;     // The previous node
    
    // Allocate a new node and store num there.
    newNode = new ListNode;
    newNode->c = dataIn;
    
    // Initialize pointers
    pPre = head;
    pCur = head->next;
    
    // Find location: skip all nodes whose gpa is less than dataIn's gpa
    while (pCur != NULL && pCur -> c.getname() < dataIn.getname())
    {
        pPre = pCur;
        pCur = pCur->next;
    }
    
    // Insert the new node between pPre and pCur
    pPre->next = newNode;
    newNode->next = pCur;
    
    // Update the counter
    count++;
    
    // Check to ensure the last node's next is pointed towards NULL
    /*
     ListNode * node = head;
    for (int i = 1; i != count; i++)
    {
        node = node -> next;
    }
    node -> next = NULL;
     */
}


/**********
 * Search the target in the list and return true
 * if target is found, return false otherwise.
 */
bool CycloneList::searchList(string target)
{
    ListNode * pcur = head -> next;
    
    while (pcur != NULL)
    {
        if (pcur -> c.getname() == target)
        {
            cout << "FOUND" << endl;
            cout << "Name: " << pcur -> c.getname() << endl;
            cout << "month: " << pcur -> c.getmonth() << endl;
            cout << "catagory: " << pcur -> c.getcat() << endl;
            cout << "Wind speed: " << pcur -> c.getwind() << endl;
            cout << "damage: " << pcur -> c.getdamage() << endl;
            cout << "death: " << pcur -> c.getdeath() << endl;
            
            return true;
        }
        pcur = pcur -> next;
    }
    
    return false;
}

//**************************************************
// The deleteNode function searches for a node
// with num as its value. The node, if found, is
// deleted from the list and from memory.
//**************************************************
bool CycloneList::deleteNode(string target)
{
    ListNode *pCur;       // To traverse the list
    ListNode *pPre;        // To point to the previous node
    bool deleted = false;
    
    // Initialize pointers
    pPre = head;
    pCur = head->next;
    
    // Find node containing the target: Skip all nodes whose gpa is less than the target
    while (pCur != NULL && pCur->c.getname() < target)
    {
        pPre = pCur;
        pCur = pCur->next;
    }
    
    // If found, delte the node
    if (pCur != NULL && pCur->c.getname() == target)
    {
        pPre->next = pCur->next;
        delete pCur;
        deleted = true;
        count--;
        cout << "DONE deleting " << target; 
    }
    
    return deleted;
}

//**************************************************
// Destructor                                      *
// This function deletes every node in the list.   *
//**************************************************
CycloneList::~CycloneList()
{
    ListNode *pCur;   // To traverse the list
    ListNode *pNext;  // To point to the next node
    
    // Position nodePtr at the head of the list.
    pCur = head->next;
    
    // While pCur is not at the end of the list...
    while (pCur != NULL)
    {
        // Save a pointer to the next node.
        pNext = pCur->next;
        
        // Delete the current node.
        cout << "DEBUG - Destructor: Now deleting " << pCur->c.getname() << endl;
        delete pCur;
        
        // Position pCur at the next node.
        pCur = pNext;
    }
    cout << "DEBUG - Destructor: Now deleting the sentinel node " << head->c.getname() << endl;
    delete head; // delete the sentinel node
}


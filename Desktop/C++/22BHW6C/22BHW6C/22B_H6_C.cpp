/*
 CIS 22B: Homework 6C
 
 Build and procees a sorted linked list of Cyclone objects.
 The list is sorted in ascending order by cyclone name
 Assume that the cyclone name is a unique key.
 
 Written by: @author Albert Liu
 IDE:      xcode
 
 */
#include <iostream>
#include <fstream>
#include "CycloneList.h"
using namespace std;

void readCy(string filename, CycloneList &list);
void deleteCy(CycloneList &list);
void searchCy(CycloneList &list);

int main()
{
    const string inputFileName = "Cyclones.txt";
    CycloneList list;

    readCy(inputFileName, list);
    list.displayList();
    searchCy(list);
    cout << "back to main\n";
    // show the number of elements in the list
    deleteCy(list);
    list.displayList();
    // show the number of elements in the list
    
    return 0;
}

/*****************************************************************************
 This function reads data about cyclones from a given file and inserts them
 into a sorted linked list.
 *****************************************************************************/
void readCy(string filename, CycloneList &list)
{
    ifstream in;
    in.open(filename);
    
    if (!in)
    {
        cout << "Incorrect filename" << endl;
        exit(EXIT_SUCCESS);
    }
    
    string name, damage, month, category;
    int wind, death;
    
    while (in >> name >> month >> category >> wind) // potential bugs
    {
        getline(in, damage, ';');
        in >> death;
        
        list.insertNode({name, month, category, wind, damage, death});
    }
}

/*****************************************************************************
 Search manager: search the list until the user enters Q
 Input Parameter: list
 *****************************************************************************/
void searchCy(CycloneList &list)
{
    string targetName = "";
    
    cout << "\n Search\n";
    cout <<   "=======\n";
    
    while(targetName != "Q")
    {
        cout << "\nEnter a cyclone's name for search (or Q for stop searching) : ";
        getline(cin, targetName);
        
        if(targetName != "Q")
        {
            if (!list.searchList(targetName)) // found
            {
                cout << targetName << " NOT FOUND!!!!" << endl;
            }
        }
    }
    cout << "___________________END SEARCH SECTION _____\n";
}

/*****************************************************************************
 Delete manager: delete items from the list until the user enters QUIT
 Input Parameter: list
 *****************************************************************************/
void deleteCy(CycloneList &list)
{
    string targetName = "";
    
    cout << "\n Delete\n";
    cout << "=======\n";
    
    while(true)
    {
        cout << endl << "Enter a cyclone's name for delete (or Q for stop searching) : ";
        getline(cin, targetName);
        
        if(targetName != "Q")
        {
            list.deleteNode(targetName);
        }
        else
        {
            break;
        }
    }
    cout << "___________________END DELETE SECTION_____\n";
}

/***********
 Saved Output here:
 
 ========       ==========       ===========================
 Wind             Name              Storm category at
 (Mph)                               peak intensity
 ========       ==========       ===========================
 65              Alberto              Tropical Storm
 80              Beryl              Category 1 hurricane
 105              Chris              Category 2 hurricane
 50              Debby              Tropical Storm
 35              Eleven              Tropical depression
 45              Ernesto              Tropical Storm
 140              Florence              Category 4 hurricane
 70              Gordon              Tropical Storm
 110              Helene              Category 2 hurricane
 75              Isaac              Category 1 hurricane
 50              Joyce              Tropical Storm
 60              Kirk              Tropical Storm
 90              Leslie              Category 1 hurricane
 155              Michael              Category 4 hurricane
 65              Nadine              Tropical Storm
 105              Oscar              Category 2 hurricane
 0              Patty              unused name
 0              Sara              unused name
 0              Tony              unused name
 0              Valerie              unused name
 0              William              unused name
 ========       ==========       ===========================
 
 
 Search
 =======
 
 Enter a cyclone's name for search (or Q for stop searching) : !
 ! NOT FOUND!!!!
 
 Enter a cyclone's name for search (or Q for stop searching) : Sara
 FOUND
 Name: Sara
 month: Unused
 catagory: UN
 Wind speed: 0
 damage:  Unused
 death: -1
 
 Enter a cyclone's name for search (or Q for stop searching) : William
 FOUND
 Name: William
 month: Unused
 catagory: UN
 Wind speed: 0
 damage:  Unused
 death: -1
 
 Enter a cyclone's name for search (or Q for stop searching) : Q
 ___________________END SEARCH SECTION _____
 back to main
 
 Delete
 =======
 
 Enter a cyclone's name for delete (or Q for stop searching) : Sara
 DONE deleting Sara
 Enter a cyclone's name for delete (or Q for stop searching) : Alberto
 DONE deleting Alberto
 Enter a cyclone's name for delete (or Q for stop searching) : Q
 ___________________END DELETE SECTION_____
 ========       ==========       ===========================
 Wind             Name              Storm category at
 (Mph)                               peak intensity
 ========       ==========       ===========================
 80              Beryl              Category 1 hurricane
 105              Chris              Category 2 hurricane
 50              Debby              Tropical Storm
 35              Eleven              Tropical depression
 45              Ernesto              Tropical Storm
 140              Florence              Category 4 hurricane
 70              Gordon              Tropical Storm
 110              Helene              Category 2 hurricane
 75              Isaac              Category 1 hurricane
 50              Joyce              Tropical Storm
 60              Kirk              Tropical Storm
 90              Leslie              Category 1 hurricane
 155              Michael              Category 4 hurricane
 65              Nadine              Tropical Storm
 105              Oscar              Category 2 hurricane
 0              Patty              unused name
 0              Tony              unused name
 0              Valerie              unused name
 0              William              unused name
 ========       ==========       ===========================
 
 DEBUG - Destructor: Now deleting Beryl
 DEBUG - Destructor: Now deleting Chris
 DEBUG - Destructor: Now deleting Debby
 DEBUG - Destructor: Now deleting Eleven
 DEBUG - Destructor: Now deleting Ernesto
 DEBUG - Destructor: Now deleting Florence
 DEBUG - Destructor: Now deleting Gordon
 DEBUG - Destructor: Now deleting Helene
 DEBUG - Destructor: Now deleting Isaac
 DEBUG - Destructor: Now deleting Joyce
 DEBUG - Destructor: Now deleting Kirk
 DEBUG - Destructor: Now deleting Leslie
 DEBUG - Destructor: Now deleting Michael
 DEBUG - Destructor: Now deleting Nadine
 DEBUG - Destructor: Now deleting Oscar
 DEBUG - Destructor: Now deleting Patty
 DEBUG - Destructor: Now deleting Tony
 DEBUG - Destructor: Now deleting Valerie
 DEBUG - Destructor: Now deleting William
 DEBUG - Destructor: Now deleting the sentinel node
 Program ended with exit code: 0
 
 */

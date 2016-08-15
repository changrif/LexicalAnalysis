//  pa3.cpp
//  Created by Chandler Griffin on 4/11/16.


#ifndef pa3_hpp
#define pa3_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstddef>

using namespace std;

/*
 *  This class deals with initializing the variables dealing with traversing, replacing, and creating nodes.
 */
class node  {
public:
    string data;
    node* next;
};

/*
 *  This class deals with initializing the nodes in the Linked List and the functions that alter the data within it.
 */
class List  {
private:
    node* start;
    node* now;
    node* temp;
    
public:
    List();
    //This function tests how many nested loops exist
    int CheckDepth();
    
    //This function tests whether 'check' is a delimiter
    bool CheckDelimiter(string check);
    
    //This function returns whether "check" is currently in the list
    bool CheckExist(string check);
    
    //This function tests whether 'check' is a keyword
    bool CheckKeyword(string check);
    
    //This function tests whether 'space' is a character string with characters from 'a-z'
    bool CheckLetter(string space);
    
    //This function tests whether 'space' is a numerical value
    bool CheckNumber(string space);
    
    //This function tests whether 'space' is an operator
    bool CheckOperator(string check);
    
    //This function tests whether 'space' is all Uppercase
    bool CheckUpper(string space);
    
    //This function pops the information from the stack
    void Pop();
    
    //This function prints a list
    string PrintList();
    
    //This method inserts the 'space' at the top of the stack
    void Push(string space);
    
    //This method takes the main stack and separates it into smaller more specific lists
    void PushBack();
    
    //This function deletes a user-specified program from the list
    void RemoveCharacters(string line);
};

#endif /* pa3_hpp */

//
//  main.cpp
//  bmp4CppLibrary
//
//  Created by Nicolai on 1/21/2014.
//  Copyright (c) 2014 BMP4. All rights reserved.
//

#include <iostream>
#include "bmp4CppLibrary.h"
#include <list>

using namespace std;


void stlListTest();
void lambdaTest();

int main(int argc, const char * argv[])
{
    //BMP4 LIBRARY
    checkBmp4LibraryLoaded();
    
    //STD LIBRARY
    lambdaTest();
    
    //STL LIBRARY
    stlListTest();
    
    return 0;
}

void lambdaTest()
{
    //this simply does whatever is in the brackets
    [] {
        cout << "\nlambda function num1\n";
    } ();
    
    
    auto l = [] {
        cout << "\nlambda function num2\n";
    };
    
    l(); // prints lambda function num2
}


void stlListTest()
{
    //int list of 5 items all initialized to 10
    list <int> iList( 5,10 );
    
    //iterators, which can be used like pointers
    list <int>::const_iterator cb = iList.begin();
    auto ce = iList.end(); //auto determines variable type based on initialization
    
    //print list content
    cout << "\nList Content: ";
    while ( cb != ce){
        cout << *cb++ << " ";
    }
    cout << endl;
    
    
}




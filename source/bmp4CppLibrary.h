//-------------------------------------------------------------------------------------------------------
// Filename     : bmp4CppLibrary.h
// Created by   : BMP4 (Vincent Berthiaume)
// Description  : General c++ library
//
// � 2014, Vincent Berthiaume, All Rights Reserved
//-------------------------------------------------------------------------------------------------------	
#include <iostream>
#include <vector>
#include <string>

using namespace std;


//----------------------------- PROTOTYPES ------------------------------
//class List
//{		
//};


//simple test function to check that library is correctly loaded
void checkBmp4LibraryLoaded();


//----------------------------- IMPLEMENTATION ------------------------------

//prints the content of a vector. because it is a template the implementation must be done here
template <class T> void printVectorContent(std::string p_v_name, std::vector<T> p_v)
{
    cout << "content of vector " << p_v_name << " is: ";
	for (typename vector<T>::iterator it = p_v.begin(); it != p_v.end(); ++it)
		{ cout << ' ' << *it; }
	cout << endl;
}

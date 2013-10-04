// File: Library.h
// Authors: Alex Bretow, Nick Mahnke, Jonah Cohen
// Contents: This file contains the implementation of a virtual class called Library

#include <iostream>
#include "Library.h"
#define DEBUG 0
#define debug if (DEBUG) cout

using namespace std;

// The default constructor creates a new library object 
Library::Library () 
{
  Library L;
}

// This constructor will create a new library object identical to the passed library object
Library::Library (const Library & S) 
{
  Library L = S; // will need to do deep copy
}

// This destructor currently does nothing
Library::~Library () {}

// This assignment operator will copy one object to another of the same type
Library & Library::operator = (const Library & S) 
{
  Library L = S; // will need to do deep copy
}

// The IsA function will return the appropriate LibType value
Library::LibType IsA () const
{
  return 0;
}

// The input operator will call the ReadIn function for the passed library object
istream & operator >> (istream & ins, const Library & S)
{
  S.ReadIn(ins);
}
 
// The ouput operator will call the WriteOut function for the passed library object
ostream & operator << (ostream & outs, const Library & S)
{
  S.WriteOut (outs);
}

//
void Checkout () {}

//
void Return () {}

//
void ReadIn (istream & input) {}

//
void WriteOut (ostream & output) {}

#ifndef MEMBER_H
#define MEMBER_H

// File: Member.h
// Authors: Alex Bretow, Nick Mahnke, Jonah Cohen
// Contents: This file contains the description of a class called Member

#include <iostream>
#include <vector>
#include "Library.h"

using namespace std;

class Asset;

class Member : public Library
{
 public:
  // The default constructor creates a new member object 
  Member ();

  // This constructor will create a new member object identical to the passed member object
  Member (const Member & S);

  // This destructor currently does nothing
  ~Member ();

  // This assignment operator will copy one object to another of the same type
  Member & operator = (const Member & S);

  // The IsA function will return the appropriate LibType value
  LibType IsA () const;

  //
  void Checkout ();

  //
  void Return ();

  //
  void ReadIn (istream & input);

  //
  void WriteOut (ostream & output);

 private:
  vector <Asset *> CheckedOut;
  string Address, City, State, Zip;
  string PhoneNumber;
};

#endif

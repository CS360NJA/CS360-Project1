// File: Member.cpp
// Authors: Alex Bretow, Nick Mahnke, Jonah Cohen
// Contents: This file contains the description of a class called Member

#include <iostream>
#include <vector>
#include "Member.h"
#include "Library.h"

using namespace std;

class Asset;

// The default constructor creates a new member object 
Member ()
{
  LibType = 1;
  CheckedOut.clear();
  Name = Address = City = State = Zip = PhoneNumber = "";
  ID = 2069783487263048976; // random very large number, so as not to overwrite early entries
}

// This constructor will create a new member object identical to the passed member object
Member (const Member & S) 
{
  LibType = 1;
  for (int i = 0; i < CheckedOut.size(); i++)
    CheckedOut.push_back(S.CheckedOut[*i]);
  Name = A.Name;
  Address = S.Address;
  City = S.City;
  State = S.State;
  Zip = S.Zip;
  PhoneNumber = S.PhoneNumber;
  ID = S.ID;
}

// This destructor currently does nothing
~Member () {}

// This assignment operator will copy one object to another of the same type
Member & operator = (const Member & S)
{
  LibType = 1;
  for (int i = 0; i < CheckedOut.size(); i++)
    CheckedOut.push_back(S.CheckedOut[*i]);
  Name = A.Name;
  Address = S.Address;
  City = S.City;
  State = S.State;
  Zip = S.Zip;
  PhoneNumber = S.PhoneNumber;
  ID = S.ID;
}
// The IsA function will return the appropriate LibType value
LibType IsA () const
{
  return 1;
}

//
void Checkout ()
{
  CheckedOut.push_back(); // needs to be passed
}

//
void Return () {}

//
void ReadIn (istream & input) {}

//
void WriteOut (ostream & output);

private:
vector <Asset *> CheckedOut;
string Address, City, State, Zip;
string PhoneNumber;
};

#endif

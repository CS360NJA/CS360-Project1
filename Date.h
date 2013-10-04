#ifndef DATE_H
#define DATE_H

// File: Date.h
// Authors: Alex Bretow, Nick Mahnke, Jonah Cohen
// Contents: This file contains the description of a class called Date

#include <iostream>
#include "Library.h"

using namespace std;

class Date : public Asset
{
 public:
  // The default constructor creates a new date object 
  Date ();
  // This constructor will create a new date object identical to the passed date object
  Date (const Date & D);
  // This destructor currently does nothing
  ~Date ();
  //
  void SetMonth (int inMonth);
  //
  void SetDay (int inDay);
  //
  void SetYear (int inYear);
  //
  int GetMonth () const;
  //
  int GetDay () const;
  //
  int GetYear () const;
  //
  int operator - (const Date & D) const;
  //
  bool operator < (const Date & D) const;
  //
  bool operator > (const Date & D) const;
  //
  friend istream & operator >> (istream & ins, Date & D);
  //
  friend ostream & operator << (ostream & outs, const Date & D);
 private:
  int month;
  int day;
  int year;
};

#endif

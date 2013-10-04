::::::::::
Periodical.h
::::::::::
#ifndef PERIODICAL_H
#define PERIODICAL_H

// File: Periodical.h
// Authors: Alex Bretow, Nick Mahnke, Jonah Cohen
// Contents: This file contains the description of a class called Periodical

#include <iostream>
#include <vector>
#include "Asset.h"
#include "Date.h"
#include "Library.h"

using namespace std;

class Periodical : public Asset
{
 public:
  // Enumerated type for Periodical Classification
  enum PeriodicalType {FICTION, NONFICTION};
  // The default constructor creates a new periodical object 
  Periodical ();
  // This constructor will create a new periodical object identical to the passed periodical object
  Periodical (const Periodical & S);
  // This destructor currently does nothing
  ~Periodical ();
  // This assignment operator will copy one object to another of the same type
  Periodical & operator = (const Periodical & S);
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
  struct Issue
  {
    int Volume;
    int Number;
    Date PubDate;
    Date CheckedOut;
    Member * CheckedOutBy;
    int CopyNumber;
  };
  string ISSN;
  vector <Issue> Issues;
};

#endif

#ifndef ASSET_H
#define ASSET_H

// File: Asset.h
// Authors: Alex Bretow, Nick Mahnke, Jonah Cohen
// Contents: This file contains the description of a class called Asset

#include <iostream>
#include "Library.h"

using namespace std;

class Member;

class Asset : public Library
{
 public:
  // Enumerated type for Asset Classification
  enum AssetType {SHORT, LITERARY, MYSTERY, SCIFI, SELFHELP, BIOGRAPHY, COOKING, SPORTS};
  // The default constructor creates a new asset object 
  Asset ();
  // This constructor will create a new asset object identical to the passed asset object
  Asset (const Asset & S);
  // This destructor currently does nothing
  ~Asset ();
  // This assignment operator will copy one object to another of the same type
  Asset & operator = (const Asset & S);
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
 protected:
  AssetType Type;
 private:
};

#endif

#ifndef BOOK_H
#define BOOK_H

// File: Book.h
// Authors: Alex Bretow, Nick Mahnke, Jonah Cohen
// Contents: This file contains the description of a class called Book

#include <iostream>
#include "Asset.h"
#include "Date.h"
#include "Library.h"

using namespace std;

class Book : public Asset
{
 public:
  // Enumerated type for Book Classification
  enum BookType {FICTION, NONFICTION};
  // The default constructor creates a new book object 
  Book ();
  // This constructor will create a new book object identical to the passed book object
  Book (const Book & S);
  // This destructor currently does nothing
  ~Book ();
  // This assignment operator will copy one object to another of the same type
  Book & operator = (const Book & S);
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
  string Author;
  string ISBN;
  BookType Type;
  int CopyNumber;
  Date CheckedOut;
  Member * CheckedOutBy;
};

#endif

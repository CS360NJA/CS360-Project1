// File: Book.cpp
// Authors: Alex Bretow, Nick Mahnke, Jonah Cohen 
// Contents: This file contains the implementation of the Book class. 

#include <iostream>
#include "Book.h"

using namespace std;

Book :: Book()
{
  LibType = BOOK;
  Author = ISBN = "";
  CopyNumber = -1;
}

Book :: Book (const Book & S)
{
  LibType = BOOK;
  Author = S.Author;
  ISBN = S.ISBN;
  Type = S.Type;
  CopyNumber = S.CopyNumber;
  CheckedOut = S.CheckedOut;
  CheckedOutBy = new Member (*CheckedOutBy);
}

Book :: ~Book()
{
  // This descructor currently does nothing.
}

Book :: operator = (const Book & S)
{
  LibType = BOOK;
  Author = S.Author;
  ISBN = S.ISBN;
  Type = S.Type;
  CopyNumber = S.CopyNumber;
  CheckedOut = S.CheckedOut;			
  CheckedOutBy = new Member (*CheckedOutBy);
}

LibType Book :: IsA () const
{
  return BOOK;
}

void Book :: Checkout ()
{
}

void Book :: Return ()
{
}

void Book :: ReadIn (istream & input)
{
}

void Book :: WriteOut (ostream & output)
{
}

 

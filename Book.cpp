// File: Book.cpp
// Authors: Alex Bretow, Nick Mahnke, Jonah Cohen 
// Contents: This file contains the implementation of the Book class. 

#include <iostream>
#include "Book.h"

using namespace std;

Book :: Book()
{
  Author = "";
  ISBN = "";
  CopyNumber = -1;
}

Book :: Book (const Book & S)
{
  Author = S.Author;
  ISBN = S.ISBN;
  Type = S.Type;
  CopyNumber = S.CopyNumber;
  CheckedOut = S.CheckedOut;
  // Deep Copy Member?
}

Book :: ~Book()
{
  // Empty Destructor
}

Book :: operator = (const Book & S)
{
  Author = S.Author;
  ISBN = S.ISBN;
  Type = S.Type;
  CopyNumber = S.CopyNumber;
  CheckedOut = S.CheckedOut;			
  // Deep Copy Member?
}

LibType Book :: IsA () const
{
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

 

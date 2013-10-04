// File: Book.cpp
// Authors: Alex Bretow, Nick Mahnke, Jonah Cohen 
// Contents: This file contains the implementation of the Book class. 

#include <iostream>
#include "Book.h"

using namespace std;

Book :: Book()
{
  string Author = "";
  string ISBN = "";
  BookType Type;
  int CopyNumber = -1;
  Date CheckedOut;
  Member * CheckedOutBy;
}

Book :: Book (const Book & S)
{
  
}

Book :: ~Book()
{
}

Book :: operator = (const Book & S)
{
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

 

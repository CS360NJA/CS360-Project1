// File: Date.cpp
// Authors: Alex Bretow, Nick Mahnke, Jonah Cohen
// Contents: This file contents the description of a class called Date

#include <iostream>
#include <vector>
#include "Date.h"

using namespace std;

Date::Date ()
{
  month = 0;
  day = 0;
  year = 0;
}

Date::Date (const Date & D)
{
  month = D.month;
  day = D.day;
  year = D.year;
}

// Empty Destructor
Date::~Date ();
{}

void Date :: SetMonth (int inMonth)
{
  month = inMonth;
}

void Date :: SetDay (int inDay)
{
  day = inDay;
}

void Date :: SetYear (int inYear)
{
  year = inYear;
}

int Date :: GetMonth () const
{
  return month;
}

int Date :: GetDay () const
{
  return day;
}

int Date :: GetYear () const
{
  return year;
}

int Date :: operator - (const Date & D) const
{
  // Not sure how well this will work, just an idea.
  int yrD = year - D.year * 365;
  int moD = month - D.month * 30;
  int daD = day - D.day;
  return yrD + moD - daD;
}

int Date :: operator < (const Date & D) const
{
  if (year < D.year)
    return true;
  if (month < D.month)
    return true;
  if (day < D.day)
    return true;
  return false;
}

int Date :: operator > (const Date & D) const
{
 if (year > D.year)
    return true;
  if (month > D.month)
    return true;
  if (day > D.day)
    return true;
  return false;
}

istream & operator >>  (istream & ins, Date & D)
{
  // Need to know format of input file before implementing.
}

ostream & operator << (ostream & outs, const Date & D)
{
  outs << month << "/" << day << "/" << year << "\n"
}

 

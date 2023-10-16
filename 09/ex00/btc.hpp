#ifndef BTC_HPP
#define BTC_HPP

#include <iostream>
#include <exception>
#include <map>
#include <fstream>

class InputException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Input Error: File doesnt open";
  }
};

#endif
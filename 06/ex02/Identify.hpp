# ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include <iostream>

class Base
{
    public:
        virtual ~Base();
};

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

Base * generate(void);  //generates AB or C randomly
void identify(Base* p); //prints out actual type of object
void identify(Base& p); //same

#endif
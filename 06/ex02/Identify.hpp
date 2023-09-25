# ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
    public:
        virtual ~Base();
};

class A: public Base
{
//    ~A();
};

class B: public Base
{
 //   ~B();
};

class C: public Base
{
};

Base * generate(void);  //generates AB or C randomly
void identify(Base* p); //prints out actual type of object
void identify(Base& p); //same

// enum RAND{A, B, C};

#endif
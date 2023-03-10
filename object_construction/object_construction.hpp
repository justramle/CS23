#ifndef OBJECTCONSTRUCTION_HPP_
#define OBJECTCONSTRUCTION_HPP_

#include <iostream>

class Object{
public:
		Object(); //default ctor
		Object operator=(const Object&); //Assignment
		object(const Object&); //copy ctor
		~Object(); //dtor
};

#endif

#include "object_construction.hpp"
#include <iostream>

Object::Object(){
		std::cout << "Called default constructor" << std::endl;
}

Object Object::operator=(const Object& rhs){
		Object temp;
		std::cout << "Called assignment constructor" << std::endl;
		return temp;
}

Object::Object(const Object& cp){
		std:cout << "Called copy constructor" << std::endl;
}

Object::~Object(){
		std::cout << "Called destructor" << std::endl;
}


//Tram Le
//CS 23001 
//Header file for Bigint

#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>

const int CAPACITY = 200;

class bigint {
public:

    //*************MILESTONE 1**************
  
    //default constructor to initialize to zero
    void initializeZero();
    bigint(); 
   
    //contructor initialize bigint to int value
    bigint(int);
    //constructor initialize bigint to a const char[]
    bigint(const char[]);
    //create debug method
    void debugPrint(std::ostream&) const;
      
    //Overload == to compare 2 bigint
    bool operator ==(const bigint&) const;


    //Overload output as a friend func
    void output(std::ostream&) const;
    friend std::ostream& operator<<(std::ostream&, const bigint&);


    //***************MILESTONE 2*****************

    //Overload addition operator to adds two bigint
    bigint operator +(const bigint&) const;
    //Overload subcript to return 10^i position
    int operator [](const int) const;
    
    //Overload input operator
    friend std::istream& operator>>(std::istream&, bigint&);    


    
    //Overload multiply operator
    bigint timeDigit(int) const;


    //***************MILESTONE 3*****************

    //Method to multiply bigint to single digit
    bigint timesDigit(int) const;

    //Method to multiply bigint by 10^n
    bigint times10(int) const;

    //Overload operator* to multiply two bigint
    bigint operator*(const bigint&) const;

    
private:
    int element[CAPACITY];

};

#endif  //BIGINT_HPP


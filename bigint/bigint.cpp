//Tram Le
//CS23001
//Implement for bigint.hpp

#include "bigint.hpp"
#include <iostream>

//initialize bigint to zero
void bigint::initializeZero() {
    for (int i = 0; i < CAPACITY; ++i) {
        element[i] = 0;
    }
}
//default constructor
bigint::bigint() {
    initializeZero();
} 

 
//initialize bigint to int.
bigint::bigint(int num) {
    initializeZero();

    for (int i = 0; i < CAPACITY; ++i) {
        element[i] = num % 10;
        num = num / 10;
    }
}

//initialize bigint to a const char[]
//iterate over the leading 0
bigint::bigint(const char x[]) {
    initializeZero();

    int size = 0;
    int j = 0;
    
    do {
        ++size;
    } while (x[size] != '\0');

    //puts character array into bigint
    for (int i = size - 1; i >= 0; --i, ++j) {
        element[j] = x[i] - '0';
    }
}


//prints out every element of your bigint array starting 
//from the highend of the bigint to zero
void bigint::debugPrint(std::ostream& out) const {

    out << "|";
    for (int i = CAPACITY - 1; i >= 0; --i) {
        out << element[i] << " " << "|";
    }
     
}


//Compare all index value, true if it equal, false otherwise
bool bigint::operator ==(const bigint& rhs) const{
    for (int i = 0; i < CAPACITY; ++i) {
        if (element[i] != rhs.element[i]) {
            return false;
        }
     }
    return true;
}


//Overload add operator to adds two bigint
bigint bigint::operator +(const bigint& rhs) const {
    bigint result;
    int remainder = 0;
    int temp = 0;
    
    for (int i = 0; i < CAPACITY; ++i) {
        remainder = element[i] + rhs.element[i] + remainder;
        temp = remainder % 10;
        remainder = remainder / 10;
        result.element[i] = temp;
    }

    return result;
}

//Overload the subscript to return at 10^i position
int bigint::operator [](const int tenPlace) const {
    return element[tenPlace];
}
 

//Multiply bigint to single digit
bigint bigint::timesDigit(int x) const {
    bigint result;
    int remainder = 0;
    int carry = 0;
    for (int i = 0; i < CAPACITY; ++i) {
        remainder = (element[i] * x) + carry;
        carry = remainder / 10;
        result.element[i] = remainder % 10;
    }
    return result;
}
 
//Multiply bigint by 10^n
bigint bigint::times10(int x) const {
    bigint result;

    for (int i = CAPACITY - 1; i >= 0; --i) {
        result.element[i] = element[i - x];
    }

    for (int i = 0; i < x; ++i) {
        result.element[i] = 0;
    }
    return result;
}

//Multiply two bigint
//A * B
//product = product + ( (A * B[i]) * 10i )
bigint bigint::operator*(const bigint& rhs) const {
    bigint product;
    bigint temp;

    for (int i = CAPACITY - 1; i >= 0; --i) {
        temp = timesDigit(rhs.element[i]);
       product = product + temp.times10(i);
     
    }

    return product;
}


//Overload output extraction operator
//take stream as input and write bigint to that stream
//80 digits per line
void bigint::output(std::ostream& out) const{
    int newSize = CAPACITY;
    int newOut = 0;

    do{
        --newSize;
    } while (newSize > 0 && element[newSize] == 0);

    do{
        if (newOut % 80) {
            out << element[newSize];
        }
        else {
            out << std::endl << element[newSize] ;
        }
        --newSize; ++newOut;
    } while (newSize >= 0);
}

std::ostream& operator<<(std::ostream& out, const bigint& rhs) {
    rhs.output(out);
    return out;
} 


//Overload input operator
std::istream& operator>>(std::istream& in, bigint& rhs){
    char nextChar, temp[CAPACITY];
    int j = 0;

    in >> nextChar;
    while (!in.eof() && nextChar != ';' ) {
        temp[j] = nextChar;
        in >> nextChar;
        ++j;
    }

    temp[j] = 0;
    rhs = bigint(temp);
    return in;
}




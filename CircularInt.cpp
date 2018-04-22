#include <stdio.h>
#include "CircularInt.hpp"
using namespace std;
         
        CircularInt CircularInt::operator + (CircularInt const &obj) {return obj;}
        CircularInt CircularInt::operator - (CircularInt const &obj) {return obj;}
        CircularInt CircularInt::operator / (CircularInt const &obj) {return obj;}
        CircularInt CircularInt::operator * (CircularInt const &obj) {return obj;}
        CircularInt CircularInt::operator % (CircularInt const &obj) {return obj;}
        CircularInt CircularInt::operator ^ (CircularInt const &obj) {return obj;}
        CircularInt CircularInt::operator + (int a) {return *this;}
        CircularInt CircularInt::operator - (int a) {return *this;}
        CircularInt CircularInt::operator / (int a) {return *this;}
        CircularInt CircularInt::operator * (int a) {return *this;}
        CircularInt CircularInt::operator % (int a) {return *this;}
        CircularInt CircularInt::operator ^ (int a) {return *this;}
        CircularInt CircularInt::operator++(){return *this;}
        CircularInt CircularInt::operator -- () {return *this;}
        CircularInt CircularInt::operator-()  {return *this;}
        CircularInt CircularInt::operator ++ (int) {return *this;}
        CircularInt CircularInt::operator -- (int) {return *this;}
        CircularInt CircularInt::operator += (int a) {return *this;}
        CircularInt CircularInt::operator -= (int a) {return *this;}
        CircularInt CircularInt::operator *= (int a) {return *this;}




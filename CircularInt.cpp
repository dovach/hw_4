#include <stdio.h>
#include<iostream>
#include "CircularInt.hpp"
using namespace std;
// C++ program to do modular division

// C function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int *x, int *y);
 
// Function to find modulo inverse of b. It returns
// -1 when inverse doesn't
int modInverse(int b, int m)
{
    int x, y; // used in extended GCD algorithm
    int g = gcdExtended(b, m, &x, &y);
 
    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;
 
    // m is added to handle negative x
    return (x%m + m) % m;
}
 
// Function to compute a/b under modlo m
int modDivide(int a, int b, int m)
{
    a = a % m;
    int inv = modInverse(b, m);
    if (inv == -1)
        throw new std::string("Division not defined");
    else
       return inv;
}
 
// C function for extended Euclidean Algorithm (used to
// find modular inverse.
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
         
        CircularInt CircularInt::operator + (CircularInt const &obj) {
                int a=this->min();
                int b=this->max();
                int c=this->CurVal()+obj.CurVal();
                //cout << CurVal() << "+" <<obj.CurVal() <<"=" << endl; 
                CircularInt ans = CircularInt(a,b,c);
                return ans;
        }
        CircularInt CircularInt::operator - (CircularInt const &obj) {
                int a=this->min();
                int b=this->max();
                int c=this->CurVal()-obj.CurVal();
                return  CircularInt(a,b,c);;
        }
        CircularInt CircularInt::operator / (CircularInt const &obj) {
                if(modDivide(_CurVal,obj._CurVal,_max)!=-1){
                        int ans=modDivide(_CurVal,obj._CurVal,_max);
                        return CircularInt(_min,_max,ans);
                }else{
                        throw new std::string("Division not defined");
                        return CircularInt(_min,_max,_CurVal);
                }

                
        }
        CircularInt CircularInt::operator * (CircularInt const &obj) {
               int a=this->min();
                int b=this->max();
                int c=this->CurVal()*obj.CurVal();
                return  CircularInt(a,b,c);
                
        }
        CircularInt CircularInt::operator % (CircularInt const &obj) {
                int a=this->min();
                int b=this->max();
                int c=this->CurVal()%obj.CurVal();
                return  CircularInt(a,b,c);
        }
        CircularInt CircularInt::operator ^ (CircularInt const &obj) {
                int a=this->min();
                int b=this->max();
                int c=this->CurVal()^obj.CurVal();
                return  CircularInt(a,b,c);
                
        }
        CircularInt CircularInt::operator + (int a) {
                int x=this->min();
                int b=this->max();
                int c=this->CurVal()+a;
                return  CircularInt(a,b,c);
                
        }
        CircularInt CircularInt::operator - (int a) {
                int x=this->min();
                int b=this->max();
                int c=this->CurVal()-a;
                return  CircularInt(x,b,c);
                
        }
        CircularInt CircularInt::operator / (int a) {
                if(modDivide(_CurVal,a,_max)!=-1){
                        int ans=modDivide(_CurVal,a,_max);
                        return CircularInt(_min,_max,ans);
                }else{
                        throw new std::string("Division not defined");
                        return CircularInt(_min,_max,_CurVal);
                }
        }
        CircularInt CircularInt::operator * (int a) {
                int x=this->min();
                int b=this->max();
                int c=this->CurVal()*a;
                return  CircularInt(x,b,c);
                
        }
        CircularInt CircularInt::operator % (int a) {
                int x=this->min();
                int b=this->max();
                int c=this->CurVal()%a;
                return  CircularInt(x,b,c);
        }
        CircularInt CircularInt::operator ^ (int a) {
                int x=this->min();
                int b=this->max();
                int c=this->CurVal()^a;
                return  CircularInt(x,b,c);
                
        }
        CircularInt& CircularInt::operator++(){
                _CurVal++;
                normalize();
                return *this;
        }
        CircularInt& CircularInt::operator -- () {
                 _CurVal--;
                normalize();
                return *this;
        }
        CircularInt CircularInt::operator-()  {
                CircularInt ans = CircularInt(_min,_max,(_max-_CurVal));
                return ans;
        }
        CircularInt CircularInt::operator ++ (int) {
                CircularInt ans = CircularInt(_min,_max,_CurVal);
                _CurVal++;
                normalize();
                return ans;
        }
        CircularInt CircularInt::operator -- (int) {
                CircularInt ans = CircularInt(_min,_max,_CurVal);
                _CurVal--;
                normalize();
                return ans;
        }
        CircularInt& CircularInt::operator += (int a) {
                _CurVal+=a;
                normalize();
                return *this;
        }
        CircularInt& CircularInt::operator -= (int a) {
                _CurVal-=a;
                normalize();
                return *this;
        }
        CircularInt& CircularInt::operator *= (int a) {
                _CurVal*=a;
                normalize();
                return *this;}
        CircularInt& CircularInt::operator /= (int a) {
                if(modDivide(_CurVal,a,_max)!=-1){
                _CurVal=modDivide(_CurVal,a,_max);
                normalize();
                }else{
                throw new std::string("Division not defined");        
                }
                return *this; 
        }
        CircularInt& CircularInt::operator += (CircularInt const &obj) {
                _CurVal=_CurVal+obj.CurVal();
                normalize();
                return *this;
        }
        CircularInt& CircularInt::operator -= (CircularInt const &obj) {
                 _CurVal=_CurVal-obj.CurVal();
                normalize();
                return *this;
        }
        CircularInt& CircularInt::operator *= (CircularInt const &obj) {
                _CurVal=_CurVal*obj.CurVal();
                normalize();
                return *this;}
        CircularInt& CircularInt::operator /= (CircularInt const &obj) {
                if(modDivide(_CurVal,obj.CurVal(),_max)!=-1){
                _CurVal=modDivide(_CurVal,obj.CurVal(),_max);
                normalize();
                }else{
                throw new std::string("Division not defined");        
                }
                return *this; 
        }
        bool  CircularInt::operator == (int a) {
                return _CurVal==a;
        }
        bool  CircularInt::operator != (int a) {
                return _CurVal!=a;
        }
        bool  CircularInt::operator >= (int a) {
                return _CurVal>=a;
        }
        bool  CircularInt::operator <= (int a) {
                return _CurVal<=a;
        }
        bool  CircularInt::operator < (int a) {
                return _CurVal<a;
        }
        bool  CircularInt::operator > (int a) {
                return _CurVal>a;
        }
        bool  CircularInt::operator == (CircularInt const &obj) {
                return _CurVal==obj.CurVal();
        }
        bool  CircularInt::operator != (CircularInt const &obj) {
                return _CurVal!=obj.CurVal();
        }
        bool  CircularInt::operator >= (CircularInt const &obj) {
                return _CurVal>=obj.CurVal();
        }
        bool  CircularInt::operator <= (CircularInt const &obj) {
                return _CurVal<=obj.CurVal();
        }
        bool  CircularInt::operator < (CircularInt const &obj) {
                return _CurVal<obj.CurVal();
        }
        bool  CircularInt::operator > (CircularInt const &obj) {
                return _CurVal>obj.CurVal();
        }
        
        inline const CircularInt operator/(int a, const CircularInt& c2) {
                if(modDivide(a,c2.CurVal(),c2.max())!=-1){
                        int ans=modDivide(a,c2.CurVal(),c2.max());
                        return CircularInt(c2.min(),c2.max(),ans);
                }else{
                        throw new const string("Division not defined");
                        return CircularInt(c2.min(),c2.max(),c2.CurVal());
                }
        }




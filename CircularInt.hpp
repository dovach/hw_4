#pragma once

#include <iostream>
using namespace std;

class CircularInt {
        private:
    int _min;
    int _max;
    int _CurVal;


    public:
        //Ctr:
        CircularInt (int a ,int b){  
            _min=a;
            _max=b;
            _CurVal = _min;
        }
        
        CircularInt (int a ,int b,int c){  
            _min=a;
            _max=b;
            _CurVal = c;
            normalize();
        }
        void normalize(){
            while(_CurVal<_min){
                _CurVal+=_max;
            }
            while(_CurVal>_max){
                _CurVal-=_max;
            }
        }
        //getters:
	    int CurVal() const {
		return _CurVal;
	    }
	    int min() const {
		return _min;
	    }
	    int max() const {
		return _max;
	    }


        CircularInt operator + (CircularInt const &obj) ;
        CircularInt operator - (CircularInt const &obj) ;
        CircularInt operator / (CircularInt const &obj) ;
        CircularInt operator * (CircularInt const &obj) ;
        CircularInt operator % (CircularInt const &obj) ;
        CircularInt operator ^ (CircularInt const &obj) ;
        CircularInt operator + (int a) ;
        CircularInt operator - (int a) ;
        CircularInt operator / (int a) ;
        CircularInt operator * (int a) ;
        CircularInt operator % (int a) ;
        CircularInt operator ^ (int a) ;
        CircularInt& operator ++() ;
        CircularInt& operator --() ;
        CircularInt operator   -() ;
        CircularInt operator ++ (int) ;
        CircularInt operator -- (int) ;
        CircularInt& operator += (int a) ;
        CircularInt& operator -= (int a) ;
        CircularInt& operator *= (int a) ;
        CircularInt& operator /= (int a) ;
        CircularInt& operator += (CircularInt const &obj) ;
        CircularInt& operator -= (CircularInt const &obj) ;
        CircularInt& operator *= (CircularInt const &obj) ;
        CircularInt& operator /= (CircularInt const &obj) ;
        bool operator == (int a) ;
        bool operator != (int a) ;
        bool operator >= (int a) ;
        bool operator <= (int a) ;
        bool operator <  (int a)  ;
        bool operator >  (int a)  ;
        bool operator == (CircularInt const &obj) ;
        bool operator != (CircularInt const &obj) ;
        bool operator >= (CircularInt const &obj) ;
        bool operator <= (CircularInt const &obj) ;
        bool operator <  (CircularInt const &obj) ;
        bool operator >  (CircularInt const &obj) ;
        ostream& operator<< (ostream& os) ;
        friend istream& operator>> (istream& is, CircularInt& c) ; 

};

    inline ostream& operator<< (ostream& os, const CircularInt& c) {
    os << c.CurVal() ;
    return os;
    }
    inline istream& operator>> (istream& is, CircularInt& c)  
    {  
    is>> c._min>> c._max>> c._CurVal;  
    return is;  
    }  
    inline const CircularInt operator+(int a, const CircularInt& c2) {
    return CircularInt(c2.min(),c2.max(),a+c2.CurVal());
    }
    inline const CircularInt operator-(int a, const CircularInt& c2) {
    return CircularInt(c2.min(),c2.max(),a+(c2.max()-c2.CurVal()));
    }
    inline const CircularInt operator*(int a, const CircularInt& c2) {
    return CircularInt(c2.min(),c2.max(),a*c2.CurVal());
    }
    inline const CircularInt operator/(int a, const CircularInt& c2) ;

//+=	-=	/=	%=	^=	&=
//|=	*=	

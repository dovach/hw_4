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
            this->_CurVal = _min;
        }
        
        CircularInt (int a ,int b,int c){  
            _min=a;
            _max=b;
            this->_CurVal = ((c-1)%b)+1;
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
        CircularInt operator ++();
        CircularInt operator --() ;
        CircularInt operator -() ;
        CircularInt operator ++ (int) ;
        CircularInt operator -- (int) ;
        CircularInt operator += (int a) ;
        CircularInt operator -= (int a) ;
        CircularInt operator *= (int a) ;
        ostream& operator<< (ostream& os) ;


};
inline ostream& operator<< (ostream& os, const CircularInt& c) {

    os << c.CurVal() ;
    return os;
}
inline const CircularInt operator+(int a, const CircularInt& c2) {
    return CircularInt(c2.min(),c2.max(),c2.CurVal()+a);
}
inline const CircularInt operator-(int a, const CircularInt& c2) {
    return CircularInt(c2.min(),c2.max(),c2.CurVal()-a);
}
//<	>	<=	>=	++	--
//<<	>>	==	!=
//+=	-=	/=	%=	^=	&=
//|=	*=	

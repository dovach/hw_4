#pragma once

#include <iostream>
using namespace std;

public class CircularInt {
    public:
        CircularInt (int a ,int b);    
        CircularInt operator + (CircularInt const &obj) ;
        CircularInt operator - (CircularInt onst &obj) ;
        CircularInt operator / (CircularInt onst &obj) ;
        CircularInt operator * (CircularInt onst &obj) ;
        CircularInt operator % (CircularInt onst &obj) ;
        CircularInt operator ^ (CircularInt onst &obj) ;
        CircularInt operator++();
        CircularInt operator -- () ;
        CircularInt operator ++ (int) ;
        CircularInt operator -- (int) ;
        ostream& operator<< (ostream& os, CircularInt s) ;

    private:
    int min;
    int max;
    int CurVal;


};
//<	>	<=	>=	++	--
//<<	>>	==	!=
//+=	-=	/=	%=	^=	&=
//|=	*=	

#include <iostream>
using namespace std;

class CircularInt{
    private:
        int start, end, number, range;
        
        CircularInt(const CircularInt& clone);
public:
CircularInt(int a, int b);
        int getNumber();
CircularInt& operator -();
//the normal operators between Object + , - , / , * 
CircularInt& operator +( CircularInt& a);
CircularInt& operator *( CircularInt& a);
CircularInt& operator -( CircularInt& a);
CircularInt& operator /( CircularInt& a);
//the opertors between Object to int
CircularInt& operator /(int num);
CircularInt& operator /=(int num);
CircularInt& operator +(int num);
CircularInt& operator +=(int num);
CircularInt& operator -(int num);
CircularInt& operator -=(int num);
CircularInt& operator *(int num);
CircularInt& operator *=(int num);
CircularInt& operator =(int num);
friend ostream& operator <<(ostream& os,const CircularInt& a);
friend CircularInt operator -(const int num ,CircularInt& a);
CircularInt& operator++(int);
CircularInt& operator--(int);


        
        
        
};
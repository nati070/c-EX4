#include <iostream>
using namespace std;

class CircularInt{
    private:
        int x , y;        
    CircularInt(const CircularInt& clone);
    public:
    CircularInt(int a, int b);
  
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
    friend ostream& operator <<(ostream& os, CircularInt& a);
    friend CircularInt operator -(const int num ,CircularInt& a);
    CircularInt& operator++(int);
    CircularInt& operator--(int);      
};
#include <iostream>
using namespace std;

class CircularInt{
    private:
        int x , y;        
    CircularInt(const CircularInt& clone);
    public:
    CircularInt(int a, int b);
    // negetive and positive 
    CircularInt& operator -();
    CircularInt& operator +();
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
    friend CircularInt operator -(const int num ,CircularInt& a);
    
    // add one or minus one
    CircularInt& operator++(int);
    CircularInt& operator ++();
    CircularInt& operator--(int);
    CircularInt&  operator --();      

    // boolean operator
    bool operator ==(CircularInt const&  b);
    bool operator !=(CircularInt const&  b);

    //input anf output operator
    friend ostream& operator <<(ostream& os, CircularInt& a);
    friend istream& operator >> (istream& is, CircularInt& a);
    friend ostream& operator <<=(ostream& os, CircularInt& a);
};
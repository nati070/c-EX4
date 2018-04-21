#include <iostream>
using namespace std;

class CircularInt{
    private:
        int start, end, number, range;
        
        CircularInt(const CircularInt& clone);
        
        /* make this->number in the range */
        void normalize();
        
    public:
        CircularInt(const int x, const int y);
        
        int getNumber();
        CircularInt& operator= (int num);
        CircularInt operator+ (int num) const;
        CircularInt operator- (int num) const;
        CircularInt operator* (int num) const;
        CircularInt operator/ (int num) const;
        CircularInt& operator+= (const int num);
        CircularInt& operator-= (const int num);
        CircularInt& operator*= (const int num);
        CircularInt& operator/= (const int num);
        CircularInt& operator -( CircularInt a);
        CircularInt& operator++ (); //prefix ++ -> ++(a)
        const CircularInt operator++ (int); //postfix ++ -> (a)++ 
        const CircularInt operator- () ;
        friend ostream& operator<< (ostream& os, const CircularInt& ci);
        //friend istream& operator>> (istream& is, Complex& c);
        
        
};
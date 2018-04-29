#include <iostream>
using namespace std;

class CircularInt{
    private:
        int x , y;        
    
    
//the normal operators between Object + , - , / , * 
     friend CircularInt  operator +(CircularInt& a ,CircularInt& b);
//     CircularInt& operator *( CircularInt& a);
//     CircularInt& operator -( CircularInt& a);
//     CircularInt& operator /( CircularInt& a);
    
//     //the opertors between Object to int
   
    friend CircularInt operator -(CircularInt& a ,CircularInt& b);
    friend CircularInt operator -(CircularInt& a ,const int num);
    friend CircularInt operator -(const int num ,CircularInt& a);
    friend CircularInt operator -=(CircularInt& a ,CircularInt& b);
    friend CircularInt operator -=(CircularInt& a ,const int num);
    friend CircularInt operator /(const int num ,CircularInt& a);
    friend CircularInt operator /(CircularInt& a , const int num);
    friend CircularInt operator +(const int num , CircularInt& a);
    friend CircularInt operator +(CircularInt& a , const int num);
    friend CircularInt operator +=(CircularInt& a ,CircularInt& b);
    friend CircularInt operator *(const int num , CircularInt& a);
    friend CircularInt operator *(CircularInt& a , const int num);
    friend CircularInt operator *(CircularInt& a ,CircularInt& b);
    friend CircularInt operator *=(CircularInt& a ,CircularInt& b);
    
    
    
 
//     // boolean operator
     friend bool operator ==(CircularInt&  a , CircularInt&  b);
     friend bool operator ==(CircularInt&  a , int num);
     friend bool operator ==(int num , CircularInt&  a);
     friend bool operator !=(CircularInt&  a , CircularInt&  b);
     friend bool operator !=(CircularInt&  a , int num);
     friend bool operator !=(int num , CircularInt&  a);
     friend bool operator <(CircularInt&  a , CircularInt&  b);
     friend bool operator <(CircularInt&  a , int num);
     friend bool operator <(int num , CircularInt&  a);
     friend bool operator <=(CircularInt&  a , CircularInt&  b);
     friend bool operator >(CircularInt&  a , CircularInt&  b);
     friend bool operator >(CircularInt&  a , int num);
     friend bool operator >(int num , CircularInt&  a);
     friend bool operator >=(CircularInt&  a , CircularInt&  b);
     friend bool operator >=(CircularInt&  a , int num);
     friend bool operator >=(int num , CircularInt&  a);
     friend bool operator <=(CircularInt&  a , CircularInt&  b);
     friend bool operator <=(CircularInt&  a , int num);
     friend bool operator <=(int num , CircularInt&  a);
     
//     bool operator !=(CircularInt const&  b);

//     //input anf output operator
       friend ostream& operator <<(ostream& os, const CircularInt& a);
       friend istream& operator >> (istream& is,  CircularInt& a);
//     friend ostream& operator <<=(ostream& os, const CircularInt& a);

    
    public:
    CircularInt(int a, int b);
    friend void normalization(int num, CircularInt& c) {  // normalization function
    int end = c.y;
    if(num > end){
       num = num%end;
    }
    if(num < 0){
        while(num < 0){
         num = num + end;   
        }
    }
    c.x = num;
    }

CircularInt& operator =(int num);
//      CircularInt& operator /(int num);
//     CircularInt& operator /=(int num);
    CircularInt& operator +=(int num);
//     CircularInt& operator -=(int num);
    CircularInt& operator *=(int num);
    CircularInt& operator /=(int num);
//        // add one or minus one
    CircularInt& operator++(int);
    CircularInt& operator ++();
    CircularInt& operator--(int);
    CircularInt&  operator --();     

//     // negetive and positive 
     CircularInt operator -();
//     CircularInt& operator +(); 

 };
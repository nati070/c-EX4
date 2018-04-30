#include <iostream>
using namespace std;

class CircularInt{
    private:
        int first , last , current;        
    
    
//the normal operators between Object + , - , / , * 
     

//     //the opertors between Object to int
   
    friend CircularInt operator -(CircularInt& a ,CircularInt& b);
    friend CircularInt operator -(CircularInt& a ,const int num);
    friend CircularInt operator -(const int num ,CircularInt& a);
   
    friend CircularInt operator /(const int num ,CircularInt& a);
    friend CircularInt operator /(CircularInt& a , const int num);
    friend CircularInt operator /(CircularInt& a ,CircularInt& b);
    friend CircularInt operator /=(CircularInt& a ,CircularInt& b);
    friend CircularInt operator +(CircularInt& a ,CircularInt& b);
    friend CircularInt operator +(const int num , CircularInt& a);
    friend CircularInt operator +(CircularInt& a , const int num);
   
    friend CircularInt operator *(const int num , CircularInt& a);
    friend CircularInt operator *(CircularInt& a , const int num);
    friend CircularInt operator *(CircularInt& a ,CircularInt& b);
    
    
    //CircularInt& operator *=(CircularInt& a); 
    
    
    
    
 
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
    int area=c.last-c.first+1;
		if(num>c.last){
			while(num>c.last){
				num-=area;
			}
		}
		if(num<c.first){
			while(num<c.first){
				num+=area;
			}
		}
c.current=num;
    }

CircularInt& operator =(int num);

    CircularInt& operator +=(int num);

    CircularInt& operator *=(int num);
    CircularInt& operator /=(int num);
     CircularInt& operator -=(CircularInt& a);
   CircularInt& operator-= ( int num); 
    CircularInt& operator +=(CircularInt& a);
     CircularInt& operator *=(CircularInt& a);
  
    
   
//        // add one or minus one
    CircularInt& operator++(int);
    CircularInt& operator ++();
    CircularInt& operator--(int);
    CircularInt&  operator --();     

//     // negetive and positive 
     CircularInt operator -();
//     CircularInt& operator +(); 
int GetValue() {return current;}
 };
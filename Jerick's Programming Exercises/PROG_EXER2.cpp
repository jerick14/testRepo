/*
*AUTHOR <Jerick Vegile M. Cataquiz>
*DATE <August 4 2018>
*NAME <Boolean Problem>
*DESCRIPTION <True or False>
*/
#include <iostream>
using namespace std;
int main ()
{
    
      int B,A,C;
      int a=5,b=7,c=11, d=12;
      
      B=(a+b)>(b-c);
      A=!(a*c)>(c++);
      C=(d+c+b)>=(b*c)||(a*b)<=(d+c+b);
      cout <<  B << "\n" << A << "\n" << C ;
	
	return 0;
}

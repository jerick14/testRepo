/*
*AUTHOR <Jerick Vegile M. Cataquiz>
*DATE <August 04 2019 >
*NAME <Quadratic Formula>
*DESCRIPTION <>
*/
#include <iostream>
#include <cmath>

using namespace std;

int main ()

{
	int A= 2,B=4,C=6;
	int D;
	int R1=0;
	int R2=0;
	
	D=sqrt(B*(4*(A*C)));
	R1=((-B+D)/(2*A));
	R2=((-B-D)/(2*A));
	
	cout << " D = " << D << "\n";
	cout << " Root 1 = " << R1 << "\n";
	cout << " Root 2 = " << R1 << "\n";
	
	
	
	
return 0;
}

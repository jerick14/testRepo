/*
*AUTHOR <Jerick Vegile M. Cataquiz>
*DATE <August 04 2018>
*NAME <FORCE>
*/
#include <iostream>
using namespace std;
int main ()
{
	float A,B,C,F;
	float M1,M2,D;
	float k=0.0000000667 ;
	cout << " Enter mass one:";
	cin >> M1;
	cout << " Enter mass two:";
	cin >> M2;
		cout << " Enter distance:";
		cin >> D;
	A=(M1*M2);
	B= (D*D);
	C=(A/B);
	F=(k*C);
	 cout <<" The answer:" << F;
	
	return 0;
	
}

/*
*AUTHOR <Jerick Vegile M. Cataquiz>
*DATE <August 8 2018>
*NAME <Arithmetic Operator and Logical Operator>
*DESCRIPTION <Application of Division, Multiplication, Subraction and Addition>
*/
#include <iostream>
using namespace std;
int main ()
{
	//Local Variable Declaration
	string A,B,C,D,E,F,G;
	int score =0;
	string Again="yes";
	
	//Title of the Program
	cout << " \t\t Arithmitic And Logical Operators \n\n\n";
	
	//Loop if the user wants to go back
	while ( Again =="yes"||Again=="Yes"||Again=="YES"||Again=="y"||Again=="Y")
	{
		
		//Problem number 1
		cout << " 1.) Problem: \n\n";
		cout << " Fill in the blank \n\n";
		cout << " 7 __ 8 = 15 \n";
		
		//The user enter the correct answer
		cout << " Your answer:";
		cin  >> A;
		
		//Condition 
		if (A=="+")
		{
			cout << " Correct !!! \n\n";
			score+=10;
		}
		else
		{
			cout << " Incorret!!! \n\n";
		}
		
		//Problem number 2
		cout << " 2.) Problem: \n\n";
		cout << " Fill in the blank \n\n";
		cout << " 12 ____ 13 = True \n";
		
		//The user enter the correct answer
		cout << " Your answer:";
		cin  >> B;
		
		//Condition
		if (B=="<"||B=="<=" )
		{
			cout << " Correct !!! \n\n";
			score+=10;
		}
		else
		{
			cout << " Incorret!!! \n\n";
		}
		
		//Problem number 3
		cout << " 3.) Problem: \n\n";
		cout << " Fill in the blank \n\n";
		cout << " 8 > 67 = _________ \n";
		
		//The user enter the correct answer
		cout << " Your answer:";
		cin  >> C;
		
		//Condition
		if (C=="False"||C=="F"||C=="f"||C=="false"||C=="FALSE")
		{
			cout << " Correct !!! \n\n";
			score+=10;
		}
		else
		{
			cout << " Incorret!!! \n\n";
		}
		
		//Problem number 4
		cout << " 4.) Problem: \n\n";
		cout << " Fill in the blank \n\n";
		cout << " 45 <= 45 = _________ \n";
		
		//The user enter the correct answer
		cout << " Your answer:";
		cin  >> D;
		
		//Condition
		if (D=="TRUE"||D=="T"||D=="t"||D=="True"|| D=="true")
		{
			cout << " Correct !!! \n\n";
			score+=10;
		}
		else
		{
			cout << " Incorret!!! \n\n";
		}
		//Problem number 5
		cout << " 5.) Problem: \n\n";
		cout << " Fill in the blank \n\n";
		cout << " 13 * 17 = ______ \n";
		
		//The user enter the correct answer
		cout << " Your answer:";
		cin  >> E;
		
		//Condition
		if (E=="221" )
		{
			cout << " Correct !!! \n\n";
			score+=10;
		}
		else
		{
			cout << " Incorret!!! \n\n";
		}
		//Problem number 6
		cout << " 6.) Problem: \n\n";
		cout << " Fill in the blank \n\n";
		cout << " 2.6 - 6.8 = _______ \n";
		
		//The user enter the correct answer
		cout << " Your answer:";
		cin  >> F;
		
		//Condition 
		if (F=="-4.2")
		{
			cout << " Correct !!! \n\n";
			score+=10;
		}
		else
		{
			cout << " Incorret!!! \n\n";
		}
		
		//Problem number 7
		cout << " 7.) Problem: \n\n";
		cout << " Fill in the blank \n\n";
		cout << " 36 / 3 = _______ \n";
		
		//The user enter the correct answer
		cout << " Your answer:";
		cin  >> G;
		
		//Condition 
		if (G=="12")
		{
			cout << " Correct !!! \n\n";
			score+=10;
		}
		else
		{
			cout << " Incorret!!! \n\n";
		}
		
		//Score of the Game
		cout << " Your score is:" << score ;
		
		cout << " \n\n\n";
		
		//user will choose if she/he wants to try it again
		cout << " Do you want to go back? (yes/no):";
		cin >> Again;
		
		
		
		cout << " \n\n\n";
	}
	
	return 0;
}

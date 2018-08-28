/*
*NAME <Jerick Vegile M. Cataquiz>
*Date <August 13 2018>
*Module Name <Formula of Area>
*Description <Calculate the area using different formula>
*/
#include <iostream>
#include <unistd.h>

using namespace std;
#define PIE 3.1416

int main()
{
	//Local Variable Declaration
	string choose;
	sleep(2);

	cout << " \n\t\t     Welcome \n\n";
	sleep(2);

	//title of the program
	cout << " \t\t Formula Of Area \n\n\n";
	sleep(1.5);

	//using the loop to make it easier to the user to use this program
	string menu = "yes";
	while (menu=="yes"||menu=="YES"||menu=="Yes"||menu=="y"||menu=="Y")
	{
		//Menu
		cout << " Choose you want to use.\n\n";
		cout << " Circle \n Rectangle \n Right Triangle \n Square \n\n";
		cout << " Your answer is:";
		cin  >> choose;
		sleep(1.75);

	//Condition if the user choose the circle
	if (choose=="Circle"||choose=="circle")
	{
		//Local Variable Declaration
		char C;

		//loop if the user want to try it again
		string again="yes";
    	while (again=="yes"||again=="YES"||again=="Yes"||again=="y"||again=="Y")
		{

			//title
			cout << " \n\t\t\t CIRCLE \n\n\n";
			sleep(1.5);

			// Menu
			cout << " \n Choose you want to use. \n\n a. Area \t b. Circumference  \n";
			cout << " Your answer is:";
			cin  >>  C;

		//Conditon if the user choose the area
		if (C=='a'||C=='A')
		{
			char B;
			//title
			cout << " \n\t\t\t AREA OF CIRCLE \n\n\n";
			sleep(1.5);

			//Menu
			cout << " \n Choose you want to use. \n a. Raduis \t b. Diameter \n";
			cout << " Your answer is:";
			cin >> B;
			//Condition if the user choose the raduis
			if (B=='a'||C=='A')
			{
			// Local Variable Declaration
		    double R,D,Ans;

		    //Prompt the user enter the raduis
			 cout << " \n Enter the raduis:";
			 cin  >> R;

			 //Processing
			 D=(R*R);
			 Ans=(PIE*D);

			 sleep(2);
			 //Outcome or tyhe result
			 cout << " \n The Area of the circle is:"<< Ans ;
			}
			//Condition if the user choose the diameter
			else if(B=='b'||C=='B')
			{
		      //Local Variable Declaration
			  double DIA,E,F,An;

			  //Prompt the user enter the Diameter
			  cout << " \n Enter the Diameter:";
			  cin >> DIA;

			  //Processing
			  E=(DIA*DIA);
			  F=(PIE*E);
			  An=(F/4);

			  sleep(2);

			  //Outcome or the result
			  cout << " \n The Area of the circle is:" << An;
			}
			//Condition if the user type an invalid answer
			else
			{
				//outcome or the result
				cout << " \n\n Sorry Invalid!!!";
			}

	   	}

   	//Condition if the user choose the circumference
	else if(C=='b'||C=='B')
	{
		//Local Variable Declaration
		double RA,SA,G;

		//title
		cout << "\t\t\t CIRCUMFERENCE OF CIRCLE \n\n\n";
		sleep(1.5);

		//Prompt the user enter the raduis
		cout << " Enter the raduis:";
		cin >> RA;

		//Processing
		G=(RA*RA);
		SA=(PIE*RA);

		sleep(2);
		//Outcome or the Result
		cout << " The circumference of the circle is:" << SA;
		}
	//Condition if the user type an invalid answer
	else
    	{
    	//outcome or the result
		cout << " Sorry Invalid";
     	}
     	//loop if the user want to try it again
		cout << " \n\n \n Do you want to try it again?(yes/no):";
	   	cin >> again;
	   	sleep(1.75);
     	}

	}
   // Condition if the user choose rectangle
   else if(choose=="Rectangle"||choose=="rectangle")
	{

	//Local Variable Declaration
	double Length,Width,Sagot;

	//loop if the user want to try it again
	string agai="yes";
    while (agai=="yes"||agai=="YES"||agai=="Yes"||agai=="y"||agai=="Y")
    {
    //title
	cout << " \n \t\t\t AREA OF THE RECTANGLE \n\n\n";
	sleep(1.5);

	//Prompt the user will enter the length and the width
	cout << " Enter the Length:";
	cin  >> Length;
	cout << " Enter the Width:";
	cin  >> Width;

	//Processing
	Sagot =(Length*Width);


	sleep(2);
	//Outcome or the result
	cout << " The area of the rectangle is:"  << Sagot;

    //loop if the user want to try it again
	cout << " \n\n \n Do you want to try it again?(yes/no):";
	cin >> agai;
	sleep(1.75);
	}
	}
	//Condition if the user choose triangle
	else if(choose=="triangle"||choose=="Triangle")
	{
	//Local Variable Declaration
	double x,y,Area;
	//loop if the user want to try it again
	string agai="yes";
    while (agai=="yes"||agai=="YES"||agai=="Yes"||agai=="y"||agai=="Y")
    {
    	//title
		cout << " \n \t\t\t AREA OF THE RIGHT TRIANGLE \n\n\n";
    	sleep(1.5);

    	//Prompt will enter the base and the height
    	cout << " Enter the base:";
    	cin >> x,
    	cout << " Enter the height:";
    	cin >>y;
    	//Processing
    	Area=((x*y)/2);


    	sleep(2);
    	//Outcome or the result
    	cout << " \n The Area of the right triangle is:" << Area;
    	//loop if the user want to try it again
    	cout << " \n\n \n Do you want to try it again?(yes/no):";
	    cin >> agai;
	    sleep(1.75);
		}

	}
	//Condition if the user choose the squoare
	else if(choose=="square"||choose=="Square")
	{
		//Local Variable Declaration
		double X,Ar;
		//loop if the user want to try it again
	string agai="yes";
    while (agai=="yes"||agai=="YES"||agai=="Yes"||agai=="y"||agai=="Y")
    {
    	//title
    	cout << " \n \t\t\t AREA OF THE SQUARE \n\n\n";
    	sleep(1.5);

    	//Prompt the user enter the side of the square
    	cout << " Enter the side of the square:";
    	cin >> X,
    	//Processing
    	Ar=(X*X);

    	sleep(2);
    	//Outcome or the result
    	cout << " The area of the square is:"<< Ar;
		//loop if the user want to try it again
    	cout << " \n\n \n Do you want to try it again?(yes/no):";
	    cin >> agai;
	    sleep(1.75);
    }

	}
	//Condition if the user type an invalid answer
	else
	{
		cout << " Sorry Invalid!!! \n\n\n";
	}
	//loop if the user want to try go back to the menu
	cout << " Do you want to go back?(yes/no):";
	cin >> menu;
	cout << "\n\n\n\n\n";
	sleep(1.75);


}

	return 0;
}

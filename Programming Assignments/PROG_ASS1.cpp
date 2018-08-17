//sample c program
#include <iostream>
using namespace std;
int main ()
{

string UN;
string PW;
char YM;
string PB;
int EP;
float AP;
float F;
cout << ("Jv's Online Payment")<< endl;
cout<< ("Username:");
cin>> UN;
cout<< ("Password:");
cin>> PW;
cout<< ("Years Of Being a Member:");
cin >>YM;
cout<< ("Bills Payment:");
cin>> PB;
cout << ("Enter Pin:");
 cin >> EP;
cout << ("Enter Payment/Peso:");
cin >> AP;

if (AP >= 250)
{
 F= (AP-20);       
cout<<("Congrats! You avail the -20 peso discount");

cout << "\n" << ("Your Final Bill is:") << F <<endl;
        }
else if (AP < 250)
        {
        cout << "Sorry,You can't avail the discount"<< endl;
    }
 cout <<("Thank you!")<< endl;

return 0;

}
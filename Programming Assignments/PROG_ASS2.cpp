/*
*NAME: <Jerick Vegile M. Cataquiz>
*DATE: <July 27, 2018>
*MODULE NAME: <Synthetic Division>
*DESCRIPTION: <Getting the possible roots>
*ARGUMENTS: <"None">
*RETURNS: <"None">
*NOTES: <>
*CHANGE HISTORY: <>
*/

#include <iostream>
using namespace std;
int main ()
{
    int FN;
    int SN;
    int TN;
    int FON;
    float ER;
    
    float A;
    float B;
    float C;
    float D;
    float E;
    float R;
    
    //tite of the program
    cout << "\t \t Synthetic Division \n\n";
    
    //guide to the user how to use this program
    cout << " \n Example; \n\n";
    cout << "\t Problem: y^3 - y^2 - y - 2 \n";
    cout << "\t Possible root: (y-2)\n\n";
    cout << " First number: y^3 = 1\n";
    cout << " Second number: -y^2 = -1 \n";
    cout << " Third number: -y = -1 \n";
    cout << " Fourth number: -2 = -2 \n";
    cout << " Root: y = 2 \n\n";
    
    cout << "\t Test it! \n\n";
    
    //the user will enter  an integer
    cout << " Enter the first number/ (y^3):";
    cin  >> FN;
    cout << " Enter the second number/ (y^2):";
    cin  >> SN;
    cout << " Enter the third number/ (y):";
    cin  >> TN;
    cout << " Enter the fourth number/ (cons):";
    cin  >> FON;
    
    //the user will enter a possible root
    cout << " Enter the root:";
    cin  >> ER;
    
    //processing
    A = (FN*ER);
    B = (SN+A);
    C = (ER*B);
    D = (TN+C);
    E = (ER*D);
    R = (FON+E);
    
    //outcome
    cout << "Roots: \n";
    cout << +FN << " y^2 (+) " << +B << "y" << " (+) " << D << "\n";
    cout << "and\n"; 
    cout << " y"<< "(+)" << -ER << "\n";
    cout << "Reminder:" << R << "\n";
 
    return 0;  

}

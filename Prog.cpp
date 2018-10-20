/*
*MEMBERS
*      Jerick Vegile M. Cataquiz
*      Sofia Ruth E. Villanueva
*	   Jhoemar Figueroa
*DATE <October 21 2018>
*NAME <The Adventure of Little Spidey>
*DESCRIPTION <Story Text Base Game>
*/
#include <iostream>
#include <windows.h>
#include <Windows.h>
#include <unistd.h>
#include "MMSystem.h"
using namespace std;

void Type(const char*p)
{
	if(NULL == p)
	return;
	while(*p)
	{
		printf("%c \xc",*p++);
		::Sleep(100);
		printf("\b \b");
		::Sleep(100);
	}
		::Sleep(100);
	
	
}
void text_animation(char a[100])
{
	int i; double k;
	for(i=0;a[i]!='\0';++i)
	{
		for(k=0;k<3000000;++k);
		cout <<a[i];
	
	}
}
void slide_animation(char*a)
{
	int i,k;
	double j;
	for(k=0;k<70;++k)
	{
	 	for(i=0;i<k;++i)
		 {
		 	cout<<" ";
		 	
			 }	
			 cout <<a;
			 for(j=0;j<1000000;++j);
			 system("cls"); 
			 Sleep(250);
	}

	cout<<"                             "<<a<<"                      ";
}
int main(int argc,const char* argv[])
{
	

	HANDLE
	color=GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(color,15);
	 	cout << " \n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t Please Click ";
	 		SetConsoleTextAttribute(color,04);
		 cout<<"[ENTER]";
	 	cin.get();
	 	 system("cls");
	cout << "\n\n\n\n";
	 cout << "\n\n\n\n";

	system("color 07");
	cout << " \n\n\n\n\t\t\t\t\t Loading......";
	cout << "";
	for	(int d=0;d<=100;d+=4)
	{

	cout  << "\xD \t\t\t\t\t\t\t" << d <<"%";
	Sleep(200);
    }
    system("cls");
    
   
	 PlaySound(TEXT("Feeling.wav"),NULL,SND_ASYNC|SND_LOOP);
    
	cout << "\n\n\n\n";
	cout << "\n\n\n\n";
	cout << "\n\n\n\n";
	SetConsoleTextAttribute(color,11);
	 Type("\t\t\t\t   (Welcome)\n\n");
	 
		
	system("cls");
	cout << "\n\n\n\n";
	cout << "\n\n\n\n";
	 cout << "\n\n\n\n";
	
	SetConsoleTextAttribute(color,10);
	Type(" \t\t The ");
     SetConsoleTextAttribute(color,9);
	 Type("Adventure ");
	 SetConsoleTextAttribute(color,1);
	 Type("of ");
	 SetConsoleTextAttribute(color,5);
	 Type("Little ");
     SetConsoleTextAttribute(color,6);
	 Type("Spidey \n\n\n");
     SetConsoleTextAttribute(color,15);
     
	system("cls");
	
	cout << "\n\n\n\n";
	cout << "\n\n\n\n";

	
		
	int SpideyLife = 100;
	int Langgamlife = 100;
	 int Buhay,S,LP;
	 int X,Y,Z;

	
	SetConsoleTextAttribute(color,4);
	cout << " Narrator: ";
	

	
	SetConsoleTextAttribute(color,15);
	text_animation(" One day there's a little spider searching for the food. \n");
	sleep(3);
	text_animation("            And saw a bunch of food in the nest of  Green Ant  \n\n\n");
	sleep(3);
	system("cls");
	
	cout << "\n\n\n\n";
	 cout << "\n\n\n\n";
	SetConsoleTextAttribute(color,4);
	cout << " Task " ;
	SetConsoleTextAttribute(color,15);
	Type( ": Get the food \n\n");
	system("cls");
	cout << "\n\n\n\n";
	 cout << "\n\n\n\n";
	cout << " Little Spidey's Energy: \n\n";
	sleep(3);
	
	cout  << " Life:";
	SetConsoleTextAttribute(color,4);
	cout << SpideyLife ;
	sleep(3);
	
	SetConsoleTextAttribute(color,11);
	system("cls");
	cout << "\n\n\n\n";
	 cout << "\n\n\n\n";
	 
	cout  << " \n\n Narrator: ";
	SetConsoleTextAttribute(color,15);
	
	text_animation(" Little Spidey try to get the food but Green Ant defend his Food. \n\n");
	sleep(4);
	system("cls");
	cout << "\n\n\n\n";
	 cout << "\n\n\n\n";
	cout <<" Green Ant's Life:";
	cout << Langgamlife <<"\n\n";
	sleep(2);
	system("cls");
	cout << "\n\n\n\n";
	 cout << "\n\n\n\n";
	 	SetConsoleTextAttribute(color,10);
    Type("\t\t\t Green Ant");
    	SetConsoleTextAttribute(color,12);
	Type(" Vs ");
		SetConsoleTextAttribute(color,4);
	Type("Little Spidey");
	
	sleep(3);
	
	cout << "\n\n\n\n";
	
		SetConsoleTextAttribute(color,15);
	cout << " \t First attacker Little spidey! \n\n";
	sleep(3);
	
	
	string gagawin;
	SetConsoleTextAttribute(color,2);
	cout << " What do you do? \n";
	SetConsoleTextAttribute(color,15);
	cout << " a.) Punch \n b.) Kick  \n\n";
	
	cout << " Little spidey:";
	SetConsoleTextAttribute(color,3);
	cin  >> gagawin;
	  while(gagawin!="A"&&gagawin!="a"&&gagawin!="B"&&gagawin!="b"&&gagawin!="C"&&gagawin!="c")
	{
		
	system("cls");
	cout << "\n\n\n\n";
	 cout << "\n\n\n\n";
	 	SetConsoleTextAttribute(color,10);
    Type("\t\t\t Green Ant");
    	SetConsoleTextAttribute(color,12);
	Type(" Vs ");
		SetConsoleTextAttribute(color,4);
	Type("Little Spidey");
	
	sleep(3);
	
	cout << "\n\n\n\n";
	
		SetConsoleTextAttribute(color,15);
	cout << " \t First attacker Little spidey! \n\n";
	sleep(3);
	
	
	cout << "\n\n";
	SetConsoleTextAttribute(color,2);
	cout << " What do you do? \n";
	SetConsoleTextAttribute(color,15);
	cout << " a.) Punch \n b.) Kick  \n\n";
	
	
	cout << " Little spidey:";
	SetConsoleTextAttribute(color,3);
	cin  >> gagawin;
	}
	SetConsoleTextAttribute(color,15);

	
					if (gagawin=="A"||gagawin=="a")
					{
						
						
					text_animation(" Little Spidey release  a Punch and hit the Ants!! \n");
						sleep(2);
						
					    Buhay=(Langgamlife-25);
						cout << " Damage!!! \n";
						sleep(3);
						
						cout << " Ant's Life:" << Buhay ;
						sleep(4);
						system("cls");
						cout << "\n\n\n\n";
					     cout << "\n\n\n\n";	
						SetConsoleTextAttribute(color,10);			     					
						Type("\n\n \t\t\t\t\t\t\tGreen Ant's turn !!! \n \n");
						sleep(3);				
						
						
		string Dodge;
		SetConsoleTextAttribute(color,2);
		cout << " Dodge ?  \n";
		SetConsoleTextAttribute(color,5);
		cout << " Left or Right \n";
		SetConsoleTextAttribute(color,7);
		cout << " Little Spidey:";
		SetConsoleTextAttribute(color,15);
		cin  >> Dodge;
		 while(Dodge!="Left"&&Dodge!="left"&&Dodge!="Right"&&Dodge!="right"&&Dodge!="L"&&Dodge!="l"&&Dodge!="R"&&Dodge!="r"&&Dodge!="LEFT"&&Dodge!="Right")
	{
			SetConsoleTextAttribute(color,2);
		cout << " Dodge ?  \n";
		SetConsoleTextAttribute(color,5);
		cout << " Left or Right \n";
		SetConsoleTextAttribute(color,7);
		cout << " Little Spidey:";
		SetConsoleTextAttribute(color,15);
		cin  >> Dodge;
	}
					
					if (Dodge=="Right"||Dodge=="right"||Dodge=="R"||Dodge=="r"||Dodge=="RIGHT")
					{
				
				
				    text_animation(" Green Ant Attack and hit you!!! \n Damage 30 life points!!! \n\n");
				    sleep(3);
				    
					X=(SpideyLife-30);
					
					cout << " Spidey's Life:";
					SetConsoleTextAttribute(color,3);
					cout << X ;
					sleep(4);		
					
					}
					else if (Dodge=="Left"||Dodge=="left"||Dodge=="l"||Dodge=="L"||Dodge=="LEFT")
					{
						
						text_animation(" Little spidey turn left and Doged the attack!!! \n\n");
						cout << " Spidey's Life:";
						X=(SpideyLife-0);
					SetConsoleTextAttribute(color,3);
					cout << X ;	
					sleep(4);
						
					}
				system("cls");
					cout << "\n\n\n\n";
				     cout << "\n\n\n\n";
	string  gagawin;
	SetConsoleTextAttribute(color,15);
	Type(" Your turn!!! \n\n\n");

	cout << "\n\n\n\n";
cout << " What do you do?? \n";
	cout << " a.) Kick \n b.) Special Attack \n\n";
	
	cout << " Little spidey:";
	cin  >> gagawin;
while(gagawin!="A"&&gagawin!="a"&&gagawin!="B"&&gagawin!="b")
	{
	cout << "\n\n\n\n";
	SetConsoleTextAttribute(color,2);
	cout << " What do you do?? \n";
	SetConsoleTextAttribute(color,4);
	cout << " a.) Kick \n b.) Special Attack(Web) \n\n";
	SetConsoleTextAttribute(color,15);
	cout << " Little spidey:";
	cin  >> gagawin;
	}	
							if (gagawin=="A"||gagawin=="a")
							{
								
									SetConsoleTextAttribute(color,15);
							text_animation(" Little Spidey Realse A kick and hit the Green Ant!!! \n");
								sleep(2);
								 S=(Buhay-35);
								cout << " Damage!!!! \n";
								sleep(3);
								
								cout << " Langgam's Life:" << S ;
								sleep(4);
								system("cls");
						cout << "\n\n\n\n";
					     cout << "\n\n\n\n";	
						SetConsoleTextAttribute(color,10);			     					
						Type("\n\n \t\t\t\t\t\t\tGreen Ant's turn !!! \n \n");
						sleep(3);
						SetConsoleTextAttribute(color,15);
									cout << " Dodge ?  \n";
										cout << " Left or Right \n";
										cout << "Little Spidey:";
										cin  >> Dodge;
										while(Dodge!="Left"&&Dodge!="left"&&Dodge!="Right"&&Dodge!="right"&&Dodge!="L"&&Dodge!="l"&&Dodge!="R"&&Dodge!="r"&&Dodge!="LEFT"&&Dodge!="Right")
									{
										cout << "\n\n\n\n";
											cout << " Left or Right:";
									 cin  >>  Dodge;
									}
										if (Dodge=="Left"||Dodge=="left"||Dodge=="l"||Dodge=="L"||Dodge=="LEFT")
										{
									
									
									    text_animation(" Green Ant attack hits you!!! \n Damage 40 life points!!! \n\n");
									    sleep(3);
									    
										Y=(X-40);
										
										cout << " Spidey's Life:"<< Y ;		
										
										}
										else if(Dodge=="Right"||Dodge=="right"||Dodge=="R"||Dodge=="r"||Dodge=="RIGHT")
										{
											text_animation(" Little Spidey Dodge The Attack!!! \n\n");
											Y=(X-0);
											cout << " Spidey's Life:"<< Y ;
							        	}
								
								system("cls");
								cout << "\n\n\n\n";
							     cout << "\n\n\n\n";	
									string  A;
									Type(" Your turn!!! \n\n\n");
									cout << "\n\n\n\n";
				
								cout << " What do you do?? \n";
									cout << " a.) Special Attack \n\n";
									
									cout << " Little spidey:";
									cin  >> A;
								while(gagawin!="A"&&gagawin!="a")
									{
									cout << "\n\n\n\n";
									SetConsoleTextAttribute(color,2);
									cout << " What do you do?? \n";
									SetConsoleTextAttribute(color,4);
									cout << " a.) Special Attack(Web) \n\n";
									SetConsoleTextAttribute(color,15);
									cout << " Little spidey:";
									cin  >> gagawin;
									}
									if (gagawin=="A"||gagawin=="a")
							{
								
								
							text_animation(" Special Atttack (Web) \n");
								sleep(2);
								
							    LP=(S-40);
								cout << " Damage!!!40 life point sa buhay ni Langgam ! \n";
								sleep(3);
								
								cout << " Langgam's Life:" << LP ;
								sleep(5);
											
											
					 		}
						}
											
			else if (gagawin=="B"||gagawin=="b")
									{
										
										
										text_animation(" Special Atttack (Web) \n");
										sleep(2);
										
									    S=(Buhay-40);
										cout << " Damage!!! 40 life point sa buhay ni Langgam ! \n";
										sleep(3);
										
										cout << " Langgam's Life:" << S;
										sleep(4);
										system("cls");
						cout << "\n\n\n\n";
					     cout << "\n\n\n\n";	
						SetConsoleTextAttribute(color,10);			     					
						Type("\n\n \t\t\t\t\t\t\tGreen Ant's turn !!! \n \n");
						sleep(3);
											
											cout << " Dodge ?  \n";
												cout << " Left or Right \n";
												cout << "Little Spidey:";
												cin  >> Dodge;
												while(Dodge!="Left"&&Dodge!="left"&&Dodge!="Right"&&Dodge!="right"&&Dodge!="L"&&Dodge!="l"&&Dodge!="R"&&Dodge!="r"&&Dodge!="LEFT"&&Dodge!="Right")
											{
												cout << "\n\n\n\n";
													cout << " Left or Right:";
											 cin  >>  Dodge;
											}
												if (Dodge=="Left"||Dodge=="left"||Dodge=="l"||Dodge=="L"||Dodge=="LEFT")
												{
											
											text_animation(" Laggam attack hit you!!! \n Damage 40 life points!!! \n\n");
											    sleep(3);
											    
											Y=(X-40);
												
												cout << " Spidey's Life:"<< X ;		
												
												}
												else if(Dodge=="Right"||Dodge=="right"||Dodge=="R"||Dodge=="r"||Dodge=="RIGHT")
												{
													cout << " you dogde the attack!!! \n\n";
													cout << " Spidey's Life:"<< SpideyLife ;
									        	}
										
								system("cls");
								cout << "\n\n\n\n";
							     cout << "\n\n\n\n";
									
									
									Type(" Your turn!!! \n\n\n");
									cout << "\n\n\n\n";
									cout << "\n\n\n\n";
								cout << " What do you do?? \n";
									cout << " a.) Kick \n\n";
									
									cout << " Little spidey:";
									cin  >> gagawin;
								while(gagawin!="A"&&gagawin!="a")
									{
									cout << "\n\n\n\n";
									SetConsoleTextAttribute(color,2);
									cout << " What do you do?? \n";
									SetConsoleTextAttribute(color,4);
									cout << " a.) Kick \n\n";
									SetConsoleTextAttribute(color,15);
									cout << " Little spidey:";
									cin  >> gagawin;
									}
									if (gagawin=="A"||gagawin=="a")
							{
								
								
								text_animation(" Kick \n");
								sleep(2);
								
							    LP=(S-30);
								cout << " Damage!!! 35 life point sa buhay ni Langgam ! \n";
								sleep(3);
								
								cout << " Langgam's Life:" << LP ;
								sleep(5);
												
							     
									
							}	
							
					}
				}
				

    
	
		


	 int Langgam;
	 int F,L;

	
	cout << "\n\n\n\n";
	
		SetConsoleTextAttribute(color,15);
	cout << " \t First attacker Little spidey! \n\n";
	sleep(3);
	
	

	SetConsoleTextAttribute(color,2);
	cout << " What do you do? \n";
	SetConsoleTextAttribute(color,15);
	cout << " a.) Punch \n b.) Kick \n c.) Special Attack (Web) \n\n";
	
	cout << " Little spidey:";
	SetConsoleTextAttribute(color,3);
	cin  >> gagawin;
	  while(gagawin!="A"&&gagawin!="a"&&gagawin!="B"&&gagawin!="b"&&gagawin!="C"&&gagawin!="c")
	{
	cout << "\n\n\n\n";
	SetConsoleTextAttribute(color,2);
	cout << " Ano gagawin mo? \n";
	SetConsoleTextAttribute(color,15);
	cout << " a.) Punch \n b.) Kick \n c.) Special Attack (Web) \n\n";
	
	
	cout << " Little spidey:";
	SetConsoleTextAttribute(color,3);
	cin  >> gagawin;
	}

			
					//Number 2	
					if (gagawin=="B"||gagawin=="b")
					{
							SetConsoleTextAttribute(color,15);
							cout<< "\n\n\n";
					text_animation(" Little Spidey release  a Punch and hit the Ants!! \n");
						sleep(2);
						
					    Buhay=(Langgamlife-35);
						cout << " Damage!!! 35 life points \n";
						sleep(3);
						
						cout << " Langgam's Life:" << Buhay ;
						sleep(3);
						system("cls");
						cout << "\n\n\n\n";
					     cout << "\n\n\n\n";
						 	SetConsoleTextAttribute(color,10);			     					
						Type("\n\n \t\t\t\t\t\t\tGreen Ant's turn !!! \n \n");
						sleep(3);				
							
						 	
						string Dodge;
		SetConsoleTextAttribute(color,2);
		cout << " Dodge ?  \n";
		SetConsoleTextAttribute(color,5);
		cout << " Left or Right \n";
		SetConsoleTextAttribute(color,7);
		cout << " Little Spidey:";
		SetConsoleTextAttribute(color,15);
		cin  >> Dodge;
		 while(Dodge!="Left"&&Dodge!="left"&&Dodge!="Right"&&Dodge!="right"&&Dodge!="L"&&Dodge!="l"&&Dodge!="R"&&Dodge!="r"&&Dodge!="LEFT"&&Dodge!="Right")
	{
		system("cls");
		SetConsoleTextAttribute(color,2);
		cout << " Dodge ?  \n";
		SetConsoleTextAttribute(color,5);
		cout << " Left or Right \n";
		SetConsoleTextAttribute(color,7);
		SetConsoleTextAttribute(color,7);
		cout << " Little Spidey:";
		SetConsoleTextAttribute(color,15);
		cin  >> Dodge;
	}
					
					if (Dodge=="Right"||Dodge=="right"||Dodge=="R"||Dodge=="r"||Dodge=="RIGHT")
					{
				
				
				    text_animation(" Green Ant Attack and hit you!!! \n Damage 30 life points!!! \n\n");
				    sleep(3);
				    
					Langgam=(SpideyLife-30);
					
					cout << " Spidey's Life:";
					SetConsoleTextAttribute(color,3);
					cout <<  Langgam ;	
					sleep(3);	
					
					}
					else if (Dodge=="Left"||Dodge=="left"||Dodge=="l"||Dodge=="L"||Dodge=="LEFT")
					{
						
						 text_animation(" Little spidey turn left and Doged the attack!!! \n\n");
						 Langgam=(SpideyLife-0);
						cout << " Spidey's Life:";
					SetConsoleTextAttribute(color,3);
					cout <<  Langgam;	
						sleep(3);	
					}
				system("cls");
					cout << "\n\n\n\n";
				     cout << "\n\n\n\n";
				SetConsoleTextAttribute(color,15);	    
	Type(" Your turn!!!");
	cout << "\n\n\n\n";

cout << " What do you do?? \n";
	cout << " a.) Kick \n b.) Special Attack \n\n";
	
	cout << " Little spidey:";
	cin  >> gagawin;
while(gagawin!="A"&&gagawin!="a"&&gagawin!="B"&&gagawin!="b")
	{
		system("cls");
	cout << "\n\n\n\n";
	SetConsoleTextAttribute(color,2);
	cout << " What do you do?? \n";
	SetConsoleTextAttribute(color,4);
	cout << " a.) Kick \n b.) Special Attack(Web) \n\n";
	SetConsoleTextAttribute(color,15);
	cout << " Little spidey:";
	cin  >> gagawin;
	}
		
							
							if (gagawin=="A"||gagawin=="a")
							{
								
								
								 text_animation(" Little Spidey Realse A Kick and hit the Green Ant!!! \n");
								sleep(2);
								 S=(Buhay-25);
								cout << " Damage!!!! \n";
								sleep(3);
								
								cout << " Langgam's Life:" << S ;
								system("cls");
						SetConsoleTextAttribute(color,10);			     					
						Type("\n\n \t\t\t\t\t\t\tGreen Ant's turn !!! \n \n");
						sleep(3);				
						SetConsoleTextAttribute(color,15);	
								    	cout << " Dodge ?  \n";
										cout << " Left or Right \n";
										cout << "Little Spidey:";
										cin  >> Dodge;
										while(Dodge!="Left"&&Dodge!="left"&&Dodge!="Right"&&Dodge!="right"&&Dodge!="L"&&Dodge!="l"&&Dodge!="R"&&Dodge!="r"&&Dodge!="LEFT"&&Dodge!="Right")
									{
										system("cls");
											SetConsoleTextAttribute(color,10);			     					
						Type("\n\n \t\t\t\t\t\t\tGreen Ant's turn !!! \n \n");
						sleep(3);				
						
								    	cout << " Dodge ?  \n";
										cout << " Left or Right \n";
										cout << "Little Spidey:";
										cin  >> Dodge;
										cout << "\n\n\n\n";
											cout << " Left or Right:";
									 cin  >>  Dodge;
									}
										if (Dodge=="Left"||Dodge=="left"||Dodge=="l"||Dodge=="L"||Dodge=="LEFT")
										{
									
									
									    text_animation(" Laggam attack hit you!!! \n Damage 40 life points!!! \n\n");
									    sleep(3);
									    
										L=(Langgam-40);
										
										cout << " Spidey's Life:"<< L ;		
										
										}
										else if(Dodge=="Right"||Dodge=="right"||Dodge=="R"||Dodge=="r"||Dodge=="RIGHT")
										{
											
										L=(Langgam-0);
										
											cout << " Little Spidey Dodge The Attack!!! \n\n";
											cout << " Spidey's Life:"<< L;
							        	}
								
								system("cls");
								cout << "\n\n\n\n";
							     cout << "\n\n\n\n";
							    
									Type(" Your turn!!! ");
								
									cout << "\n\n\n\n";
								cout << " What do you do?? \n";
									cout << " a.) Special Attack \n\n";
									
									cout << " Little spidey:";
									cin  >> gagawin;
								while(gagawin!="A"&&gagawin!="a")
									{
									cout << "\n\n\n\n";
									SetConsoleTextAttribute(color,2);
									cout << " What do you do?? \n";
									SetConsoleTextAttribute(color,4);
									cout << " a.) Special Attack(Web) \n\n";
									SetConsoleTextAttribute(color,15);
									cout << " Little spidey:";
									cin  >> gagawin;
									}
									if (gagawin=="A"||gagawin=="a")
							{
								
								
								cout << " Special Atttack (Web) \n";
								sleep(2);
								
							    F=(S-40);
								cout << " Damage!!! 40 life point sa buhay ni Langgam ! \n";
								sleep(3);
								
								cout << " Langgam's Life:" << F ;
								sleep(5);
											
											
					 		}
					 	}
		else if (gagawin=="B"||gagawin=="b")
									{
										
										
										cout << " Special Atttack (Web) \n";
										sleep(2);
										
									    S=(Buhay-40);
										cout << " Damage!!! 40 life point sa buhay ni Langgam ! \n";
										sleep(3);
										
										cout << " Langgam's Life:" << S;
										system("cls");
												SetConsoleTextAttribute(color,10);			     					
						Type("\n\n \t\t\t\t\t\t\tGreen Ant's turn !!! \n \n");
						sleep(3);	
							SetConsoleTextAttribute(color,15);
											cout << " Dodge ?  \n";
												cout << " Left or Right \n";
												cout << "Little Spidey:";
												cin  >> Dodge;
												while(Dodge!="Left"&&Dodge!="left"&&Dodge!="Right"&&Dodge!="right"&&Dodge!="L"&&Dodge!="l"&&Dodge!="R"&&Dodge!="r"&&Dodge!="LEFT"&&Dodge!="Right")
											{
													SetConsoleTextAttribute(color,10);			     					
						Type("\n\n \t\t\t\t\t\t\tGreen Ant's turn !!! \n \n");
						sleep(3);	
											cout << " Dodge ?  \n";
												cout << " Left or Right \n";
												cout << "Little Spidey:";
												cin  >> Dodge;
													cout << " Left or Right:";
											 cin  >>  Dodge;
											}
												if (Dodge=="Left"||Dodge=="left"||Dodge=="l"||Dodge=="L"||Dodge=="LEFT")
												{
											
											
											    cout << " Laggam attack hit you!!! \n Damage 40 life points!!! \n\n";
											    sleep(3);
											    
												Langgam=(SpideyLife-40);
												
												cout << " Spidey's Life:"<< Langgam ;
												 sleep(3);		
												
												}
												else if(Dodge=="Right"||Dodge=="right"||Dodge=="R"||Dodge=="r"||Dodge=="RIGHT")
												{
													cout << " you dogde the attack!!! \n\n";
													cout << " Spidey's Life:"<< SpideyLife ;
													 sleep(3);
									        	}
										
								system("cls");
								cout << "\n\n\n\n";
							     cout << "\n\n\n\n";
							     
									Type(" Your turn!!!");
								
									cout << "\n\n\n\n";
								cout << " What do you do?? \n";
									cout << " a.) Kick \n\n";
									
									cout << " Little spidey:";
									cin  >> gagawin;
								while(gagawin!="A"&&gagawin!="a")
									{
									cout << "\n\n\n\n";
									SetConsoleTextAttribute(color,2);
									cout << " What do you do?? \n";
									SetConsoleTextAttribute(color,4);
									cout << " a.) Punch \n\n";
									SetConsoleTextAttribute(color,15);
									cout << " Little spidey:";
									cin  >> gagawin;
									}
									if (gagawin=="A"||gagawin=="a")
							{
								
								
								cout << " Punch \n";
								sleep(2);
								
							    F =(S-25);
								cout << " Damage!!! 25 life point sa buhay ni Langgam ! \n";
								sleep(3);
								
								cout << " Langgam's Life:" << F;
								sleep(5);
												
							     
									
							}	
						}
}

		
											system("cls");
												cout <<"\t\t\t\t\n\n\n\n";
											Type("Green Ant is Dead");
												cout <<"\n\n\n\n";
												Type("The End");
											
											
											
								

	return 0;
}



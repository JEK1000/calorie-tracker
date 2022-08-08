//Jason Kildare



//This program calculates the number of daily calories needed to maintain the users current weight


#include <iostream>
#include <iomanip>


using namespace std;

int main()

{
	
	
	int gender=0, weight=0, actLvl=0, calories1=12,calories2=10,calories3=15,calories4=13;
	
	
	
	cout<<"WELCOME TO THE CALORIE CALCULATOR!\n\n";

//begin do while
do
{
	
	//prompt user for weight
	cout <<"Enter your weight:";
	cin>>weight;
	cout<<endl;
	
	if(weight<10)
	{
	
		cout<<"Invalid. Weight must be more than 10 pounds.\n\n";
	}
}//end do while
while (weight<10);
		
//begin do while
do
{
	
	//prompt user for weight
	cout <<"Please enter 1 or 2 for the following:";
	cout <<"\n\n 1)Male\n 2)Female\n";
	
	cout <<"\nEnter Gender:";
	cin>>gender;
	cout<<endl;
	
	if(gender !=1 && gender!=2)
	{
	
		cout<<"\tInvalid.   You must enter:  1) for Male   or   2) for Female\n\n";
	}
		
}//end do while
while (gender !=1 && gender!=2);

//begin do while
do
{
	
	//prompt user for weight
	cout <<"Please enter 1 or 2 for the following:";
	cout <<"\n\n 1)Moderately Active \n 2)Low Activity Level\n";
	
	cout <<"\nEnter Activity level:";
	cin>>actLvl;
	cout<<endl;
	
	if(actLvl !=1 && actLvl!=2)
	{
	
		cout<<"\nInvalid. You must enter: 1) for Moderate Active or 2) for Low Activity Level\n\n\n";
	}
	
}//end of do while
while (actLvl !=1 && actLvl!=2);

//calculates calories1
calories1=weight*calories1;

	if (gender==2 && actLvl==1)

	cout<<"You will need to have "<<calories1<< " calories a day to maintain your weight.";
	cout<<endl;
	
//calculates calories2	
calories2=weight*calories2;
	
	if(gender==2 && actLvl==2)
	cout<<"You will need to have "<<calories2<< " calories a day to maintain your weight.";

//calculates calories3	 
calories3=weight*calories3;
	 
	 if (gender==1 && actLvl ==1)
	cout<<"You will need to have "<<calories3<< " calories a day to maintain your weight.";
	 cout<<endl;
	 
//calculates calories4
calories4=weight*calories4;
	 
	 if (gender==1 && actLvl==2)
	cout<<"You will need to have "<<calories4<< " calories a day to maintain your weight.";
		cout<<endl;	 
	 
	
	
	return 0;
}




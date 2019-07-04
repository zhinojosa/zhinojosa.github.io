// Zulitazhira Hinojosa Midterm 

#include <iostream>
#include <string>
using namespace std;


int main()

{
	

	cout << " Welcome, Adventurer." << endl;
	cout << endl;

	cout << " You find yourself standing in front of a polished silver mirror." << endl;
	cout << " As you stare into its surface, an image begings to resolve. " << endl;

	cout << endl;

	char gender;
	cout << " Are you (M)ale or (F)emale?";
	cin >> gender;


	cout << endl;

	char race;
	cout << " Are you (H)uman , and (E)lf or a (D)warf?";
	cin >> race;

	cout << endl;

	int age;
	cout << "How old are you?";
	cin >> age;

	cout << endl;

	string genderDesc;

	if (gender == 'F')
	{
		genderDesc = "Woman";
	}

	if (gender == 'M')
	{
		genderDesc = "Man";
	}


	string raceDesc;

	if (race == 'H')
	{
		raceDesc = "Human";
	}


	if (race == 'E')
	{
		raceDesc = "Elf";
	}

	if (race == 'D')
	{
		raceDesc = "Dwarven";
	}


	string ageDesc;

	if (age < 13)
	{
		ageDesc = "childlike";
	}

	if (age >= 13 && age <35 )
	{
		ageDesc = " Young";
	}

	if (age>=35 && age < 65) 
	{

	ageDesc = "Mature";

	}

	if (age >= 65)
	{
		ageDesc = " elderly";
	}

	if (race=='E')
	{
		ageDesc = " Ageless";
	}


	

	cout << " The image in the mirror resolves into that of a" << ageDesc << " " << raceDesc << " " << genderDesc << "." << endl;


		cout << endl;

	
	string playername;

	cout << " One last question. What should I call you, Hero?";
	cin >> playername;

	cout << endl;

	cin.get();

	cout << "Happy questing, "<< playername << " ! " << endl;
	
	cin.get();

	system("pause");
	return 0;
}

//Justin Rawlings
//CSC215
//11/11/2018
//Final Project

#include "pch.h"
#include "Final.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


class Animon
{
public:
	Animon(int health = 100);
	void Hello();

private:
	int m_health;
};

Animon::Animon(int health)
{
	cout << "A new Animon has been captured!\n";
	m_health = health;
}

void Animon::Hello()
{
	cout << "The current health of this Animon is " << m_health << ".\n\n";
}


int main()

{
	

	cout << "Welcome to the Animon universe.\n";
	cout << "Your new Animon will be here shortly.\n";
	cout << "I hope you have snacks. \n";
	
	string name = askText("What is your name?");
	
	Animon ani(100);
	ani.Hello();
	int health = 100;

	int choice;
	do
	{
		cout << "\nAnimon Exploring\n";
		cout << "0 - Quit\n";
		cout << "1 - Explore\n";
		cout << "2 - heal\n";

		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 0:
			cout << "Aww man. Goodbye I guess";
			cout << name;
			break;
		case 1:
			cout << "Ooops, a trap.";
			cout << "I feel sick. Must have been those beans.";
			cout << "Heal me, ";
			cout << name;
			health = health - 1;
			cout << "My current health is, " << health;
			break;
		case 2:
			cout << "Mmm, that's some good grub kiddo.";
			cout << "Thanks, " << name;
			health = health + 1;
			cout << "My current health is, " << health;
			break;
		}
	} while (choice != 0);
	return 0;
}
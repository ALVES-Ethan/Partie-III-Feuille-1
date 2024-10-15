#include "Exo1.h"

#include <iostream>
using namespace std;

void DisplayPerson(Person person) {
	cout << "Name : " << person.name << endl;
	cout << "Age : " << person.age << endl;
	cout << "Adress : " << person.adress << endl;
}

void UpdateAddress(Person& person,const char* adress) {
	person.adress = adress;
}

bool IsAdult(Person person) {
	return person.age >= 18;
}

void Exercice1() {
	Person person{ "Jorick", 16, "ParDieu Lyon" };
	DisplayPerson(person);
	UpdateAddress(person, "Nowhere");
	DisplayPerson(person);
	cout << IsAdult(person);
}
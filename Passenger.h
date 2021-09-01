#ifndef PASSENGER_H
#define PASSENGER_H
#include <iostream>
#include <string>

using namespace std;

class Passenger
{
	private:
		string name;
		string passport;
		int age;
		string nationality;
		bool frequentTraveller;
	
	public:
		Passenger();
		Passenger(string name, string passport, int age, string nationality, bool frequentTraveller);
		~Passenger();
	
	//getters
		string getName();
		string getPassport();
		int getAge();
		string getNationality();
		bool getFrequentTraveller();
	
	//setters
		void setName(string name);
		void setPassport(string passport);
		void setAge(int age);
		void setNationality(string nationality);
		void setFrequentTraveller(bool frequentTraveller);
};

Passenger::Passenger()
{
	this->name = "";
	this->passport = "";
	this->age = 0;
	this->nationality = "";
	this->frequentTraveller = false;
}

Passenger::Passenger(string name, string passport, int age, string nationality, bool frequentTraveller)
{
	this->name = name;
	this->passport = passport;
	this->age = age;
	this->nationality = nationality;
	this->frequentTraveller = frequentTraveller;
}

Passenger::~Passenger()
{

}

string Passenger::getName()
{
	return this->name;
}

string Passenger::getPassport()
{
	return this->passport;
}

int Passenger::getAge()
{
	return this->age;
}

string Passenger::getNationality()
{
	return this->nationality;
}

bool Passenger::getFrequentTraveller()
{
	return this->frequentTraveller;
}	

void Passenger::setName(string name)
{
	this->name = name;
}

void Passenger::setPassport(string passport)
{
	this->passport = passport;
}

void Passenger::setAge(int age)
{
	this->age = age;
}

void Passenger::setNationality(string nationality)
{
	this->nationality = nationality;
}

void Passenger::setFrequentTraveller(bool frequentTraveller)
{
	this->frequentTraveller = frequentTraveller;
}	

#endif
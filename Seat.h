#ifndef SEAT_H
#define SEAT_H
#include <string>
#include <iostream>
#include "Passenger.h"

using namespace std;

class Seat
{
	private:
		string id;
		string type;
		Passenger p;
		
	public:
		Seat();
		Seat(string id, string type);
		~Seat();
		
		string getId();
		string getType();
		
		void setId(string id);
		void setType(string type);
		
		void addPassenger(Passenger& p);
		string printPassengers();
};

Seat::Seat()
{
	this->id = "";
	this->type = "";
}

Seat::Seat(string id, string type)
{
	this->id = id;
	this->type = type;
}

Seat::~Seat()
{
	
}

string Seat::getId()
{
	return this->id;
}

string Seat::getType()
{
	return this->type;
}

void Seat::setId(string id)
{
	this->id = id;
}

void Seat::setType(string type)
{
	this->type = type;
}

void Seat::addPassenger(Passenger& p)
{
	this->p = p;
}

string Seat::printPassengers()
{
	return this->p.getName();
}

#endif
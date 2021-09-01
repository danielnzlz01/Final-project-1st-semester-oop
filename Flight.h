#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>

using namespace std;

class Flight
{
	private:
		string name;
		string origin;
		string destiny;
		string id;
		string departureTime;
		bool delayed;
	
	public:
		Flight();
		Flight(string name, string origin, string destiny, string id, string departureTime, bool delayed);
		~Flight();
	
	//getters
		string getName();
		string getOrigin();
		string getDestiny();
		string getId();
		string getDepartureTime();
		bool getDelayed();
	
	//setters
		void setName(string name);
		void setOrigin(string origin);
		void setDestiny(string destiny);
		void setId(string id);
		void setDepartureTime(string departureTime);
		void setDelayed(bool delayed);
};

Flight::Flight()
{
	this->name = "";
	this->origin = "";
	this->destiny = "";
	this->id = "";
	this->departureTime = "";
	this->delayed = false;
}

Flight::Flight(string name, string origin, string destiny, string id, string departureTime, bool delayed)
{
	this->name = name;
	this->origin = origin;
	this->destiny = destiny;
	this->id = id;
	this->departureTime = departureTime;
	this->delayed = delayed;
}

Flight::~Flight()
{

}

string Flight::getName()
{
	return this->name;
}

string Flight::getOrigin()
{
	return this->origin;
}

string Flight::getDestiny()
{
	return this->destiny;
}

string Flight::getId()
{
	return this->id;
}

string Flight::getDepartureTime()
{
	return this->departureTime;
}

bool Flight::getDelayed()
{
	return this->delayed;
}	

void Flight::setName(string name)
{
	this->name = name;
}

void Flight::setOrigin(string origin)
{
	this->origin = origin;
}

void Flight::setDestiny(string destiny)
{
	this->destiny = destiny;
}

void Flight::setId(string id)
{
	this->id = id;
}

void Flight::setDepartureTime(string departureTime)
{
	this->departureTime = departureTime;
}

void Flight::setDelayed(bool delayed)
{
	this->delayed = delayed;
}	

#endif
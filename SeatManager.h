#ifndef SEATMANAGER_H
#define SEATMANAGER_H
#include <iostream>
#include <string>
#include "Seat.h"
#include "Flight.h"

using namespace std;

class SeatManager
{
	private:
		bool boarding;
		Seat s;
		Seat seatList[4][10];
		Flight f;
	
	public:
		SeatManager();
		SeatManager(bool boarding);
		~SeatManager();
		
		bool getBoarding();
		int emptySeats();
		bool freeSeat(string s);
		bool freeWindowSeat();
		string getFlight(); 
		
		void setBoarding(bool boarding);
		void assignSeat(Seat& s);
		void assignFlight(Flight& f);
};

SeatManager::SeatManager()
{
	this->boarding = false;
}

SeatManager::SeatManager(bool boarding)
{
	this->boarding = boarding;
}

SeatManager::~SeatManager()
{
	
}

bool SeatManager::getBoarding()
{
	return this->boarding;
}

int SeatManager::emptySeats()
{
	int counter = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (this->seatList[i][j].printPassengers() == "")
			{
				counter++;	
			}
		}
	}
	return counter;
}

bool SeatManager::freeSeat(string s)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (this->seatList[i][j].getId() == s)
			{
				if (this->seatList[i][j].printPassengers() != "")
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool SeatManager::freeWindowSeat()
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (this->seatList[i][j].printPassengers() == "")
			{
				return true;
			}
		}
	}
	for (int i = 3; i < 4; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (this->seatList[i][j].printPassengers() == "")
			{
				return true;
			}
		}
	}
	return false;
}

string SeatManager::getFlight()
{
	return this->f.getId();
}

void SeatManager::setBoarding(bool boarding)
{
	this->boarding = boarding;
}

void SeatManager::assignSeat(Seat& s)
{
	this->s = s;
	int colN;
	int rowN;
	string c;
	string r;
	string loc[1] = {this->s.getId()}; 
	string row[4] = {"A", "B", "C", "D"};
	string col[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			r = loc[i][j];
			c = loc[i][j + 1];
		}
	}
	
	for (int i = 0; i < 4; i++)
	{
		if (r == row[i])
		{
			rowN = i;
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		if (c == col[i])
		{
			colN = i;
		}
	}
	
	this->seatList[rowN][colN] = this->s;
}

void SeatManager::assignFlight(Flight& f)
{
	this->f = f;
}

#endif
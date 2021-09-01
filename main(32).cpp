#include <iostream>
#include <string>
#include "Flight.h"
#include "Passenger.h"
#include "SeatManager.h"

using namespace std;

int main() 
{
	
	cout << "\n\nflight values: " << endl;
	Flight *f = new Flight("UnitedAirlines", "ZRH", "MEX", "UA53", "06:00", true);
	cout << "airline: " << f->getName() << endl;
	cout << "origin: " << f->getOrigin() << endl;
	cout << "destiny: " << f->getDestiny() << endl;
	cout << "id: " << f->getId() << endl;
	cout << "departure time: " << f->getDepartureTime() << endl;
	cout << "delayed?: " << boolalpha << f->getDelayed() << endl;
	cout << "\n\nnew flight values: " << endl;
	f->setName("IberiaAirlines");
	f->setOrigin("MEX");
	f->setDestiny("ZRH");
	f->setId("IB6400");
	f->setDepartureTime("04:00");
	f->setDelayed(false);
	cout << "airline: " << f->getName() << endl;
	cout << "origin: " << f->getOrigin() << endl;
	cout << "destiny: " << f->getDestiny() << endl;
	cout << "id: " << f->getId() << endl;
	cout << "departure time: " << f->getDepartureTime() << endl;
	cout << "delayed?: " << boolalpha << f->getDelayed() << endl;

  Passenger *p1 = new Passenger();
  p1->setName("José");
  p1->setNationality("Mexican");
  p1->setAge(22);
  p1->setPassport("A01655092");
  p1->setFrequentTraveller(true);
  cout << "\n\npassenger 1: " << endl;
  cout << "name: " << p1->getName() << endl;
  cout << "nationality: " << p1->getNationality() << endl;
  cout << "age: " << p1->getAge() << endl;
  cout << "passport: " << p1->getPassport() << endl; 
  cout << "frequent traveller?: " << p1->getFrequentTraveller() << boolalpha << endl;
  
  Passenger *p2 = new Passenger("Daniela", "Mexican", 18, "A01654798", true);
  Passenger *p3 = new Passenger("Daniel", "Mexican", 19, "A01654137", false);
  Passenger *p4 = new Passenger("Ximena", "Mexican", 31, "A01654761", true);
	Passenger *p5 = new Passenger("Ricardo", "Mexican", 52, "A01654222", true);
  Passenger *p6 = new Passenger("Eli", "Mexican", 20, "A01654521", false);
  Passenger *p7 = new Passenger("Katia", "Mexican", 15, "A016547543", true);
  Passenger *p8 = new Passenger("Richi", "Mexican", 25, "A01654567", false);
  Passenger *p9 = new Passenger("Isaac", "Mexican", 29, "A0165000", false);
  Passenger *p10 = new Passenger("María", "Mexican", 48, "A0165323", true);
  Passenger *p11 = new Passenger("Alejandra", "Mexican", 18, "A0165669", true);
  Passenger *p12 = new Passenger("Carlos", "Mexican", 23, "A01654798", false);
  Passenger *p13 = new Passenger("Elena", "Mexican", 13, "A01654798", true);
  Passenger *p14 = new Passenger("Homero", "Mexican", 11, "A01654798", false);
  Passenger *p15 = new Passenger("Maribel", "Mexican", 31, "A01654798", true);
  Passenger *p16 = new Passenger("Rosa", "Mexican", 54, "A0165478", false);
  Passenger *p17 = new Passenger("Luis", "Mexican", 18, "A01654355", true);
  Passenger *p18 = new Passenger("Juan", "Mexican", 18, "A01651111", true);
  Passenger *p19 = new Passenger("Toño", "Mexican", 18, "A01657234", false);
  Passenger *p20 = new Passenger("Pepe", "Mexican", 18, "A01658978", true);
	
	Seat *s1 = new Seat("A0", "first-class");
	Seat *s2 = new Seat("A1", "first-class");
	Seat *s3 = new Seat("A2", "first-class");
	Seat *s4 = new Seat("A3", "first-class");
	Seat *s5 = new Seat("A4", "first-class");
	Seat *s6 = new Seat("A5", "first-class");
	Seat *s7 = new Seat("A6", "first-class");
	Seat *s8 = new Seat("A7", "first-class");
	Seat *s9 = new Seat("A8", "first-class");
	Seat *s10 = new Seat("A9", "first-class");
	Seat *s11 = new Seat("B0", "first-class");
	Seat *s12 = new Seat("B1", "first-class");
	Seat *s13 = new Seat("B2", "first-class");
	Seat *s14 = new Seat("B3", "first-class");
	Seat *s15 = new Seat("B4", "first-class");
	Seat *s16 = new Seat("B5", "first-class");
	Seat *s17 = new Seat("B6", "first-class");
	Seat *s18 = new Seat("B7", "first-class");
	Seat *s19 = new Seat("B8", "first-class");
	Seat *s20 = new Seat("B9", "first-class");
	Seat *s21 = new Seat("C0", "first-class");
	Seat *s22 = new Seat("C1", "first-class");
	Seat *s23 = new Seat("C2", "first-class");
	Seat *s24 = new Seat("C3", "first-class");
	Seat *s25 = new Seat("C4", "first-class");
	Seat *s26 = new Seat("C5", "first-class");
	Seat *s27 = new Seat("C6", "first-class");
	Seat *s28 = new Seat("C7", "first-class");
	Seat *s29 = new Seat("C8", "first-class");
	Seat *s30 = new Seat("C9", "first-class");
	Seat *s31 = new Seat("D0", "first-class");
	Seat *s32 = new Seat("D1", "first-class");
	Seat *s33 = new Seat("D2", "first-class");
	Seat *s34 = new Seat("D3", "first-class");
	Seat *s35 = new Seat("D4", "first-class");
	Seat *s36 = new Seat("D5", "first-class");
	Seat *s37 = new Seat("D6", "first-class");
	Seat *s38 = new Seat("D7", "first-class");
	Seat *s39 = new Seat("D8", "first-class");
	Seat *s40 = new Seat("D9", "first-class");
	
	s1->addPassenger(*p1);
	cout << "\n\nseat 1 details: " << endl;
	cout << "passenger's name: " << s1->printPassengers() << endl;
	cout << "seat id: " << s1->getId() << endl;
	cout << "seat type: " << s1->getType() << endl;
	s1->setId("A1");
	s1->setType("VIP");
	cout << "\n\nnew seat 1 details: " << endl;
	cout << "passenger's name: " << s1->printPassengers() << endl;
	cout << "seat id: " << s1->getId() << endl;
	cout << "seat type: " << s1->getType() << endl;
	
	s3->addPassenger(*p2);
  s5->addPassenger(*p3);
  s7->addPassenger(*p4);
  s9->addPassenger(*p5);
  s11->addPassenger(*p6);
  s13->addPassenger(*p7);
  s15->addPassenger(*p8);
  s17->addPassenger(*p9);
  s19->addPassenger(*p10);
  s21->addPassenger(*p11);
  s23->addPassenger(*p12);
  s25->addPassenger(*p13);
  s27->addPassenger(*p14);
  s29->addPassenger(*p15);
  s31->addPassenger(*p16);
  s33->addPassenger(*p17);
  s35->addPassenger(*p18);
  s37->addPassenger(*p19);
  s39->addPassenger(*p20);
  
  SeatManager *sm = new SeatManager();
  sm->assignFlight(*f); 
  cout << "\n\nseat manager for flight id: " << sm->getFlight() << endl << endl;

  sm->assignSeat(*s1);
  sm->assignSeat(*s3);
  sm->assignSeat(*s5);
  sm->assignSeat(*s7);
  sm->assignSeat(*s9);
	sm->assignSeat(*s11);
  sm->assignSeat(*s13);
  sm->assignSeat(*s15);
  sm->assignSeat(*s17);
  sm->assignSeat(*s19);
	sm->assignSeat(*s21);
  sm->assignSeat(*s23);
  sm->assignSeat(*s25);
  sm->assignSeat(*s27);
  sm->assignSeat(*s29);
	sm->assignSeat(*s31);
  sm->assignSeat(*s33);
  sm->assignSeat(*s35);
  sm->assignSeat(*s37);
  sm->assignSeat(*s39);
  
  cout << "boarding status is: " << boolalpha << sm->getBoarding() << endl;
  sm->setBoarding(true);
  cout << "new boarding status is: " << boolalpha << sm->getBoarding() << endl;
  cout << "empty seats in flight: " << sm->emptySeats() << endl;
  cout << "seat available in 'C8'?: " << sm->freeSeat("C8") << endl;
  cout << "seat available in 'C9'?: " << sm->freeSeat("C9") << endl;
  cout << "are there free window seats?: " << sm->freeWindowSeat() << endl;
  
  return 0;
}
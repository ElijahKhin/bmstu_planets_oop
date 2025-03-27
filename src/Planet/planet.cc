#include "planet.hpp"

Planet::Planet(unsigned int dmtr, bool isAlive, 
		unsigned int sats) : dmtr(dmtr), isAlive(isAlive), sats(sats) {
	name = new char[255]; 
}
Planet::~Planet() { delete [] name; }


//	Accessors
char* Planet::get_name() { return name; }
unsigned int Planet::get_dmtr() { return dmtr; }
bool Planet::get_live() { return isAlive; }
unsigned int Planet::get_sats() { return sats; }

//	Mutators
void Planet::set_name(const char* name) {
	strcpy(this->name, name);
}

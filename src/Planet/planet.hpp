#ifndef PLANET
#define PLANET
# include <iostream>
# include <vector>

class Planet {
private:
	char*	name;
	unsigned int dmtr;
	bool isAlive;
	unsigned int sats;

public:
  Planet(unsigned dmtr, bool isAlive, unsigned sats);
  ~Planet();

	//	Accessors
	char* get_name();
	unsigned int get_dmtr();
	bool get_live();
	unsigned int get_sats();
	
  //	Mutators
	void set_name(const char* name);	
};

#endif

#include "planet.hpp"

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	Planet p(4878, 0, 0);
	p.set_name("Mercury");
	const char* pname = p.get_name();
	std::cout 
		<< pname << " " 
		<< p.get_dmtr() << " " 
		<< p.get_live() << " " 
		<< p.get_sats() << '\n'; 
}

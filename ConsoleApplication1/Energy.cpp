#include "stdafx.h"
#include <vector>
#include <string>
#include <algorithm>

class Energy{

private:
	int id;
	int energy_ammount;
	int energy_price;

public:

	Energy::Energy();

	Energy::Energy(int id, int energy_ammount, int energy_price){
		this -> id = id;
		this -> energy_ammount = energy_ammount;
		this -> energy_price = energy_price;
	}
	
	bool operator<(Energy e1) { return getPrice() < e1.getPrice(); }

	/*static bool cmd(Energy e1, Energy e2)
	{
		return e1.getPrice() < e2.getPrice();
	}*/

	int Energy::getProducerId(){
		return id;
	}
	void Energy::setProducerId(int id){
		this->id = id;
	}
	int Energy::getAmmount(){
		return energy_ammount;
	}
	void Energy::setAmount(int ammount){
		this->energy_ammount = ammount;
	}
	int Energy::getPrice(){
		return energy_price;
	}

	static void add_energy(int id, int energy_ammount, int energy_price, std::string source);
	static void remove_energy(int id, int energy_ammount);
	static void getCentralBufferStatus();
	//Energy::~Energy();
};
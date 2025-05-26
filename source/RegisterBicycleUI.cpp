#include "RegisterBicycleUI.h"
using namespace std;

void RegisterBicycleUI::startInterface() 
{
	typeBicycleInfo();
}
void RegisterBicycleUI::typeBicycleInfo() 
{
	RegisterBicycle registerbicycle;

	string bicycle_id, bicycle_name;
	in_fp >> bicycle_id >> bicycle_name;
	registerbicycle.addBicycle(bicycle_id, bicycle_name);
}
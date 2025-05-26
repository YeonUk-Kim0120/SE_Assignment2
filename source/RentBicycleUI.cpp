#include "RentBicycleUI.h"

using namespace std;

void RentBicycleUI::startInterface() 
{
	chooseBicycle();
}
void RentBicycleUI::chooseBicycle() 
{
	RentBicycle rentbicycle;
	
	string bicycle_id;
	in_fp >> bicycle_id;
	rentbicycle.rentBicycle(bicycle_id);
}
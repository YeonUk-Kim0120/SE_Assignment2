#include "RentBicycle.h"
using namespace std;

void RentBicycle::rentBicycle(string bicycle_id) 
{
	string name = BicycleCollection::getBicycle(bicycle_id);

	out_fp << "4.1. 자전거 대여" << endl;
	out_fp << "> " << bicycle_id << " " << name << endl;
	out_fp << endl;
}

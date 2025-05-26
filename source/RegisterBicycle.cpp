#include "RegisterBicycle.h"
using namespace std;

void RegisterBicycle::addBicycle(string bicycle_id, string bicycle_name) 
{
	Bicycle bicycle( bicycle_id,  bicycle_name);
	bicycle.addBicycle( bicycle_id,  bicycle_name);
}

#include "Bicycle.h"
#include "BicycleCollection.h"
using namespace std;

Bicycle::Bicycle(string id, string name)
    : bicycle_id(id), bicycle_name(name) {}

void Bicycle::addBicycle(string bicycle_id, string bicycle_name)
{
    BicycleCollection bicyclecollection;
    bicyclecollection.addBicycle(bicycle_id, bicycle_name);
    
    out_fp << "3.1. 자전거 등록" << endl;
    out_fp << "> " << bicycle_id << " " << bicycle_name << endl;
    out_fp << endl;
}
string Bicycle::getId() const {
    return bicycle_id;
}

string Bicycle::getName() const {
    return bicycle_name;
}


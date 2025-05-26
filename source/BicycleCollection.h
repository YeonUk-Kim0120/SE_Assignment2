#pragma once
#include <vector>
#include <string>
#include "Bicycle.h"
using namespace std;

class BicycleCollection 
{
private:
    static vector<Bicycle*> bicycleList;
public:
    static void addBicycle(string bicycle_id, string bicycle_name);
    static string getBicycle(const string& id);
    vector<Bicycle*> getAllBicycles() const;
};
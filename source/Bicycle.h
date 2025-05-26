#pragma once
#include <string>
#include "IOManager.h"

using namespace std;

class Bicycle {
private:
    string bicycle_id;
    string bicycle_name;

public:
    Bicycle(string bicycle_id, string bicycle_name);
    void addBicycle(string bicycle_id, string bicycle_name);
    string getId() const;     // 
    string getName() const;   // 
};

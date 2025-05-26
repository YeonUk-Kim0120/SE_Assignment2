#include "BicycleCollection.h"
using namespace std;

vector<Bicycle*> BicycleCollection::bicycleList = {};

void BicycleCollection::addBicycle(string bicycle_id, string bicycle_name) {
    bicycleList.push_back(new Bicycle(bicycle_id, bicycle_name));
}

string BicycleCollection::getBicycle(const string& id) {
    for (auto b : bicycleList) {
        if (b->getId() == id) {
            return b->getName();
        }
    }
    return "해당 ID의 자전거를 찾을 수 없습니다.";
}

vector<Bicycle*> BicycleCollection::getAllBicycles() const {
    return bicycleList;
}
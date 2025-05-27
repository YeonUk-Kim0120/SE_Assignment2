#pragma once
#include <fstream>
#include <string>
#include "RegisterBicycle.h"
#include "Bicycle.h"
#include "BicycleCollection.h"

using namespace std;

/*
 * RegisterBicycle 클래스 선언
 * 자전거 등록 기능 제공
 */
class RegisterBicycle {
public:
    void addBicycle(string bicycle_id, string bicycle_name);
};
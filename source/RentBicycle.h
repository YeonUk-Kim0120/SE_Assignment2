#pragma once
#include <fstream>
#include <string>
#include <stdio.h>
#include "BicycleCollection.h"

using namespace std;

/*
 * RentBicycle 클래스 선언
 * 자전거 대여 처리 기능 제공
 */
class RentBicycle {
public:
    void rentBicycle(string bicycle_id);
};
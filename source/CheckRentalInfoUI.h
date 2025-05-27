#pragma once
#include <string>
#include "BicycleCollection.h"
#include <vector>
#include <algorithm>

using namespace std;

/*
 * CheckRentalInfoUI 클래스 선언
 * 자전거 대여 정보 출력 UI 기능 제공
 */
class CheckRentalInfoUI {
public:
    void startInterface(const BicycleCollection& collection);
};
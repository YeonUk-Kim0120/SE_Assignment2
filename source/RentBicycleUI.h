#pragma once
#include <fstream>
#include <string>
#include "IOManager.h"
#include "RentBicycle.h"

using namespace std;

/*
 * RentBicycleUI 클래스 선언
 * 자전거 대여 UI(입력 및 메뉴 처리) 기능 제공
 */
class RentBicycleUI {
public:
    void startInterface();
    void chooseBicycle();
};
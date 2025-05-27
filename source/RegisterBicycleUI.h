#pragma once
#include <fstream>
#include <string>
#include "RegisterBicycle.h"
#include "IOManager.h"

using namespace std;

/*
 * RegisterBicycleUI 클래스 선언
 * 자전거 등록 UI(입력 및 메뉴 처리) 기능 제공
 */
class RegisterBicycleUI {
public:
    void startInterface();
    void typeBicycleInfo();
};
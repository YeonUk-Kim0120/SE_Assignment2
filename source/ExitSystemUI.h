#pragma once
#include <string>
#include "ExitSystem.h"
#include "IOManager.h"

using namespace std;

/*
 * ExitSystemUI 클래스 선언
 * 시스템 종료 UI 기능(메뉴 처리) 제공
 */
class ExitSystemUI {
public:
    void startInterface();
    void exitSystem();
};
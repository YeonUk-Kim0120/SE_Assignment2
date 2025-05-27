#pragma once
#include <fstream>
#include <string>
#include "IOManager.h"
#include "LogIn.h"

using namespace std;

/*
 * LogInUI 클래스 선언
 * 로그인 UI(입력, 인증 등) 담당
 */
class LogInUI {
public:
    void startInterface();
    void typeLogInInfo();
};
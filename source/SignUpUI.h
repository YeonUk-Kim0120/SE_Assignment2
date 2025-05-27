#pragma once
#include <fstream>
#include <string>
#include "IOManager.h"
#include "SignUp.h"

using namespace std;

/*
 * SignUpUI 클래스 선언
 * 회원가입 UI(입력 및 메뉴 처리) 기능 제공
 */
class SignUpUI {
public:
    void startInterface();
    void typeSignUpInfo();
};


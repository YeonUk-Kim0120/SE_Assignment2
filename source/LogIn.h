#pragma once
#include <fstream>
#include <string>
#include "Member.h"

using namespace std;

/*
 * LogIn 클래스 선언
 * 로그인 기능(입력받은 회원정보로 인증) 제공
 */
class LogIn {
public:
    void doLogIn(string member_id, string member_password);
};

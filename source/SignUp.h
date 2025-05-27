#pragma once
#include <fstream>
#include <string>
#include "Member.h"

using namespace std;

/*
 * SignUp 클래스 선언
 * 회원가입 기능 제공
 */

class SignUp {
public:
	void addNewMember(string member_id, string member_password, string member_phone);
};
#pragma once
#include <fstream>
#include <string>
#include "Member.h"

using namespace std;

/*
 * SignUp Ŭ���� ����
 * ȸ������ ��� ����
 */

class SignUp {
public:
	void addNewMember(string member_id, string member_password, string member_phone);
};
#include "LogInUI.h"

using namespace std;

/*
 * UI ���� �Լ�
 * �α��� �Է� ������ �����Ѵ�.
 */
void LogInUI::startInterface() {
	typeLogInInfo();
}

/*
 * �α��� ���� �Է� �� ó�� �Լ�
 * ����ڷκ��� ID�� ��й�ȣ�� �Է¹޾� �α����� �����Ѵ�.
 */
void LogInUI::typeLogInInfo() {
	LogIn login;
	
	string member_id, member_password;
	in_fp >> member_id >> member_password;
	login.doLogIn(member_id, member_password);
}

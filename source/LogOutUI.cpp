#include "LogOutUI.h"

using namespace std;

/*
 * UI ���� �Լ�
 * �α׾ƿ� ó���� �����Ѵ�.
 */
void LogOutUI::startInterface() {
	logOut();
}

/*
 * �α׾ƿ� ó�� �Լ�
 * LogOut ��ü�� ���� ���� �α׾ƿ� ������ �����Ѵ�.
 */
void LogOutUI::logOut() {
	LogOut logout;
	logout.doLogOut();
}
#include "LogOutUI.h"

using namespace std;

/*
 * UI 시작 함수
 * 로그아웃 처리를 실행한다.
 */
void LogOutUI::startInterface() {
	logOut();
}

/*
 * 로그아웃 처리 함수
 * LogOut 객체를 통해 실제 로그아웃 동작을 수행한다.
 */
void LogOutUI::logOut() {
	LogOut logout;
	logout.doLogOut();
}
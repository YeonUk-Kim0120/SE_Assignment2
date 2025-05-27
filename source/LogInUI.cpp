#include "LogInUI.h"

using namespace std;

/*
 * UI 시작 함수
 * 로그인 입력 과정을 실행한다.
 */
void LogInUI::startInterface() {
	typeLogInInfo();
}

/*
 * 로그인 정보 입력 및 처리 함수
 * 사용자로부터 ID와 비밀번호를 입력받아 로그인을 수행한다.
 */
void LogInUI::typeLogInInfo() {
	LogIn login;
	
	string member_id, member_password;
	in_fp >> member_id >> member_password;
	login.doLogIn(member_id, member_password);
}

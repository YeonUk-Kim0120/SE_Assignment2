#include "SignUpUI.h"

using namespace std;

/*
 * UI 시작 함수
 * 회원 정보 입력 과정을 실행한다.
 */
void SignUpUI::startInterface() {
	typeSignUpInfo();
}

/*
 * 회원 정보 입력 및 가입 처리 함수
 * 입력 파일에서 ID, 비밀번호, 전화번호를 읽어 회원 등록 기능을 호출한다.
 */
void SignUpUI::typeSignUpInfo() {
	SignUp signup;

	string member_id, member_password, member_phone;
	in_fp >> member_id >> member_password >> member_phone;
	signup.addNewMember(member_id, member_password, member_phone);
}


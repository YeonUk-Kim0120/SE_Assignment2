#include "LogIn.h"

using namespace std;

/*
 * 로그인 처리 함수
 * @param member_id : 입력된 회원 ID
 * @param member_password : 입력된 회원 비밀번호
 *
 * 회원 정보를 검증 후, 인증 성공 시 로그인 처리
 */
void LogIn::doLogIn(string member_id, string member_password) {
	Member member(member_id, member_password, "00000000000");
	if (member.verifyInfo(member_id, member_password)) {
		member.memberLogIn(member_id, member_password);
	}
}


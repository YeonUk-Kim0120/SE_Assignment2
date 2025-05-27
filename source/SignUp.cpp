#include "SignUp.h"

using namespace std;

/*
 * 회원 등록 함수
 * @param member_id      : 신규 회원 ID
 * @param member_password: 신규 회원 비밀번호
 * @param member_phone   : 신규 회원 전화번호
 * Member 객체를 생성해 회원 등록 기능을 호출한다.
 */
void SignUp::addNewMember(string member_id, string member_password, string member_phone) {
	Member member(member_id, member_password, member_phone);
	member.addNewMember(member_id, member_password, member_phone);
}


#include "LogOut.h"

using namespace std;

/*
 * 로그아웃 처리 함수
 * 현재 로그인된 멤버를 찾아 로그아웃 처리 후, 현재 멤버 포인터를 nullptr로 변경
 */
void LogOut::doLogOut() {
	Member* member = Member::getCurrentMember();  
	member->memberLogOut(); // 파라미터에 현재 로그인된 멤버의 아이디를 넣어주기.
	Member::setCurrentMember(nullptr);
}
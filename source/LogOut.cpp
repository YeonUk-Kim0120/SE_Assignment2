#include "LogOut.h"
using namespace std;

void LogOut::doLogOut() 
{
	Member* member = Member::getCurrentMember();  
	member->memberLogOut(); // 파라미터에 현재 로그인된 멤버의 아이디를 넣어주기.
	Member::setCurrentMember(nullptr);
}
#include "LogOut.h"
using namespace std;

void LogOut::doLogOut() 
{
	Member* member = Member::getCurrentMember();  
	member->memberLogOut(); // �Ķ���Ϳ� ���� �α��ε� ����� ���̵� �־��ֱ�.
	Member::setCurrentMember(nullptr);
}
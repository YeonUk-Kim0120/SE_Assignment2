#include "LogOut.h"

using namespace std;

/*
 * �α׾ƿ� ó�� �Լ�
 * ���� �α��ε� ����� ã�� �α׾ƿ� ó�� ��, ���� ��� �����͸� nullptr�� ����
 */
void LogOut::doLogOut() {
	Member* member = Member::getCurrentMember();  
	member->memberLogOut(); // �Ķ���Ϳ� ���� �α��ε� ����� ���̵� �־��ֱ�.
	Member::setCurrentMember(nullptr);
}
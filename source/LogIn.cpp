#include "LogIn.h"

using namespace std;

/*
 * �α��� ó�� �Լ�
 * @param member_id : �Էµ� ȸ�� ID
 * @param member_password : �Էµ� ȸ�� ��й�ȣ
 *
 * ȸ�� ������ ���� ��, ���� ���� �� �α��� ó��
 */
void LogIn::doLogIn(string member_id, string member_password) {
	Member member(member_id, member_password, "00000000000");
	if (member.verifyInfo(member_id, member_password)) {
		member.memberLogIn(member_id, member_password);
	}
}


#include "SignUp.h"

using namespace std;

/*
 * ȸ�� ��� �Լ�
 * @param member_id      : �ű� ȸ�� ID
 * @param member_password: �ű� ȸ�� ��й�ȣ
 * @param member_phone   : �ű� ȸ�� ��ȭ��ȣ
 * Member ��ü�� ������ ȸ�� ��� ����� ȣ���Ѵ�.
 */
void SignUp::addNewMember(string member_id, string member_password, string member_phone) {
	Member member(member_id, member_password, member_phone);
	member.addNewMember(member_id, member_password, member_phone);
}


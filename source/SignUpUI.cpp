#include "SignUpUI.h"

using namespace std;

/*
 * UI ���� �Լ�
 * ȸ�� ���� �Է� ������ �����Ѵ�.
 */
void SignUpUI::startInterface() {
	typeSignUpInfo();
}

/*
 * ȸ�� ���� �Է� �� ���� ó�� �Լ�
 * �Է� ���Ͽ��� ID, ��й�ȣ, ��ȭ��ȣ�� �о� ȸ�� ��� ����� ȣ���Ѵ�.
 */
void SignUpUI::typeSignUpInfo() {
	SignUp signup;

	string member_id, member_password, member_phone;
	in_fp >> member_id >> member_password >> member_phone;
	signup.addNewMember(member_id, member_password, member_phone);
}


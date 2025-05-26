#include "SignUpUI.h"
using namespace std;

void SignUpUI::startInterface() 
{
	typeSignUpInfo();
}
void SignUpUI::typeSignUpInfo() 
{
	SignUp signup;

	string member_id, member_password, member_phone;
	in_fp >> member_id >> member_password >> member_phone;
	signup.addNewMember(member_id, member_password, member_phone);
}


#include "LogInUI.h"
using namespace std;

void LogInUI::startInterface() 
{
	typeLogInInfo();
}
void LogInUI::typeLogInInfo() 
{
	LogIn login;
	
	string member_id, member_password;
	in_fp >> member_id >> member_password;
	login.doLogIn(member_id, member_password);
}

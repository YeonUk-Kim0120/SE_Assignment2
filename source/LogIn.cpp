#include "LogIn.h"
using namespace std;

void LogIn::doLogIn(string member_id, string member_password) 
{
	Member member(member_id, member_password, "00000000000");
	if (member.verifyInfo(member_id, member_password))
	{
		member.memberLogIn(member_id, member_password);
	}

}


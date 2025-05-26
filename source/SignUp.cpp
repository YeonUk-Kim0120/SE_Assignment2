#include "SignUp.h"
using namespace std;

void SignUp::addNewMember(string member_id, string member_password, string member_phone)
{
	Member member(member_id, member_password, member_phone);
	member.addNewMember(member_id, member_password, member_phone);
}


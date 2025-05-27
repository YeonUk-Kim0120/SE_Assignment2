#include "Member.h"

using namespace std;

/*
 * Member Ŭ���� ���� ����
 * - ȸ�� ���� ����, ȸ�� ����Ʈ, �α���/�α׾ƿ� �� ��� ����
 */
vector<Member*> Member::memberList = {
    new Member("admin", "admin", "00000000000")
};

Member* Member::currentMember = nullptr;

void Member::setCurrentMember(Member* m) {
    currentMember = m;
}

Member* Member::getCurrentMember() {
    return currentMember;
}

Member::Member(string id, string pw, string phone)
    : memberId(id), password(pw), phoneNumber(phone) {}

/*
 * �ű� ȸ�� �߰�
 * - ȸ�� ��ü�� �����Ͽ� member_list_�� �߰�
 * - ȸ������ ����� ���Ϸ� ���
 */
void Member::addNewMember(string member_id, string member_password, string member_phone) {
    memberList.push_back(new Member(member_id, member_password, member_phone));
    out_fp << "1.1. ȸ������" << endl;
    out_fp << "> " << member_id << " " << member_password << " " << member_phone << endl;
    out_fp << endl;
}

/*
 * �Է��� ������ ��ġ�ϴ� ȸ���� �ִ��� ����
 * - ���� �� �ش� ����� current_member_�� �����ϰ� true ��ȯ
 */
bool Member::verifyInfo(string member_id, string member_password) {
    for (Member* m : memberList) {
        if (m->memberId == member_id && m->password == member_password) {
            currentMember = m;
            return true;
        }
    }
    return false;
}

void Member::memberLogIn(string member_id, string member_password) {
    out_fp << "2.1. �α���" << endl;
    out_fp << "> " << member_id << " " << member_password << endl;
    out_fp << endl;
}

void Member::memberLogOut() {
    out_fp << "2.2. �α׾ƿ�" << endl;
    out_fp << "> " << currentMember->memberId << endl;
    out_fp << endl;
}

string Member::bicycleRent(Bicycle* bicycle) {
    return ""; 
}

BicycleCollection Member::getRentingBicycle() {
    return rentingBicycleCollection; 
}

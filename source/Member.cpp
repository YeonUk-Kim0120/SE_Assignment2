#include "Member.h"

using namespace std;

/*
 * Member 클래스 구현 파일
 * - 회원 정보 관리, 회원 리스트, 로그인/로그아웃 등 기능 구현
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
 * 신규 회원 추가
 * - 회원 객체를 생성하여 member_list_에 추가
 * - 회원가입 결과를 파일로 출력
 */
void Member::addNewMember(string member_id, string member_password, string member_phone) {
    memberList.push_back(new Member(member_id, member_password, member_phone));
    out_fp << "1.1. 회원가입" << endl;
    out_fp << "> " << member_id << " " << member_password << " " << member_phone << endl;
    out_fp << endl;
}

/*
 * 입력한 정보와 일치하는 회원이 있는지 검증
 * - 성공 시 해당 멤버를 current_member_로 지정하고 true 반환
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
    out_fp << "2.1. 로그인" << endl;
    out_fp << "> " << member_id << " " << member_password << endl;
    out_fp << endl;
}

void Member::memberLogOut() {
    out_fp << "2.2. 로그아웃" << endl;
    out_fp << "> " << currentMember->memberId << endl;
    out_fp << endl;
}

string Member::bicycleRent(Bicycle* bicycle) {
    return ""; 
}

BicycleCollection Member::getRentingBicycle() {
    return rentingBicycleCollection; 
}

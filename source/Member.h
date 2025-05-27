#pragma once
#include <string>
#include <vector>
#include "BicycleCollection.h"
#include "IOManager.h"

using namespace std;

/*
 * Member 클래스 선언
 * 회원 정보, 인증, 로그인/로그아웃, 대여 목록 관리 기능 제공
 */
class Member {
private:
    string memberId;
    string password;
    string phoneNumber;
    BicycleCollection rentingBicycleCollection;

    static vector<Member*> memberList;
    static Member* currentMember;

public:
    Member(string member_id, string member_password, string member_phone);

    void addNewMember(string member_id, string member_password, string member_phone);
    bool verifyInfo(string member_id, string member_password);
    void memberLogIn(string member_id, string member_password);
    void memberLogOut();
    
    static void setCurrentMember(Member* m);
    static Member* getCurrentMember();

    string bicycleRent(Bicycle* bicycle);
    BicycleCollection getRentingBicycle();
};
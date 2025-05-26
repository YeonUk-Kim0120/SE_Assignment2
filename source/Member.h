#pragma once
#include <string>
#include "BicycleCollection.h"
#include "IOManager.h"

using namespace std;

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
#pragma once
#include <string>
#include "IOManager.h"

using namespace std;

/*
 * Bicycle 클래스 선언
 * 자전거의 고유 ID, 이름 정보 및 관련 기능 제공
 */
class Bicycle {
private:
    string bicycle_id;
    string bicycle_name;

public:
    Bicycle(string bicycle_id, string bicycle_name);
    void addBicycle(string bicycle_id, string bicycle_name);
    string getId() const;   
    string getName() const;   
};

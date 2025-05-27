#pragma once
#include <vector>
#include <string>
#include "Bicycle.h"

using namespace std;

/*
 * BicycleCollection 클래스 선언
 * 자전거 객체(Bicycle)들의 목록 관리 및 검색 기능 제공
 */
class BicycleCollection {
private:
    static vector<Bicycle*> bicycleList;

public:
    static void addBicycle(string bicycle_id, string bicycle_name);
    static string getBicycle(const string& id);
    vector<Bicycle*> getAllBicycles() const;
};
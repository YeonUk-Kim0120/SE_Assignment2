#pragma once
#include <fstream>
#include <string>
#include "RegisterBicycle.h"
#include "Bicycle.h"
#include "BicycleCollection.h"

using namespace std;

/*
 * RegisterBicycle Ŭ���� ����
 * ������ ��� ��� ����
 */
class RegisterBicycle {
public:
    void addBicycle(string bicycle_id, string bicycle_name);
};
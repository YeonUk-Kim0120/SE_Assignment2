#pragma once
#include <string>
#include "BicycleCollection.h"
#include <vector>
#include <algorithm>

using namespace std;

/*
 * CheckRentalInfoUI Ŭ���� ����
 * ������ �뿩 ���� ��� UI ��� ����
 */
class CheckRentalInfoUI {
public:
    void startInterface(const BicycleCollection& collection);
};
#include "CheckRentalInfoUI.h"
using namespace std;

void CheckRentalInfoUI::startInterface(const BicycleCollection& collection) 
{
    vector<Bicycle*> list = collection.getAllBicycles();

    // 2. id 기준으로 정렬
    sort(list.begin(), list.end(), [](Bicycle* a, Bicycle* b) {
        return a->getId() < b->getId();
        });

    // 3. 출력
    out_fp << "5.1. 대여 리스트" << endl;
    for (auto b : list) {
        out_fp << "> " << b->getId() << " " << b->getName() << endl;
    }
    out_fp << endl;
}

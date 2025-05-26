#include "CheckRentalInfoUI.h"
using namespace std;

void CheckRentalInfoUI::startInterface(const BicycleCollection& collection) 
{
    vector<Bicycle*> list = collection.getAllBicycles();

    // 2. id �������� ����
    sort(list.begin(), list.end(), [](Bicycle* a, Bicycle* b) {
        return a->getId() < b->getId();
        });

    // 3. ���
    out_fp << "5.1. �뿩 ����Ʈ" << endl;
    for (auto b : list) {
        out_fp << "> " << b->getId() << " " << b->getName() << endl;
    }
    out_fp << endl;
}

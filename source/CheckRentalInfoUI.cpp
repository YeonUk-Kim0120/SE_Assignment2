#include "CheckRentalInfoUI.h"

using namespace std;

/*
 * ������ �뿩 ����Ʈ ��� �Լ�
 * @param collection : BicycleCollection�� const ����, ������ ��ü ����
 *
 * 1. ��� ������ ������ ����Ʈ�� ����
 * 2. ������ ID �������� ����
 * 3. ���ĵ� ����Ʈ�� ������ �������� ���
 */
void CheckRentalInfoUI::startInterface(const BicycleCollection& collection) {
    vector<Bicycle*> list = collection.getAllBicycles();
    
    sort(list.begin(), list.end(), [](Bicycle* a, Bicycle* b) {
        return a->getId() < b->getId();
        });

    out_fp << "5.1. ������ �뿩 ����Ʈ" << endl;
    for (auto b : list) {
        out_fp << "> " << b->getId() << " " << b->getName() << endl;
    }
    out_fp << endl;
}

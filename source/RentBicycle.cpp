#include "RentBicycle.h"

using namespace std;

/*
 * ������ �뿩 ó�� �Լ�
 * @param bicycle_id : �뿩�� ������ ID
 * BicycleCollection�� ���� �̸��� ��ȸ �� �뿩 ����� ���Ϸ� ����Ѵ�.
 */
void RentBicycle::rentBicycle(string bicycle_id) {
	string name = BicycleCollection::getBicycle(bicycle_id);

	out_fp << "4.1. ������ �뿩" << endl;
	out_fp << "> " << bicycle_id << " " << name << endl;
	out_fp << endl;
}

#include "RentBicycleUI.h"

using namespace std;

/*
 * UI ���� �Լ�
 * ������ ����(�뿩) �Է� ������ �����Ѵ�.
 */
void RentBicycleUI::startInterface() {
	chooseBicycle();
}

/*
 * ������ ���� �� �뿩 �Լ�
 * �Է� ���Ͽ��� ������ ID�� �о� �뿩 ����� ȣ���Ѵ�.
 */
void RentBicycleUI::chooseBicycle() {
	RentBicycle rentbicycle;
	
	string bicycle_id;
	in_fp >> bicycle_id;
	rentbicycle.rentBicycle(bicycle_id);
}
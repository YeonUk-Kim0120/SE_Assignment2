#include "RegisterBicycleUI.h"

using namespace std;

/*
 * UI ���� �Լ�
 * ������ ���� �Է� ������ �����Ѵ�.
 */
void RegisterBicycleUI::startInterface() {
	typeBicycleInfo();
}

/*
 * ������ ���� �Է� �� ��� �Լ�
 * �Է� ���Ͽ��� ID, �̸��� �о� ������ ��� ����� ȣ���Ѵ�.
 */
void RegisterBicycleUI::typeBicycleInfo() {
	RegisterBicycle registerbicycle;

	string bicycle_id, bicycle_name;
	in_fp >> bicycle_id >> bicycle_name;
	registerbicycle.addBicycle(bicycle_id, bicycle_name);
}
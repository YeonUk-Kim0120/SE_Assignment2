#include "RegisterBicycle.h"

using namespace std;

/*
 * ������ ��� �Լ�
 * @param bicycle_id   : ����� ������ ID
 * @param bicycle_name : ����� ������ �̸�
 * ������ ��ü�� �����ϰ�, Bicycle�� addBicycle �Լ� ȣ��� �÷��ǿ� ����Ѵ�.
 */
void RegisterBicycle::addBicycle(string bicycle_id, string bicycle_name) {
	Bicycle bicycle( bicycle_id,  bicycle_name);
	bicycle.addBicycle( bicycle_id,  bicycle_name);
}

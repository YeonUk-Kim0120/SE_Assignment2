#include "Bicycle.h"
#include "BicycleCollection.h"

using namespace std;

Bicycle::Bicycle(string id, string name)
    : bicycle_id(id), bicycle_name(name) {}

/*
 * ������ ��� �Լ�.
 * ���ο� ������ ������ BicycleCollection�� �߰��Ѵ�.
 * ����� �Ϸ�Ǹ� ����� ���Ϸ� ����Ѵ�.
 *
 * bicycle_id   : ����� �������� ���� ID
 * bicycle_name : ����� �������� �̸� �Ǵ� ��ǰ��
 */
void Bicycle::addBicycle(string bicycle_id, string bicycle_name){
    BicycleCollection bicyclecollection;
    bicyclecollection.addBicycle(bicycle_id, bicycle_name);
    
    out_fp << "3.1. ������ ���" << endl;
    out_fp << "> " << bicycle_id << " " << bicycle_name << endl;
    out_fp << endl;
}

/*
 * ������ ID�� ��ȯ�Ѵ�.
 * ��ȯ��: �������� ���� ID (std::string)
 */
string Bicycle::getId() const {
    return bicycle_id;
}

/*
 * ������ �̸��� ��ȯ�Ѵ�.
 * ��ȯ��: �������� �̸� �Ǵ� ��ǰ�� (std::string)
 */
string Bicycle::getName() const {
    return bicycle_name;
}


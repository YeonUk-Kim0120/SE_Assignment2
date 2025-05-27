#include "BicycleCollection.h"

using namespace std;

vector<Bicycle*> BicycleCollection::bicycleList = {};

/*
 * ������ �߰� �Լ�
 * ���ο� ������ ��ü�� �����Ͽ� bicycle_list_�� �߰��Ѵ�.
 *
 * @param bicycle_id   : ����� �������� ���� ID
 * @param bicycle_name : ����� �������� �̸�(��ǰ��)
 */
void BicycleCollection::addBicycle(string bicycle_id, string bicycle_name) {
    bicycleList.push_back(new Bicycle(bicycle_id, bicycle_name));
}

/*
 * ������ �̸� �˻� �Լ�
 * ID�� �����Ÿ� �˻��Ͽ� �ش� �������� �̸��� ��ȯ�Ѵ�.
 * ��ġ�ϴ� �����Ű� ������ ���� �޽����� ��ȯ�Ѵ�.
 *
 * @param id : �˻��� �������� ���� ID
 * @return   : ������ �̸�(��ǰ��) �Ǵ� ���� �޽���
 */
string BicycleCollection::getBicycle(const string& id) {
    for (auto b : bicycleList) {
        if (b->getId() == id) {
            return b->getName();
        }
    }
    return "�ش� ID�� �����Ÿ� ã�� �� �����ϴ�.";
}

/*
 * ��� ������ ��ü ����Ʈ ��ȯ �Լ�
 * ��ϵ� ��� ������ ��ü �����͸� ���ͷ� ��ȯ�Ѵ�.
 *
 * @return : Bicycle* �������� std::vector
 */
vector<Bicycle*> BicycleCollection::getAllBicycles() const {
    return bicycleList;
}
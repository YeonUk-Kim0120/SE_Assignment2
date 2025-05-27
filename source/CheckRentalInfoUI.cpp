#include "CheckRentalInfoUI.h"

using namespace std;

/*
 * 자전거 대여 리스트 출력 함수
 * @param collection : BicycleCollection의 const 참조, 자전거 전체 정보
 *
 * 1. 모든 자전거 포인터 리스트를 복사
 * 2. 자전거 ID 기준으로 정렬
 * 3. 정렬된 리스트를 지정된 형식으로 출력
 */
void CheckRentalInfoUI::startInterface(const BicycleCollection& collection) {
    vector<Bicycle*> list = collection.getAllBicycles();
    
    sort(list.begin(), list.end(), [](Bicycle* a, Bicycle* b) {
        return a->getId() < b->getId();
        });

    out_fp << "5.1. 자전거 대여 리스트" << endl;
    for (auto b : list) {
        out_fp << "> " << b->getId() << " " << b->getName() << endl;
    }
    out_fp << endl;
}

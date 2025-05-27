#include "BicycleCollection.h"

using namespace std;

vector<Bicycle*> BicycleCollection::bicycleList = {};

/*
 * 자전거 추가 함수
 * 새로운 자전거 객체를 생성하여 bicycle_list_에 추가한다.
 *
 * @param bicycle_id   : 등록할 자전거의 고유 ID
 * @param bicycle_name : 등록할 자전거의 이름(제품명)
 */
void BicycleCollection::addBicycle(string bicycle_id, string bicycle_name) {
    bicycleList.push_back(new Bicycle(bicycle_id, bicycle_name));
}

/*
 * 자전거 이름 검색 함수
 * ID로 자전거를 검색하여 해당 자전거의 이름을 반환한다.
 * 일치하는 자전거가 없으면 에러 메시지를 반환한다.
 *
 * @param id : 검색할 자전거의 고유 ID
 * @return   : 자전거 이름(제품명) 또는 에러 메시지
 */
string BicycleCollection::getBicycle(const string& id) {
    for (auto b : bicycleList) {
        if (b->getId() == id) {
            return b->getName();
        }
    }
    return "해당 ID의 자전거를 찾을 수 없습니다.";
}

/*
 * 모든 자전거 객체 리스트 반환 함수
 * 등록된 모든 자전거 객체 포인터를 벡터로 반환한다.
 *
 * @return : Bicycle* 포인터의 std::vector
 */
vector<Bicycle*> BicycleCollection::getAllBicycles() const {
    return bicycleList;
}
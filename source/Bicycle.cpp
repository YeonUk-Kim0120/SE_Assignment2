#include "Bicycle.h"
#include "BicycleCollection.h"

using namespace std;

Bicycle::Bicycle(string id, string name)
    : bicycle_id(id), bicycle_name(name) {}

/*
 * 자전거 등록 함수.
 * 새로운 자전거 정보를 BicycleCollection에 추가한다.
 * 등록이 완료되면 결과를 파일로 출력한다.
 *
 * bicycle_id   : 등록할 자전거의 고유 ID
 * bicycle_name : 등록할 자전거의 이름 또는 제품명
 */
void Bicycle::addBicycle(string bicycle_id, string bicycle_name){
    BicycleCollection bicyclecollection;
    bicyclecollection.addBicycle(bicycle_id, bicycle_name);
    
    out_fp << "3.1. 자전거 등록" << endl;
    out_fp << "> " << bicycle_id << " " << bicycle_name << endl;
    out_fp << endl;
}

/*
 * 자전거 ID를 반환한다.
 * 반환값: 자전거의 고유 ID (std::string)
 */
string Bicycle::getId() const {
    return bicycle_id;
}

/*
 * 자전거 이름을 반환한다.
 * 반환값: 자전거의 이름 또는 제품명 (std::string)
 */
string Bicycle::getName() const {
    return bicycle_name;
}


#include "RegisterBicycle.h"

using namespace std;

/*
 * 자전거 등록 함수
 * @param bicycle_id   : 등록할 자전거 ID
 * @param bicycle_name : 등록할 자전거 이름
 * 자전거 객체를 생성하고, Bicycle의 addBicycle 함수 호출로 컬렉션에 등록한다.
 */
void RegisterBicycle::addBicycle(string bicycle_id, string bicycle_name) {
	Bicycle bicycle( bicycle_id,  bicycle_name);
	bicycle.addBicycle( bicycle_id,  bicycle_name);
}

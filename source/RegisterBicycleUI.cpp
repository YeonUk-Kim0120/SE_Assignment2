#include "RegisterBicycleUI.h"

using namespace std;

/*
 * UI 시작 함수
 * 자전거 정보 입력 과정을 실행한다.
 */
void RegisterBicycleUI::startInterface() {
	typeBicycleInfo();
}

/*
 * 자전거 정보 입력 및 등록 함수
 * 입력 파일에서 ID, 이름을 읽어 자전거 등록 기능을 호출한다.
 */
void RegisterBicycleUI::typeBicycleInfo() {
	RegisterBicycle registerbicycle;

	string bicycle_id, bicycle_name;
	in_fp >> bicycle_id >> bicycle_name;
	registerbicycle.addBicycle(bicycle_id, bicycle_name);
}
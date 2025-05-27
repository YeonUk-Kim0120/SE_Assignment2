#include "RentBicycleUI.h"

using namespace std;

/*
 * UI 시작 함수
 * 자전거 선택(대여) 입력 과정을 실행한다.
 */
void RentBicycleUI::startInterface() {
	chooseBicycle();
}

/*
 * 자전거 선택 및 대여 함수
 * 입력 파일에서 자전거 ID를 읽어 대여 기능을 호출한다.
 */
void RentBicycleUI::chooseBicycle() {
	RentBicycle rentbicycle;
	
	string bicycle_id;
	in_fp >> bicycle_id;
	rentbicycle.rentBicycle(bicycle_id);
}
#include "RentBicycle.h"

using namespace std;

/*
 * 자전거 대여 처리 함수
 * @param bicycle_id : 대여할 자전거 ID
 * BicycleCollection을 통해 이름을 조회 후 대여 결과를 파일로 출력한다.
 */
void RentBicycle::rentBicycle(string bicycle_id) {
	string name = BicycleCollection::getBicycle(bicycle_id);

	out_fp << "4.1. 자전거 대여" << endl;
	out_fp << "> " << bicycle_id << " " << name << endl;
	out_fp << endl;
}

#include "ExitSystem.h"

using namespace std;

/*
 * 시스템 종료 메시지 출력 함수
 * "6.1. 종료"라는 메시지를 파일로 출력한다.
 */
void ExitSystem::exitSystem() { 
	out_fp << "6.1. 종료" << endl;
}

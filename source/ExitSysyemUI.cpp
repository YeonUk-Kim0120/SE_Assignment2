#include "ExitSystemUI.h"

using namespace std;

/*
 * UI 시작 함수
 * 시스템 종료 처리를 수행한다.
 */
void ExitSystemUI::startInterface() {
    exitSystem();
}

/*
 * 시스템 종료 함수
 * ExitSystem 객체를 생성하여 종료 동작을 실행한다.
 */
void ExitSystemUI::exitSystem() {
    ExitSystem exit_system;
    exit_system.exitSystem();
}
#include "ExitSystemUI.h"

using namespace std;

/*
 * UI ���� �Լ�
 * �ý��� ���� ó���� �����Ѵ�.
 */
void ExitSystemUI::startInterface() {
    exitSystem();
}

/*
 * �ý��� ���� �Լ�
 * ExitSystem ��ü�� �����Ͽ� ���� ������ �����Ѵ�.
 */
void ExitSystemUI::exitSystem() {
    ExitSystem exit_system;
    exit_system.exitSystem();
}
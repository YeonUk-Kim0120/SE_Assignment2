//��� ����
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <codecvt>
#include <locale>
#include "LogIn.h"
#include "LogOut.h"
#include "SignUp.h"
#include "RentBicycle.h"
#include "RegisterBicycle.h"
#include "ExitSystem.h"
#include "LogInUI.h"
#include "LogOutUI.h"
#include "SignUpUI.h"
#include "RentBicycleUI.h"
#include "RegisterBicycleUI.h"
#include "ExitSystemUI.h"
#include "CheckRentalInfoUI.h"

using namespace std;

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();

// ���� ����
ofstream out_fp;
ifstream in_fp;

/*
 * ���α׷� ������ (main �Լ�)
 * ����� ������ ����, ���� ����(doTask)�� ������ �� ������ �ݴ´�.
 */
int main() {
    in_fp.open(INPUT_FILE_NAME);
    out_fp.imbue(locale(locale(), new codecvt_utf8<wchar_t>));
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();

    out_fp.close();
    in_fp.close();

    return 0;
}

/*
 * ���α׷��� ���� ���� �Լ�
 * - �Է� ���Ͽ��� �޴� ����� �а�, �� ��ɿ� ���� ������ UI�� ȣ���Ѵ�.
 * - 6.1. ���� ����� ������ ������ ����������, ���� �޽����� ����Ѵ�.
 */
void doTask() {
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0;
    int menu_level_2 = 0;
    int is_program_exit = 0;
    

    while (!is_program_exit) {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;


        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1) {
        case 1:
            switch (menu_level_2) {
            case 1:   // "1.1. ȸ������" �޴� �κ�
                SignUpUI signup_ui;
                signup_ui.startInterface();
                break;
            }
            break;
        case 2:
            switch (menu_level_2) {
            case 1:   // "2.1. �α���" �޴� �κ�
                LogInUI login_ui;
                login_ui.startInterface();
                break;
            case 2:   // "2.2. �α׾ƿ�" �޴� �κ�
                LogOutUI logout_ui;
                logout_ui.startInterface();
                break;
            }
            break;
        case 3:
            switch (menu_level_2) {
            case 1:   // "3.1. ������ ���" �޴� �κ�
                RegisterBicycleUI registerbicycle_ui;
                registerbicycle_ui.startInterface();
                break;
            }
            break;
        case 4:
            switch (menu_level_2) {
            case 1:   // "4.1. ������ �뿩" �޴� �κ�
                RentBicycleUI rentbicycle_ui;
                rentbicycle_ui.startInterface();
                break;
            }
            break;
        case 5:
            switch (menu_level_2) {
            case 1:   // "5.1. ������ �뿩 ����Ʈ" �޴� �κ�
                Member * member = Member::getCurrentMember();
                CheckRentalInfoUI checkrentalinfo_ui;
                checkrentalinfo_ui.startInterface(member->getRentingBicycle());
                break;
            }
            break;
        case 6:
            switch (menu_level_2) {
            case 1:   // "6.1. ����" �޴� �κ�
                is_program_exit = 1;
                ExitSystemUI exit_system_ui;
                exit_system_ui.startInterface();
                break;
            }
            break;
        }
    }
}
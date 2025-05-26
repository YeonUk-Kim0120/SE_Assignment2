//헤더 선언
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

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();

// 변수 선언
ofstream out_fp;
ifstream in_fp;

int main()
{
    in_fp.open(INPUT_FILE_NAME);
    out_fp.imbue(locale(locale(), new codecvt_utf8<wchar_t>));
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();

    out_fp.close();
    in_fp.close();

    return 0;
}

void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0;
    int menu_level_2 = 0;
    int is_program_exit = 0;
    

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;


        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입" 메뉴 부분
                SignUpUI signup_ui;
                signup_ui.startInterface();
                break;
            }
            break;
        case 2:
            switch (menu_level_2)
            {
            case 1:   // "2.1. 로그인" 메뉴 부분
                LogInUI login_ui;
                login_ui.startInterface();
                break;
            case 2:   // "2.2. 로그아웃" 메뉴 부분
                LogOutUI logout_ui;
                logout_ui.startInterface();
                break;
            }
            break;
        case 3:
            switch (menu_level_2)
            {
            case 1:   // "3.1. 자전거 등록" 메뉴 부분
                RegisterBicycleUI registerbicycle_ui;
                registerbicycle_ui.startInterface();
                break;
            }
            break;
        case 4:
            switch (menu_level_2)
            {
            case 1:   // "4.1. 자전거 대여" 메뉴 부분
                RentBicycleUI rentbicycle_ui;
                rentbicycle_ui.startInterface();
                break;
            }
            break;
        case 5:
            switch (menu_level_2)
            {
            case 1:   // "5.1. 자전거 대여 리스트" 메뉴 부분
                Member * member = Member::getCurrentMember();
                CheckRentalInfoUI checkrentalinfo_ui;
                checkrentalinfo_ui.startInterface(member->getRentingBicycle());
                break;
            }
            break;
        case 6:
            switch (menu_level_2)
            {
            case 1:   // "6.1. 종료" 메뉴 부분
                is_program_exit = 1;
                ExitSystemUI exit_system_ui;
                exit_system_ui.startInterface();
                break;
            }
            break;
        }
    }
}
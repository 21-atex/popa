#include <iostream>
#define underline 

using namespace std;

int main() {
    setlocale(0, "");

    //����������
    string username_1;
    string username_2;
    string otstup = "\t\t\t\t\t";
    string litotstup = "\t\t\t";
    string underlined = "\x1b[4m";
    string unform = "\x1b[0m";
    int main_menu = 0;
    int setting_menu;
    string exit;
    int popa;

    //�����
    string textcolor_off = "\x1b[0m";
    string textclolor_br = "\x1b[91m";
    string textclolor_bg = "\x1b[92m";
    string textclolor_by = "\x1b[93m";
    string textclolor_bw = "\x1b[97m";
    string mm_color = "\x1b[0m";

    while (main_menu == 0 || main_menu == 1 || main_menu == 2 || main_menu == 3) {
        system("cls");
        cout << "\n\n\n";
        cout << otstup << underlined << "������������ ��� � ���� \"�������� ������\"!" << unform << endl;
        cout << "\n\n\n";
        cout << mm_color << otstup << "\t" << "[1] ������ ����" << unform << endl;
        cout << "\n";
        cout << mm_color << otstup << "\t" << "[2] ����������" << unform << endl;
        cout << "\n";
        cout << mm_color << otstup << "\t" << "[3] ���������" << unform << endl;
        cout << "\n";
        cout << mm_color << otstup << "\t" << "[4] �����" << unform << endl;
        cout << "\n\n";
        cout << otstup << "\t" << "����: ", cin >> main_menu;
        system("cls");

        switch (main_menu) {

        case 1:
            ///����
            break;

        case 2:
            ///����������
            break;

        case 3:
            system("cls");
            cout << otstup << mm_color << underlined << "���������" << unform;
            cout << "\n\n";
            cout << litotstup << "[1] ��������� ������" << endl;
            cout << "\n";
            cout << litotstup << "[2] ��������� ����� ����" << endl;
            cout << "\n";
            cout << litotstup << "[-] �����" << endl;
            cout << "\n";
            cout << litotstup << "����: ", cin >> setting_menu;

            switch (setting_menu) {
            case 1:
                system("cls");
                break;
            case 2:
                //
                break;
            }//switch set

            break;
        }//switch �������� ����

    }//������� ����
}//������� main

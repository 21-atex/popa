#include <iostream>
#define underline 

using namespace std;

int main() {
    setlocale(0, "");

    //ПЕРЕМЕННЫЕ
    string username_1 = "User 1";
    string username_2 = "User 2";
    string otstup = "\t\t\t\t\t";
    string litotstup = "\t\t\t";
    string underlined = "\x1b[4m";
    string unform = "\x1b[0m";
    int main_menu = 0;
    int setting_menu;
    string exit;
    string user_symbol_1 = "X";
    string user_symbol_2 = "O";
    string computer_symbol = "O";
    int user_setting;
    int user_1_change;
    int user_change_color;
    int user_symbol_change;
    int user_symbol_change_color;

    //ЦВЕТА
    string textclolor_br = "\x1b[91m";
    string textclolor_bg = "\x1b[92m";
    string textclolor_by = "\x1b[93m";
    string textclolor_bw = "\x1b[97m";
    string color_main_theme = "\x1b[0m";
    string color_second_theme = "\x1b[0m";
    string color_username_1 = "\x1b[0m";
    string color_username_2 = "\x1b[0m";
    string color_user_symbol_1 = "\x1b[0m";
    string color_user_symbol_2 = "\x1b[0m";

    while (main_menu == 0 || main_menu == 1 || main_menu == 2 || main_menu == 3) {
        system("cls");
        cout << "\n\n\n";
        cout << otstup << underlined << "Приветствуем вас в игре \"Крестики Нолики\"!" << unform << endl;
        cout << "\n\n\n";
        cout << color_main_theme << otstup << "\t" << "[1] Начать игру" << unform << endl;
        cout << "\n";
        cout << color_main_theme << otstup << "\t" << "[2] Статистика" << unform << endl;
        cout << "\n";
        cout << color_main_theme << otstup << "\t" << "[3] Настройки" << unform << endl;
        cout << "\n";
        cout << color_main_theme << otstup << "\t" << "[4] Выход" << unform << endl;
        cout << "\n\n";
        cout << otstup << "\t" << "Ввод: ", cin >> main_menu;
        system("cls");

        switch (main_menu) {

        case 1:
            ///игра
            break;

        case 2:
            ///статистика
            break;

        case 3:
            system("cls");
            cout << "\n\n\n";
            cout << otstup << color_main_theme << underlined << "НАСТРОЙКИ" << unform << endl;
            cout << "\n";
            cout << litotstup << color_second_theme << "[1] Настройки Игрока" << unform << endl;
            cout << "\n";
            cout << litotstup << color_second_theme << "[2] Настройки ИИ" << unform << endl;
            cout << "\n";
            cout << litotstup << color_second_theme << "[3] Настройки Цветов" << unform << endl;
            cout << "\n";
            cout << litotstup << color_second_theme << "[4] Выход" << unform << endl;
            cout << "\n\n";
            cout << litotstup << color_second_theme << "Ввод: " << unform, cin >> setting_menu;

            switch (setting_menu) {
            case 1:
                system("cls");
                cout << "\n\n\n";
                cout << litotstup << color_main_theme << "+ | " << underlined << "Настройки игрока" << unform << endl;
                cout << "\n\n";
                cout << litotstup << color_second_theme << "1 | Игрок 1" << unform << endl;
                cout << "\n";
                cout << litotstup << color_second_theme << "2 | Игрок 2" << unform << endl;
                cout << "\n\n";
                cout << litotstup << color_main_theme << "< | Ввод: " << unform, cin >> user_setting;
                
                switch (user_setting) {
                case 1:
                    system("cls");
                    cout << "\n\n\n";
                    cout << litotstup << color_main_theme << "+ | " << underlined << "Настройки игрока [1]" << unform << endl;
                    cout << "\n\n";
                    cout << litotstup << color_second_theme << "1 | Ник          : " << unform << color_username_1 << username_1 << unform <<endl;
                    cout << "\n";
                    cout << litotstup << color_second_theme << "2 | Фигура       : " << unform << color_user_symbol_1 << user_symbol_1 << unform << endl;
                    cout << "\n";
                    cout << litotstup << color_second_theme << "3 | Цвет         : " << unform;
                    if (color_username_1 == "\x1b[0m") {
                        cout << color_username_1 << "стандартный" << unform << endl;
                    }
                    if (color_username_1 == "\x1b[91m") {
                        cout << color_username_1 << "светлый красный" << unform << endl;
                    }
                    if (color_username_1 == "\x1b[92m") {
                        cout << color_username_1 << "светлый зелёный" << unform << endl;
                    }
                    if (color_username_1 == "\x1b[93m") {
                        cout << color_username_1 << "светлый желтый" << unform << endl;
                    }
                    if (color_username_1 == "\x1b[97m") {
                        cout << color_username_1 << "светлый белый" << unform << endl;
                    }
                    cout << "\n\n";
                    cout << litotstup << color_main_theme << "< | Ввод: " << unform, cin >> user_1_change;

                    switch (user_1_change) {
                    case 1:
                        system("cls");
                        cout << "\n\n\n";
                        cout << litotstup << color_main_theme << "+ | " << underlined << "Смена имени игрока [1]" << unform << endl;
                        cout << "\n\n";
                        cout << litotstup << color_second_theme << "Ваше действующее имя: " << color_username_1 << username_1 << unform << endl;
                        cout << "\n";
                        cout << litotstup << color_second_theme << "< | Введите новое имя пользователя: " << unform, cin >> username_1;
                        break;
                    case 2:
                        system("cls");
                        cout << "\n\n\n";
                        cout << litotstup << color_main_theme << "+ | " << underlined << "Смена параметров фигуры игрока [1]" << unform << endl;
                        cout << "\n\n";
                        cout << litotstup << color_second_theme << "[1] Символ: " << color_user_symbol_1 << user_symbol_1 << unform << endl;
                        cout << "\n";
                        cout << litotstup << color_second_theme << "[2] Ваш действующий цвет символа: ";
                        if (color_username_1 == "\x1b[0m") {
                            cout << color_user_symbol_1 << "стандартный" << unform << endl;
                        }
                        if (color_username_1 == "\x1b[91m") {
                            cout << color_user_symbol_1 << "светлый красный" << unform << endl;
                        }
                        if (color_username_1 == "\x1b[92m") {
                            cout << color_user_symbol_1 << "светлый зелёный" << unform << endl;
                        }
                        if (color_username_1 == "\x1b[93m") {
                            cout << color_user_symbol_1 << "светлый желтый" << unform << endl;
                        }
                        if (color_username_1 == "\x1b[97m") {
                            cout << color_user_symbol_1 << "светлый белый" << unform << endl;
                        }
                        cout << "\n";
                        cout << litotstup << color_second_theme << "< | Ввод: " << unform, cin >> user_symbol_change;

                        switch (user_symbol_change) {
                        case 1:
                            system("cls");
                            cout << "\n\n\n";
                            cout << litotstup << color_main_theme << "+ | " << underlined << "Смена фигуры игрока [1]" << unform << endl;
                            cout << "\n\n";
                            cout << litotstup << color_second_theme << "Ваш действующий символ: " << color_user_symbol_1 << user_symbol_1 << unform << endl;
                            cout << "\n";
                            cout << litotstup << color_second_theme << "< | Введите новый символ: " << unform, cin >> user_symbol_1;
                            break;
                        case 2:
                            system("cls");
                            cout << "\n\n\n";
                            cout << litotstup << color_main_theme << "+ | " << underlined << "Смена цвета фигуры игрока [1]" << unform << endl;
                            cout << "\n\n";
                            cout << litotstup << color_second_theme << "Ваш действующий символ: " << color_user_symbol_1 << user_symbol_1 << unform << endl;
                            cout << "\n";
                            cout << litotstup << color_second_theme << "Ваш действующий цвет: " << unform;
                            if (color_username_1 == "\x1b[0m") {
                                cout << color_username_1 << "стандартный" << unform << endl;
                            }
                            if (color_username_1 == "\x1b[91m") {
                                cout << color_username_1 << "светлый красный" << unform << endl;
                            }
                            if (color_username_1 == "\x1b[92m") {
                                cout << color_username_1 << "светлый зелёный" << unform << endl;
                            }
                            if (color_username_1 == "\x1b[93m") {
                                cout << color_username_1 << "светлый желтый" << unform << endl;
                            }
                            if (color_username_1 == "\x1b[97m") {
                                cout << color_username_1 << "светлый белый" << unform << endl;
                            }
                            cout << litotstup << color_second_theme << "Выберите новый цвет из списка: " << unform << endl;
                            cout << "\n\n";
                            cout << litotstup << textclolor_br << "[1] светлый красный" << endl;
                            cout << "\n";
                            cout << litotstup << textclolor_bg << "[2] светлый зеленый" << endl;
                            cout << "\n";
                            cout << litotstup << textclolor_by << "[3] светлый желтый" << endl;
                            cout << "\n";
                            cout << litotstup << textclolor_bw << "[4] светлый белый" << endl;
                            cout << "\n\n";
                            cout << litotstup << color_second_theme << "< | Введите номер цвета: " << unform, cin >> user_symbol_change_color;
                            switch (user_symbol_change_color) {
                            case 1:
                                color_user_symbol_1 = textclolor_br;
                                break;
                            case 2:
                                color_user_symbol_1 = textclolor_bg;
                                break;
                            case 3:
                                color_user_symbol_1 = textclolor_by;
                                break;
                            case 4:
                                color_user_symbol_1 = textclolor_bw;
                                break;
                            }//switch user_change_color
                            break;
                            break;
                        }//switch user_symbol_change

                        break;
                    case 3:
                        system("cls");
                        cout << "\n\n\n";
                        cout << litotstup << color_main_theme << "+ | " << underlined << "Смена цвета игрока [1]" << unform << endl;
                        cout << "\n\n";
                        cout << litotstup << color_second_theme << "Ваш действующий цвет: " << unform;
                        if (color_username_1 == "\x1b[0m") {
                            cout << color_username_1 << "стандартный" << unform << endl;
                        }
                        if (color_username_1 == "\x1b[91m") {
                            cout << color_username_1 << "светлый красный" << unform << endl;
                        }
                        if (color_username_1 == "\x1b[92m") {
                            cout << color_username_1 << "светлый зелёный" << unform << endl;
                        }
                        if (color_username_1 == "\x1b[93m") {
                            cout << color_username_1 << "светлый желтый" << unform << endl;
                        }
                        if (color_username_1 == "\x1b[97m") {
                            cout << color_username_1 << "светлый белый" << unform << endl;
                        }
                        cout << litotstup << color_second_theme << "Выберите новый цвет из списка: " << unform << endl;
                        cout << "\n\n";
                        cout << litotstup << textclolor_br << "[1] светлый красный" << endl;
                        cout << "\n";
                        cout << litotstup << textclolor_bg << "[2] светлый зеленый" << endl;
                        cout << "\n";
                        cout << litotstup << textclolor_by << "[3] светлый желтый" << endl;
                        cout << "\n";
                        cout << litotstup << textclolor_bw << "[4] светлый белый" << endl;
                        cout << "\n\n";
                        cout << litotstup << color_second_theme << "< | Введите номер цвета: " << unform, cin >> user_change_color;

                        switch (user_change_color) {
                        case 1:
                            color_username_1 = textclolor_br;
                            break;
                        case 2:
                            color_username_1 = textclolor_bg;
                            break;
                        case 3:
                            color_username_1 = textclolor_by;
                            break;
                        case 4:
                            color_username_1 = textclolor_bw;
                            break;
                        }//switch user_change_color
                        break;
                    }
                    
                    break;
                case 2: //////////////////////////// 2 игрок
                    system("cls");
                    cout << "\n\n\n";
                    cout << litotstup << color_main_theme << "+ | " << underlined << "Настройки игрока [1]" << unform << endl;
                    cout << "\n\n";
                    cout << litotstup << color_second_theme << "1 | Ник          : " << unform << color_username_2 << username_2 << unform <<endl;
                    cout << "\n";
                    cout << litotstup << color_second_theme << "2 | Фигура       : " << unform << color_user_symbol_2 << user_symbol_2 << unform << endl;
                    cout << "\n";
                    cout << litotstup << color_second_theme << "3 | Цвет         : " << unform;
                    if (color_username_2 == "\x1b[0m") {
                        cout << color_username_2 << "стандартный" << unform << endl;
                    }
                    if (color_username_2 == "\x1b[91m") {
                        cout << color_username_2 << "светлый красный" << unform << endl;
                    }
                    if (color_username_2 == "\x1b[92m") {
                        cout << color_username_2 << "светлый зелёный" << unform << endl;
                    }
                    if (color_username_2 == "\x1b[93m") {
                        cout << color_username_2 << "светлый желтый" << unform << endl;
                    }
                    if (color_username_2 == "\x1b[97m") {
                        cout << color_username_2 << "светлый белый" << unform << endl;
                    }
                    cout << "\n\n";
                    cout << litotstup << color_main_theme << "< | Ввод: " << unform, cin >> user_1_change;

                    switch (user_1_change) {
                    case 1:
                        system("cls");
                        cout << "\n\n\n";
                        cout << litotstup << color_main_theme << "+ | " << underlined << "Смена имени игрока [1]" << unform << endl;
                        cout << "\n\n";
                        cout << litotstup << color_second_theme << "Ваше действующее имя: " << color_username_2 << username_2 << unform << endl;
                        cout << "\n";
                        cout << litotstup << color_second_theme << "< | Введите новое имя пользователя: " << unform, cin >> username_2;
                        break;
                    case 2:
                        system("cls");
                        cout << "\n\n\n";
                        cout << litotstup << color_main_theme << "+ | " << underlined << "Смена параметров фигуры игрока [1]" << unform << endl;
                        cout << "\n\n";
                        cout << litotstup << color_second_theme << "[1] Символ: " << color_user_symbol_2 << user_symbol_2 << unform << endl;
                        cout << "\n";
                        cout << litotstup << color_second_theme << "[2] Ваш действующий цвет символа: ";
                        if (color_username_2 == "\x1b[0m") {
                            cout << color_user_symbol_2 << "стандартный" << unform << endl;
                        }
                        if (color_username_2 == "\x1b[91m") {
                            cout << color_user_symbol_2 << "светлый красный" << unform << endl;
                        }
                        if (color_username_2 == "\x1b[92m") {
                            cout << color_user_symbol_2 << "светлый зелёный" << unform << endl;
                        }
                        if (color_username_2 == "\x1b[93m") {
                            cout << color_user_symbol_2 << "светлый желтый" << unform << endl;
                        }
                        if (color_username_2 == "\x1b[97m") {
                            cout << color_user_symbol_2 << "светлый белый" << unform << endl;
                        }
                        cout << "\n";
                        cout << litotstup << color_second_theme << "< | Ввод: " << unform, cin >> user_symbol_change;

                        switch (user_symbol_change) {
                        case 1:
                            system("cls");
                            cout << "\n\n\n";
                            cout << litotstup << color_main_theme << "+ | " << underlined << "Смена фигуры игрока [1]" << unform << endl;
                            cout << "\n\n";
                            cout << litotstup << color_second_theme << "Ваш действующий символ: " << color_user_symbol_2 << user_symbol_2 << unform << endl;
                            cout << "\n";
                            cout << litotstup << color_second_theme << "< | Введите новый символ: " << unform, cin >> user_symbol_2;
                            break;
                        case 2:
                            system("cls");
                            cout << "\n\n\n";
                            cout << litotstup << color_main_theme << "+ | " << underlined << "Смена цвета фигуры игрока [1]" << unform << endl;
                            cout << "\n\n";
                            cout << litotstup << color_second_theme << "Ваш действующий символ: " << color_user_symbol_2 << user_symbol_2 << unform << endl;
                            cout << "\n";
                            cout << litotstup << color_second_theme << "Ваш действующий цвет: " << unform;
                            if (color_username_2 == "\x1b[0m") {
                                cout << color_username_2 << "стандартный" << unform << endl;
                            }
                            if (color_username_2 == "\x1b[91m") {
                                cout << color_username_2 << "светлый красный" << unform << endl;
                            }
                            if (color_username_2 == "\x1b[92m") {
                                cout << color_username_2 << "светлый зелёный" << unform << endl;
                            }
                            if (color_username_2 == "\x1b[93m") {
                                cout << color_username_2 << "светлый желтый" << unform << endl;
                            }
                            if (color_username_2 == "\x1b[97m") {
                                cout << color_username_2 << "светлый белый" << unform << endl;
                            }
                            cout << litotstup << color_second_theme << "Выберите новый цвет из списка: " << unform << endl;
                            cout << "\n\n";
                            cout << litotstup << textclolor_br << "[1] светлый красный" << endl;
                            cout << "\n";
                            cout << litotstup << textclolor_bg << "[2] светлый зеленый" << endl;
                            cout << "\n";
                            cout << litotstup << textclolor_by << "[3] светлый желтый" << endl;
                            cout << "\n";
                            cout << litotstup << textclolor_bw << "[4] светлый белый" << endl;
                            cout << "\n\n";
                            cout << litotstup << color_second_theme << "< | Введите номер цвета: " << unform, cin >> user_symbol_change_color;
                            switch (user_symbol_change_color) {
                            case 1:
                                color_user_symbol_2 = textclolor_br;
                                break;
                            case 2:
                                color_user_symbol_2 = textclolor_bg;
                                break;
                            case 3:
                                color_user_symbol_2 = textclolor_by;
                                break;
                            case 4:
                                color_user_symbol_2 = textclolor_bw;
                                break;
                            }//switch user_change_color
                            break;
                            break;
                        }//switch user_symbol_change

                        break;
                    case 3:
                        system("cls");
                        cout << "\n\n\n";
                        cout << litotstup << color_main_theme << "+ | " << underlined << "Смена цвета игрока [1]" << unform << endl;
                        cout << "\n\n";
                        cout << litotstup << color_second_theme << "Ваш действующий цвет: " << unform;
                        if (color_username_2 == "\x1b[0m") {
                            cout << color_username_2 << "стандартный" << unform << endl;
                        }
                        if (color_username_2 == "\x1b[91m") {
                            cout << color_username_2 << "светлый красный" << unform << endl;
                        }
                        if (color_username_2 == "\x1b[92m") {
                            cout << color_username_2 << "светлый зелёный" << unform << endl;
                        }
                        if (color_username_2 == "\x1b[93m") {
                            cout << color_username_2 << "светлый желтый" << unform << endl;
                        }
                        if (color_username_2 == "\x1b[97m") {
                            cout << color_username_2 << "светлый белый" << unform << endl;
                        }
                        cout << litotstup << color_second_theme << "Выберите новый цвет из списка: " << unform << endl;
                        cout << "\n\n";
                        cout << litotstup << textclolor_br << "[1] светлый красный" << endl;
                        cout << "\n";
                        cout << litotstup << textclolor_bg << "[2] светлый зеленый" << endl;
                        cout << "\n";
                        cout << litotstup << textclolor_by << "[3] светлый желтый" << endl;
                        cout << "\n";
                        cout << litotstup << textclolor_bw << "[4] светлый белый" << endl;
                        cout << "\n\n";
                        cout << litotstup << color_second_theme << "< | Введите номер цвета: " << unform, cin >> user_change_color;

                        switch (user_change_color) {
                        case 1:
                            color_username_2 = textclolor_br;
                            break;
                        case 2:
                            color_username_2 = textclolor_bg;
                            break;
                        case 3:
                            color_username_2 = textclolor_by;
                            break;
                        case 4:
                            color_username_2 = textclolor_bw;
                            break;
                        }//switch user_change_color
                        break;
                    }
                    
                    break;
                    break;
                }//switch user_setting
                break;
            case 2:
                //
                break; 
            }//switch set

            break;
        }//switch ГЛАВНОГО МЕНЮ

    }//ГЛАВНЫЙ ЦИКЛ
}//ФУНКЦИЯ main

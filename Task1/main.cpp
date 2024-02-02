#include <iostream>

enum Month {
    Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};

int main() {
    int num;

    do {
        std::cout << "Введите номер месяца (1-12) или 0 для выхода: ";
        std::cin >> num;

        switch (num) {
            case Январь:
                std::cout << "Январь" << std::endl;
                break;
            case Февраль:
                std::cout << "Февраль" << std::endl;
                break;
            case Март:
                std::cout << "Март" << std::endl;
                break;
            case Апрель:
                std::cout << "Апрель" << std::endl;
                break;
            case Май:
                std::cout << "Май" << std::endl;
                break;
            case Июнь:
                std::cout << "Июнь" << std::endl;
                break;
            case Июль:
                std::cout << "Июль" << std::endl;
                break;
            case Август:
                std::cout << "Август" << std::endl;
                break;
            case Сентябрь:
                std::cout << "Сентябрь" << std::endl;
                break;
            case Октябрь:
                std::cout << "Октябрь" << std::endl;
                break;
            case Ноябрь:
                std::cout << "Ноябрь" << std::endl;
                break;
            case Декабрь:
                std::cout << "Декабрь" << std::endl;
                break;
            case 0:
                std::cout << "До свидания" << std::endl;
                break;
            default:
                if (num != 0)
                    std::cout << "Неправильный номер!" << std::endl;
                break;
        }

    } while (num != 0);

    return 0;
}

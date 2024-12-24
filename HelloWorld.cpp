#include <iostream>
#include <locale>

int main() {
    std::setlocale(LC_ALL, "Russian"); // Устанавливаем русскую локаль
    std::cout << "Visual Studio настроен для C++!" << std::endl;
    return 0;
}

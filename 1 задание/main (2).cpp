#include <iostream>
#include "encryption.h" // Подключаем заголовочный файл с функцией шифрования

int main() {

    std::string message;
    int columns;

    std::cout << "Введите сообщение для шифрования: ";
    std::getline(std::cin, message);

    std::cout << "Введите количество столбцов таблицы: ";
    std::cin >> columns;

    std::string encryptedMessage = encrypt(message, columns); // Вызываем функцию шифрования

    std::cout << "Зашифрованное сообщение: " << encryptedMessage << std::endl;

    return 0;
}

//Вводить количество столбцов 2!!!!
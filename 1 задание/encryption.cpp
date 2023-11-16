#include "encryption.h"

std::string encrypt(const std::string& message, int columns) {
    // Реализация шифрования табличной маршрутной перестановкой
    std::string encryptedMessage;
    int rows = (message.length() - 1) / columns + 1;

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            int index = j * columns + i;
            if (index < message.length()) {
                encryptedMessage += message[index];
            }
        }
    }

    return encryptedMessage;
}

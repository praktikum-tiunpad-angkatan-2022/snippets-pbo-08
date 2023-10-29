#include <iostream>
#include <exception>
#include <string>

class InvalidNumberException : public std::exception {
public:
    InvalidNumberException() : message("Angka yang dimasukkan melanggar ketentuan") {}

    const char* what() const noexcept override {
        return message.c_str();
    }

private:
    std::string message;
};

bool cekAngka(int angka) {
    if (angka < 0 || angka > 20)
        return true;
    else
        throw InvalidNumberException();
}

int main() {
    try {
        cekAngka(20);
    } catch (const std::exception& e) {
        std::cerr << "Terjadi error:\n" << e.what() << std::endl;
    }

    return 0;
}
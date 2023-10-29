#include <iostream>
#include <string>
#include <stdexcept>

int main() {
    int x = 0;
    int y = 10;

    std::cout << "ENTER untuk lanjutkan" << std::endl;
    std::string line;
    std::getline(std::cin, line);

    // Attempting to divide by zero will result in an exception.
    int z = y / x;
    // kecuali di throw, program tetap akan 'silently failing'
    // coba kalian cari gimana caranya biar program tahu ini perlu nge 'throw' apa
    // seperti yang di checkedexception.cpp baris 13-15

    std::cout << "Hasil z = " << z << std::endl;
}
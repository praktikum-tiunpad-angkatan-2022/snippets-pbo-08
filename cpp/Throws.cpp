#include <iostream>
#include <stdexcept>

// kita tau ini bakal ngethrow
void bacaFile() {
    throw std::runtime_error("File tidak ditemukan");
}

// jadi dihandling via try-catch
int main() {
    try {
        bacaFile();
    } catch (const std::exception& e) {
        std::cerr << "Terjadi suatu error: " << e.what() << std::endl;
    }

    return 0;
}
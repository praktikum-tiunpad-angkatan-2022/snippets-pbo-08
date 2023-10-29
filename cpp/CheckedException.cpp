#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

int main() {
    /*
    Pada c++, jika kita tidak secara proaktif 'throw' exception, compiler akan diam tanpa memberikan pesan apapun
    Hal ini disebut juga, silently failing...
    Jadi, c++ ga peduli kode nya ada error ato engga sebelum dijalanin kecuali kalian tau itu ngethrow apaan
    */
    std::ifstream file("C:\\test\\a.txt");
    // if (!file.is_open()) {
    //     throw std::ios_base::failure("File 'C:\\test\\a.txt' tidak ada.");
    // } 
    // coba uncomment baris diatas terus bandingkan hasilnya

    for (int counter = 0; counter < 3; counter++) {
        std::string line;
        if (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    }

    file.close();

}
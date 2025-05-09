// main.cpp
#include "Serial.h"
#include "Cuda.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string input_folder = (argc > 1 ? argv[1] : "./images");

    // 1) Run serial version
    std::cout << "==================Serial compression==============\n";
    std::string serial_out = "./compressed_images_serial";
    std::string serial_csv = "serial_results.csv";
    runSerial(input_folder, serial_out, serial_csv);
    std::cout << "Serial compression complete.\n"
        << "  Images ¡ú " << serial_out << "\n"
        << "  Details ¡ú " << serial_csv << "\n\n";

    // 2) Run CUDA version
    std::cout << "==================CUDA compression==============\n";
    std::string cuda_out = "./compressed_images_cuda";
    std::string cuda_csv = "cuda_results.csv";
    runCuda(input_folder, cuda_out, cuda_csv);
    std::cout << "CUDA compression complete.\n"
        << "  Images ¡ú " << cuda_out << "\n"
        << "  Details ¡ú " << cuda_csv << "\n";

    return 0;
}

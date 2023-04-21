#include <iostream>
#include <filesystem>
#include <fstream>

void file_manipulation(){
    int size = 0;
    //std::string prefix = "Srcs/";
    std::string path = "Srcs/Bottel.wav";
    std::ifstream FTC(path);
    if (FTC.is_open()){
        size = std::filesystem::file_size(path);
        //std::cout << "READ" << std::endl;
    std::string output = path.substr(5, path.size());
    std::reverse(output.begin(), output.end());
    output = output.substr(4, output.size());
    std::reverse(output.begin(), output.end());
    std::cout << output << std::endl;
    std::ofstream FT("Srcs/" + output + ".png");
    //std::cout << pos << std::endl;
    }
    else
        std::cout << "NOT READ" << std::endl;
    std::cout << "this is the size of the file in bits " << size * 8 << std::endl;
}


int main(){
    file_manipulation();
    
}
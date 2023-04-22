#include "../Libs/FTV.hpp"

FTV::FTV(char *av){
    //std::cout << "constructor has been called" << std::endl;
    this->path = av;
    this->size = std::filesystem::file_size(this->path) * 8;
    //std::cout << this->size << std::endl;
    this->chunk = this->size / 8;
}

FTV::~FTV(){
   // std::cout << "destructor has been called" << std::endl;
}


void FTV::file_manipulation(){
    std::ifstream FTC(this->path, std::ios::binary);
    if (FTC.is_open())
        file_handle();
    else
        std::cout << "FILE NOT READ" << std::endl;
    std::ofstream FT("Srcs/" + this->output, std::ios::binary);
    for (int i = 0; i < this->size; i++){
        char byte;
        FTC.read(&byte, 1);
        this->binary += std::bitset<8>(byte).to_string();
    }
    FT << this->binary;
    std::cout << this->binary << std::endl;
   // std::cout << "this is the size of the file in bits " << this->size << std::endl;
}


void FTV::file_handle(){
    this->output = this->path.substr(5);
    std::reverse(this->output.begin(), this->output.end());
    this->output = this->output.substr(4);
    std::reverse(this->output.begin(), this->output.end());    
}
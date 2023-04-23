#include "../Libs/FTV.hpp"

FTV::FTV(char *av){
    //std::cout << "constructor has been called" << std::endl;
    this->path = av;
    this->size = std::filesystem::file_size(this->path);
    //std::cout << this->size << std::endl;
    this->chunk = this->size / 8;
}

FTV::~FTV(){
   // std::cout << "destructor has been called" << std::endl;
}


void FTV::file_manipulation(){
    std::ifstream FTC(this->path, std::ios::binary);
    if (FTC.is_open()){
        file_handle();
        std::cout << "File handled" << std::endl;
    }
    else
        std::cout << "FILE NOT READ" << std::endl;
    std::ofstream FT("Output/" + this->output + ".bin", std::ios::binary);
    FTC.read(this->binary.data(), this-> size);
    FT.write(this->binary.data(), this->size);
    //std::cout << this->size << std::endl;
    exit (0);
}


void FTV::file_handle(){
    this->output = this->path.substr(5);
    std::reverse(this->output.begin(), this->output.end());
    this->output = this->output.substr(4);
    std::reverse(this->output.begin(), this->output.end());    
}
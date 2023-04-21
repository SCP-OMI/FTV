#include "../Libs/FTV.hpp"

FTV::FTV(char *av){
    std::cout << "constructor has been called" << std::endl;
    this->path = av;
}

FTV::~FTV(){
    std::cout << "destructor has been called" << std::endl;
}


void FTV::file_manipulation(){
    std::ifstream FTC(this->path);
    if (FTC.is_open()){
        this->size = std::filesystem::file_size(this->path);
        this->output = this->path.substr(5);
        std::reverse(this->output.begin(), this->output.end());
        this->output = this->output.substr(4);
        std::reverse(this->output.begin(), this->output.end());
        std::ofstream FT("Srcs/" + this->output + ".png");
    } else {
        std::cout << "FILE NOT READ" << std::endl;
    }
    std::cout << "this is the size of the file in bits " << this->size * 8 << std::endl;
}


void FTV::Binary_fetch(){
    
}
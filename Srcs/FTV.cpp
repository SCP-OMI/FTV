#include "../Libs/FTV.hpp"

FTV::FTV(){
    std::cout << "constructor has been called" << std::endl;
    this->size = 0;
    this->path = "Srcs/Bottel.wav";
}

FTV::~FTV(){
    std::cout << "destructor has been called" << std::endl;
}


void FTV::file_manipulation(){
    std::ifstream FTC(this->path);
    if (FTC.is_open()){
        this->size = std::filesystem::file_size(this->path);
        this->output = this->path.substr(5, this->path.size());
        std::reverse(this->output.begin(), this->output.end());
        this->output = this->output.substr(4, this->output.size());
        std::reverse(this->output.begin(), this->output.end());
        std::ofstream FT("Srcs/" + this->output + ".png");
    }
    else
        std::cout << "NOT READ" << std::endl;
    std::cout << "this is the size of the file in bits " << this->size * 8 << std::endl;
}
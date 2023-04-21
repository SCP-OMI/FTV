#ifndef FTV_HPP
#define FTV_HPP

#include <iostream>
#include <filesystem>
#include <fstream>

class FTV {
    private :
        int size;
        int chunk;
        std::string path;
        std::string output;
        std::string binary;
        std::ifstream FTC;

    public :
        //FTV();
        FTV(char *av);
        ~FTV();
        void file_manipulation();
        void Binary_fetch();

};

#endif
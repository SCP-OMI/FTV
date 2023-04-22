#ifndef FTV_HPP
#define FTV_HPP

#include <iostream>
#include <filesystem>
#include <fstream>
#include <bitset>

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
        void file_handle();
        //std::string operator<< (std)

};

#endif
#ifndef FTV_HPP
#define FTV_HPP

#include <iostream>
#include <filesystem>
#include <fstream>

class FTV {
    private :
        int size = 0;
        std::string path;
        std::string output;

    public :
        //FTV();
        FTV(char *av);
        ~FTV();
        void file_manipulation();
        void Binary_fetch();

};

#endif
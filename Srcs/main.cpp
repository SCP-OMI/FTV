
#include "../Libs/FTV.hpp"

int main(int ac, char **av){
    FTV *_FTV = new FTV(av[1]);
    _FTV->file_manipulation();
    //_FTV->Binary_fetch();
    delete _FTV;
    
}
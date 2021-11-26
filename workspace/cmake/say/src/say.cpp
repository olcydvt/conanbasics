#include <iostream>
#include <string>
#include "say.h"

void say(std::string msg){
    #ifdef NDEBUG
    std::cout << "Say Release: " << msg <<std::endl;
    #else
    std::cout << "Say Debug: " << msg <<std::endl;
    #endif
}
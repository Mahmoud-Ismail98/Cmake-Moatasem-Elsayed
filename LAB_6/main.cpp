#include <iostream>
#include "calc.hpp"
#include "Wifi.hpp"
#include "defaultConfig.h"
int main ()
{
    WIFI_Init();
    std::cout << " Software Version "
    << HELLOAPP_VERSION_MAJOR << "--"
    << HELLOAPP_VERSION_MINOR << std::endl;
    
    std::cout << " Product Type " << ProductType << std::endl;
    std::cout << " Product Year " << ProductYear << std::endl;
    return 0;
}
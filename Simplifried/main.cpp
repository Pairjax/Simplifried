#include <iostream>
#include <stdexcept>

#include "VulkanTestingApp.h"

int main() 
{
    VulkanTestingApp app;

    try 
    {
        app.run();
    }
    catch (const std::exception& e) 
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }


    return EXIT_SUCCESS;
}
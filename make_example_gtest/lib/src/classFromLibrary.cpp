#include <CustomLib/classFromLibrary.h>

bool classFromLibrary::returnTrue(std::string input) 
{
    (void)input;
    return true;
}

std::string classFromLibrary::returnEchoString(std::string input) 
{
    return input;
}


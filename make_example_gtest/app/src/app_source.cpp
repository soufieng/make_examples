#include <CustomLib/classFromLibrary.h>

#include <iostream>

int main(int argc, char* argv[]) {
    classFromLibrary cfl;
    std::string input("my custom input");
    std::cout << "Hi! I will print an output from classFromLibrary methods : " << std::endl;

    std::cout 
            << " classFromLibrary.returnTrue(\""
            << input 
            <<"\") returned :" 
            << cfl.returnTrue(input)
            << std::endl;
    std::cout 
            << " classFromLibrary.returnEchoString(\""
            << input 
            <<"\") returned :" 
            << cfl.returnEchoString(input)
            << std::endl;

    std::cout << "That's it! Thanks!" << std::endl;
}

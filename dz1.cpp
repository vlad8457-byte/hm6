#include <iostream>
#include <string>
#include <fstream>
int main()
{
    std::ifstream ifile("in.txt"); 
    if (ifile.is_open())
    {
        std::string word;
        while (ifile >> word)
        {
            std::cout << word << std::endl;
        }
        ifile.close();
    }
    return EXIT_SUCCESS;
}

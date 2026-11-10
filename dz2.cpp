#include <iostream>
#include <fstream>

int main() 
{
    std::ifstream ifile("in.txt");

    if (ifile.is_open()) 
    {
        int size = 0;
        ifile >> size;
        int* arr = new int[size];
        for (int i = 0; i < size; ++i) 
        {
            ifile >> arr[i];
        }
        ifile.close();
        for (int i = size - 1; i >= 0; --i) 
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        delete[] arr;
    } 
    return EXIT_SUCCESS;
}

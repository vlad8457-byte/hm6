#include <iostream>
#include <fstream>

int main() 
{
    std::ifstream ifile("in.txt");
    if (ifile.is_open()) 
    {
        int rows = 0;
        int cols = 0;
        ifile >> rows >> cols;
        int** arr = new int*[rows];
        for (int i = 0; i < rows; ++i) 
        {
            arr[i] = new int[cols];
        }
        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < cols; ++j) 
            {
                ifile >> arr[i][j];
            }
        }
        ifile.close();
        for (int i = 0; i < rows; ++i) 
        {
            for (int j = cols - 1; j >= 0; --j) 
            {
                std::cout << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }
        for (int i = 0; i < rows; ++i) 
        {
            delete[] arr[i];
        }
        delete[] arr;
    } 
    return EXIT_SUCCESS;
}

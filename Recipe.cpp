#include <fstream>
#include <iostream>
#include <string>
#include <vector>

static const int MAX_LINE_LENGTH = 256;

void printRecipe(const char* const filename)
{
    std::ifstream recipe_file(filename);
    if( ! recipe_file.good())
    {
        return;
    }

    while(true)
    {
        char recipe_data[MAX_LINE_LENGTH];
        recipe_file.getline(recipe_data, MAX_LINE_LENGTH);
        if(recipe_file.eof())
        {
            break;
        }
        std::cout << recipe_data << std::endl;
    }
}

int main(int argc, char* argv[])
{
    printRecipe(argv[1]);
    return 0;
}

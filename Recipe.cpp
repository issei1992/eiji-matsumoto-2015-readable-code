#include <fstream>
#include <iostream>
#include <string>
#include <vector>

static const int MAX_LINE_LENGTH = 256;
using namespace std;

void printRecipe(const char* const filename,int SearchID)
{
    
    int recipeID=1;
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
        if (SearchID==0||SearchID==recipeID) {
            std::cout <<ID<<": "<< recipe_data << std::endl;
        }
        recipeID++;
        
    }
}

int main(int argc, char* argv[])
{
    int SearchID=0;
    cout<<"指定したいID番号を入力(0で全部表示)"<<" ";
    cin>>SearchID;
    
    printRecipe(argv[1],SearchID);
    
    
    return 0;
}

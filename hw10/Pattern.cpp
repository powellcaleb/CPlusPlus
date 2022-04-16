#include "Pattern.h"



Pattern::Pattern ()
{
    std::unordered_map<std::string, std::vector> lookupTable;
    std::string tempPattern = "";
    
    for (auto& i: umap)
    {
        //std::cout << i.first << ": " << i.second << std::endl;
        tempPattern = i.first;
        newPattern = tempPattern.substr(0, patternCount-1);
        
        umap[pattern] = #;
    }
    
    
}

Pattern::Pattern(std::string pattern2, int countCount2)
{
    this -> pattern2 = pattern2;
    this -> countCount2;
}

Pattern::~Pattern()
{
    
}

double Pattern::getString() const
{
    return pattern2;
}

double Pattern::getCount() const
{
    return countCount2;
}

//--------------------------------------------------------------

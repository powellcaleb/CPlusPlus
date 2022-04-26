#include "Pattern.h"



Pattern::Pattern ()
{
  
}

Pattern::Pattern(std::string pattern, int patternCount)
{
    this -> pattern = pattern;
    this -> patternCount;
}

Pattern::~Pattern()
{
    
}

double Pattern::getString() const
{
    return pattern;
}

double Pattern::getCount() const
{
    return patternCount;
}

//--------------------------------------------------------------

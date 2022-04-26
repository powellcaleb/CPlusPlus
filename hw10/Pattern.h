#ifndef PATTERN_H
#define PATTERN_H
#include <iostream>

class Pattern
{
    private:
        std::string pattern;
        int patternCount;
        double patternProbability;

    public:
        Pattern();
        Pattern(std::string pattern, int patternCount);
        virtual ~Pattern();

        double getString() const;
        double getCount() const;
    
        void setcProb() const;

};

#endif


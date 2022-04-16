#ifndef PATTERN_H
#define PATTERN_H
#include <iostream>

class Pattern
{
    private:
        std::string pattern;
        int countCount2;

    public:
        Pattern();
        Pattern(std::string pattern2, int countCount2);
        virtual ~Pattern();

        double getString() const;
        double getCount() const;

};

#endif


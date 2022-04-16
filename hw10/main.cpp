//
//  main.cpp
//  hw10
//
//  Created by Caleb Daniel Powell on 04/12/2022
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <stdio.h>
#include <unordered_map>

int main(int argc, const char * argv[])
{
    //FILE* fp = fopen ("FFF.txt", "r");
    
    //unordered map object
    std::unordered_map<std::string, int> umap;
    
    //created file stream object
    std::ifstream file;
    file.open("test.txt");
    
    //create string variable
    std::string book;
    
    //pattern chunk size
    int length = 1;
    //int lengthCount = 0;
    
    //makes sure the file is open
    if ( file.is_open() )
    {
        // variables
        char letter; //holds each char that's read in the txt file
        //int patternCount = 0; //counts the # of elements in a pattern
        //int countCount = 0; //counts the number of each pattern
        std::string pattern = ""; //initialize string variable to hold the pattern
        
        while ( file.good() ) //while there is a next element in the txt file
        {
            
            
            //each pattern occurs after each word hence space
            if ( length == 9 ) //checks if the pattern length has reached 8 yet
            {
                std::cout << pattern;
                
                printf ("%d", length);
                //std::cout << pattern;
                
                if ( umap.find(pattern) == umap.end() ) //if the pattern is not in the map already
                {
                    umap[pattern] = 1; //set the pattern and initialize its count
                }
                else //if the pattern in already in the map
                {
                    umap.at(pattern) += 1; //simply access the value at the key and increment its count
                }
                
                //countCount = 0; //reset the count since our increments only increase by 1
                length = 0;
                pattern = ""; //reset our pattern string variable, so we can storea new pattern inside
            }
            else //if the element is not a space
            {
                letter = file.get(); //grabs single char element and stores it
                
                pattern.push_back(letter); //add the char to the current string to complete the pattern
                length++;
            }
            
            // patternCount++; //increase of counter so we have the length of the pattern
            //std::cout << letter; //prints letter
        }
        
        //iterates through the map
        for (auto& i: umap)
        {
            std::cout << i.first << ": " << i.second << std::endl;
        }
        
        /*read by line
        while ( file.good() )
        {
            std::getline (file, book);
            std::cout << book << "\n";
        }*/
    }
    
    
    
    
}

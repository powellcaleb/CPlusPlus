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
#include "Pattern.h"

int main(int argc, const char * argv[])
{
    
    //unordered map object
    std::unordered_map<std::string, int> umap;
    
    //created file stream object
    std::ifstream file;
    file.open("test.txt");
    
    //create string variable to hold the entirety of the txt file
    std::string book;
    
    Pattern p;
    
    //makes sure the file is open
    if ( file.is_open() )
    {
        // variables
        std::string word; //string variable to hold words from txt file
        
        //while there is a next element in the txt file
        while ( file.good() )
        {
            //stores the word in the word variable from the txt file
            file >> word;
            
            //concatenate the word to the book string
            book += word+" ";
        }
        
        //string variable to hold the 8-letter patterb
        std::string pattern;
        
        //variables
        int start = 0;                  //start variable for substring
        int patternLength = 8;          //holds length of our patterns
        int bookLength = book.size();   //holds the length of the book string

        //read the book string while the starting point is "patternLength" away from the end of the book string
        while (start <= bookLength-patternLength)
        {
            //takes the 8 letter pattern (starting point up to the patternLength) and stores in variable to input into hash map
            pattern = book.substr(start, patternLength);
            
            if ( umap.find(pattern) == umap.end() ) //if the pattern is not in the map already
            {
                umap[pattern] = 1; //set the pattern and initialize its count
            }
            else //if the pattern in already in the map
            {
                umap.at(pattern) += 1; //simply access the value at the key and increment its count
            }
            
            //increment our starting point to the next letter
            start++;
        }
        
        std::unordered_map<std::string, std::vector> lookupTable;
        std::vector<Pattern*> v;
        start = 0;
        while (start <= bookLength - patternLength)
        {
            //pattern that's one letter short
            std::string pattern2 = book.substr(start, patternLength - 1);
            
            //store new pattern in lookuptable
            if ( lookupTable.find(pattern2) == lookupTable.end() )
            {
                lookupTable[pattern2] = v//std::vector<Pattern*>;
            }
             //if the pattern in already in the map
            lookupTable.at(pattern2).pushback(new Pattern (pattern, patternCount));
        }
        
        // Section F
        int totalCounts = 0;
        for (auto& i: lookupTable)
        {
            //tempPattern = i.first;
            tempVector = i.second;
            
          
            int tempCount = tempVector.getCount(); //p.getCount()
            totalCounts += tempCount; //
            
            double prob = 0.0;
            
            //loop over vectors
            for (auto& j: v)
            {
                prob += tempCount / totalCounts;
            }
            
        }
        
        
        
        
    
        
        //read the hash map and output
        for (auto& i: umap)
        {
            std::cout << i.first << ": " << i.second << std::endl;
        }
        
        //std::unordered_map<std::string pattern2, std::vector Pattern> lookupTable;
         
        for (auto& i: lookupTable)
        {
            std::cout << i.first << ": " << i.second << std::endl;
        }
        
        
        
        
        
        
        
        
        
        
        file.close();
        
        /*read by line
        while ( file.good() )
        {
            std::getline (file, book);
            std::cout << book << "\n";
        }*/
    }
    
    
    
    
}

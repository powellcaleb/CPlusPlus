//
//  main.cpp
//  hw04
//
//  Created by Caleb Daniel Powell on 2/8/22.
//

#include <iostream>
#include <cstdio>
#include <cmath>





int main(int argc, const char * argv[])
{
    //Open the wav file
    FILE* fp = fopen ("example.wav", "rb" );
    
    //Read the RIFF Header
    char RIFF[5];
    RIFF[4] = '\0';
    fread(RIFF, sizeof(char), 4 , fp);
    printf( "RIFF Header: %s\n", RIFF);
    
    //Read the size in between the header
    int num;
    fread( &num, sizeof(int), 1, fp);
    printf( "Size Header: %d\n", num);
    
    //Read the WAVE Header
    char WAVE[5];
    WAVE[4] = '\0';
    fread(WAVE, sizeof(char), 4 , fp);
    printf( "WAVE Header: %s\n", WAVE);
    
    //A loop to read through the chunks
    while (true)
    {
        //Read the sub-chunks headers
        int count;
        char FOURCC[5];
        FOURCC[4] = '\0';
        count = fread(FOURCC, sizeof(char), 4, fp);
        printf( "FOURCC: %s\n", FOURCC);
        if ( count == 0 )
        {
            break;
        }
        
        //Reads the size of the sub-chunks
        int size;
        fread (&size, sizeof(size), 1, fp);
        printf( "Size: %d\n", size);
        
        //Reads the contents of each sub-chunk (FMT and Data)
        unsigned char content[size];
        content[size] = '\0';
        fread(content, sizeof(char), size, fp);
        
        //Compares the chars stored in FOURCC to the header name. This makes sure in correct sub-chunk
        if (strcmp(FOURCC, "fmt ") == 0 )
        {
            //Navigate through the content array and pull out the specified data
            short format = *((short*)(content+0));
            printf("Format: %d\n", format);

            short nchannels = *((short*)(content+2));
            printf("Channels: %d\n", nchannels);
            
            //self-note: rate = sampling rate
            //self-note: our sampling is 11025 since it has a mono channel
            short rate = *((short*)(content+4));
            printf("Rate: %d\n", rate);
            
            short bits_per_sample = *((short*)(content+14));
            printf("Bits per Sample: %d\n", bits_per_sample);
            
            int byte_rate = ((rate*nchannels*bits_per_sample)/8);
            printf("Byte Rate: %d\n", byte_rate);
            
            short align = (nchannels*bits_per_sample)/8;
            printf("Align: %d\n", align);
        }
        
        //As above, compares the variable to make sure in the correct sub-chunk
        if (strcmp(FOURCC, "data") == 0 )
        {
            int count2 = 1;             //counter for going through each sample (there's 11025 since mono
            int content_count = 0;      //to increment through our contents array
            int content_count_R = 2;    //to increment through content array for right channel (for stereo)
            printf("Sample\tMono\t\tStereo L\tStereo R\n"); //prints out the column headers
            while ( (count2 < 11025))//11025
            {
                //use int since mono channel (requires 4 bytes)
                int mono = *((int*)(content+content_count));
                
                //stereo splits each sample into two channels (2 bytes for channel so use short)
                //stereo_R starts at different location than stereo_L/mono, so needed to use seperate counter
                short stereo_L = *((short*)(content+content_count));
                short stereo_R = *((short*)(content+content_count_R));
                
                /*
                 OR----------------------------------------------------------------------------------
                 short* stereo_L = ((short*)(content+content_count));
                 short* stereo_R = ((short*)(content+content_count_R));
                 ------------------------------------------------------------------------------------
                */
                
                //output the extracted data from content array
                printf("%d\t%d\t%d\t\t%d\n", count2, mono, stereo_L, stereo_R);
                
                /*SECOND METHOD --- INCLUDE [#] AFTER EACH ARRAY-------------------------------------
                printf("%d\t%d\t%d\t\t%d\n", count2, mono, stereo_L, stereo_R);
                 ------------------------------------------------------------------------------------
                 */
                count2 +=1;         //inc counter by 1 to go through each sample
                content_count+=4;   //each sample and channel are 4 bytes apart, so we increase by that
                content_count_R+=4;
            }
         }
    }
    fclose(fp);
}


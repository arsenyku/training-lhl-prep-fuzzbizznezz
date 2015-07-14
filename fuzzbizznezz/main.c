//
//  main.c
//  fuzzbizznezz
//
//  Output a range of values, substituting the
//  words fuzz, bizz, and fuzzbizz for those values which are
//  multiples of the user's input.
//
//  Created by asu on 2015-07-13.
//  Copyright (c) 2015 asu. All rights reserved.
//



#include <stdio.h>
    
/*
 fuzzbizznezz - output a range of values, substituting the 
    words fuzz, bizz, and fuzzbizz for those values which are
    multiples of the user's input.
 
 Parameters:
 
 min - minimum value to evaluate and output.
 
 max - maximum value to evaluate and output.
 
 fuzz - numbers which are multiples of this value will be displayed
        as the text "fuzz".  Numbers which are multiples of this
        and the bizz parameter will be displayed as "fuzzbizz".
 
 bizz - numbers which are multiples of this value will be displayed
        as the text "bizz".  Numbers which are multiples of this
        and the fuzz parameter will be displayed as "fuzzbizz".
 
*/
void fuzzbizznezz(int min, int max, int fuzz, int bizz)
{
    
    for(int i=min; i<=max ; i++){
        
        char output[9];
        
        if (i % fuzz == 0 && i % bizz == 0)
            sprintf(output, "fuzzbizz");
        
        else if (i % fuzz == 0)
            sprintf(output, "fuzz");
        
        else if (i % bizz == 0)
            sprintf(output, "bizz");
        
        else
            sprintf(output, "%d", i);
        
        
        printf ("%s\n", output);
    }
    
}



int main(int argc, const char * argv[])
{
    
    int min = 1;
    int max = 100;
    
    int fuzz = 3;
    int bizz = 5;
    
    if (argc > 1)
    {
        sscanf(argv[1], "%d", &fuzz);
        
        if (argc > 1)
            sscanf(argv[2], "%d", &bizz);
        
        if (argc > 2)
            sscanf(argv[3], "%d", &max);
        
    } else {
    
        // Prompt user for values.  Note: no error checking implemented.
        
        printf("What value for FUZZ?");
        scanf("%d", &fuzz);
        
        printf("What value for BIZZ?");
        scanf("%d", &bizz);
        
        printf("What value for NEZZ?");
        scanf("%d", &max);
        
        printf("FUZZ=%d, BIZZ=%d, NEZZ=%d\n", fuzz, bizz, max);
        
    }
    // Evaluate and display the appropriate values.
    
    fuzzbizznezz(min, max, fuzz, bizz);
    
    return 0;
    
}



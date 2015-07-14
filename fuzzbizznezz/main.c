//
//  main.c
//  fuzzbizznezz
//
//  Created by asu on 2015-07-13.
//  Copyright (c) 2015 asu. All rights reserved.
//


#include <stdio.h>
    
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
    
    printf("What value for FUZZ?");
    scanf("%d", &fuzz);
    
    printf("What value for BIZZ?");
    scanf("%d", &bizz);
    
    printf("What value for NEZZ?");
    scanf("%d", &max);
    
    printf("FUZZ=%d, BIZZ=%d, NEZZ=%d\n", fuzz, bizz, max);
    
    fuzzbizznezz(min, max, fuzz, bizz);
    
    return 0;
    
}



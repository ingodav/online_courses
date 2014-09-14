#include <stdio.h>
#include <limits.h>
#include <float.h>

// Useful: http://www.ascii-code.com/

int isLowerCase(char c) {
    int lowerCase = 0;
    
    lowerCase = ((c > 0x60) && (c < 0x7B))?1:0;
    
    return lowerCase;
}

int isUpperCase(char c) {
    int upperCase = 0;
    
    upperCase = ((c > 0x40) && (c < 0x5B))?1:0;
    
    return upperCase;
}

int isDigit(char c) {
    int digit = 0;
    
    digit = ((c > 0x2F) && (c < 0x3A))?1:0;
    
    return digit;
}

// white space (includes space,tab,new line)
// Space 0x32
// Tab   0x09 (horizontal)
// Tab   0x0B (vertical)
// LF    0x0A
int isWhiteSpace(char c) {
    int wSpace = 0;
    
    wSpace = ((c == 0x32) || (c == 0x09) || (c == 0x0B) || (c == 0x0A))?1:0;
    
    return wSpace;
}

// TODO: Extend this array with more values
char test[] = {'A', 'a', '1', ' '};

int main(void) {
    
    for(int=0; i<4; i++) {
        // Print here the results of the functions from the array
        
    }
    

    return 0;
}
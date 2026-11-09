#include <stdbool.h>

bool canConstruct(char* ransomNote, char* magazine) {
    int xh1[1000]={0};
    int xh2[1000]={0};
    for(int i=0; magazine[i]!='\0'; i++){
        xh1[magazine[i]]++;
    }
    for(int i=0; ransomNote[i]!='\0'; i++){
        xh2[ransomNote[i]]++;
        if((xh1[ransomNote[i]]<xh2[ransomNote[i]])) return false;
    }
    return true;
}

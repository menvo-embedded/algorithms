// LeetCode 20 - Valid Parentheses
// Status: draft, chua Accepted
#include <stdbool.h>
#include <stdio.h>

bool isValid(char* s) {
    int k=0;
    char temp[1000]={0};
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            temp[i]=s[i];
            k+=i;
        }
        for(int j=i;j<k;j++){
            if(s[j]==')'){
                temp[j]='\0';
                k--;
            }
            if(s[j]=='}'){
                temp[j]='\0';
                k--;
            }
            if(s[j]==']'){
                temp[j]='\0';
                k--;
            }
        }
    }
    for(int i=0;i<k;i++){
        printf("%c", temp[i]);
    }
    return true;
}

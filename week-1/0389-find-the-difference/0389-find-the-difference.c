char findTheDifference(char* s, char* t) {
    char a[1000]="", b[1000]="", c='\0';
    int length_s = strlen(s);
    int length_t = strlen(t);
    for(int i=0;i<length_s;i++){
        a[s[i]]++;
    }
    for(int i=0;i<length_t;i++){
        b[t[i]]++;
    }
    for(int i=0;i<length_t;i++){
        if(a[t[i]]!=b[t[i]]){
            c = t[i];
        }
    }
    printf("%c",c);
    return c;
}

bool judgeCircle(char* moves) {
    int length = strlen(moves);
    int dem1=0, dem2=0;
    for(int i=0;i<length;i++){
        switch(moves[i]){
            case 'U':
                dem1++;
                break;
            case 'D':
                dem1--;
                break;
            case 'L':
                dem2++;
                break;
            case 'R':
                dem2--;
                break;
        }
    }
    if(dem1==0 && dem2==0) return true;
    else return false;
}

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char arr[1001]="", brr[1001]="";
    for(int i=0;i<word1Size;i++){
        strcat(arr, word1[i]); // nối word1 vào arr
    }
    for(int i=0;i<word2Size;i++){
        strcat(brr, word2[i]); // nối word2 vào brr
    }
    int length_arr = strlen(arr); //độ dài word1 sau khi nối
    int length_brr = strlen(brr); //độ dài word2 sau khí nối
    bool flag = true;
    if(length_arr == length_brr){
        for(int i=0;i<length_arr;i++){
            if(arr[i]!=brr[i]){
                flag = false;
            }
        }
    }
    else return false;
    if(!flag) return false;
    else return true;
}

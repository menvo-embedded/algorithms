/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* result = malloc(candiesSize*sizeof(bool));
    *returnSize = candiesSize;

    for(int i=0;i<candiesSize;i++){ //gán toàn bộ giá trị ban đầu cho mảng bool trả về là true
        result[i]=true;
    }

    for(int i=0;i<candiesSize;i++){
        int temp = candies[i]+extraCandies;
        for(int j=0;j<candiesSize;j++){
            if(temp<candies[j]){
                result[i]=false;
            }
        }
    }
    
    return result;
}

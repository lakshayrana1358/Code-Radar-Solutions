#include <stdio.h>

int main(){
    int sz;
    scanf("%d", &sz);
    int nums[sz];
    int eSum = 0, oSum = 0;


    for(int i=0; i<sz; i++){
        scanf("%d", &nums[i]);

        if(nums[i]%2==0){
            eSum++;
        } else {
            oSum++;
        }
    }

    printf("%d %d", eSum, oSum);


    return 0;
}
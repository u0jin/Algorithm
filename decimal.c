
//clear 0202
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int tmp;
    int cnt=0,sum=0;
    int i,j,h,k;

    for( i = 0 ; i < nums_len ; i++){
        for( j =1; j < nums_len-i ; j++){
            if( nums[j-1] > nums[j]){
                tmp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = tmp;

            }
        }
    }


    for(i = 0 ; i < nums_len -2 ; i++){
        for( j = i+1 ; j < nums_len-1 ; j++){
            for( k=j+1; k <nums_len;k++){

                 sum = (nums[i] + nums[j] + nums[k]);


                for(h=2; h < sum ;h++){
                     if( sum %h == 0) {
                         cnt++;
                        }
                }
                if(cnt ==0){answer++;}
                cnt=0;
            }


        }
    }



    return answer;
}

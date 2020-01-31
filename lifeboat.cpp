#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int i,j,n;
    int tmp=0;    
    int k=0;
    int max=0;
    
    n=people.size();

    
    for ( i = 0 ; i < n ; i++){
        for( j = 1 ; j < n-i ; j ++){
            if(people[j-1] > people[j]){
                tmp = people[j];
                people[j] = people[j-1];
                people[j-1] = tmp;
            }
        }
    }
    

    for( i = 0 ; i < n ; i ++){
        for( j = (n-1)-i ; j > 0 ; j--){
            if(people[i] + people[j] > limit){
                    answer++;
            }else {
                answer++;
                break;
                
            }            
        }if(i+1 == j)break;

    }
    
    return answer;
}
#include <stdio.h>
int main(){
	int num, trns, k = 0, sum = 0;
	for (num = 2; num < 1000; num++){
		for (trns = 2; trns < num; trns++){
			if (num % trns == 0){ //num 과 trns 가 같을경우 합성수 단, trns의 범위는 num미만.
				k++; // 체크용 변수
			}
		}
		if (k == 0){  // k가 1일시 나누어 지게 되어 합성수 k가 0일시 자기 자신빼고는 나누어 지는게 없다. 
			sum += num; // 소수일시 sum 이라는 변수에 num+sum을 저장한다.
			printf("%d는 소수\n", num);
		}
		k = 0;
	}
	printf("1~1000까지의 소수의 합:%d\n", sum);


}
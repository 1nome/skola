#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	printf("Number of iterations, starting number\n");

	int n;
	scanf("%d", &n);

	char num[100];
	scanf("%s", num);
	int counts[10];
	for(int i = 0; i < n; i++){
		// count nums
		memset(counts, 0, sizeof(int) * 10);
		int j = 0;
		while(num[j] != '\0'){
			for(int k = 0; k < 10; k++){
				if(num[j] == k + '0'){
					counts[k]++;
					break;
				}
			}
			j++;
		}
		// build new string
		memset(num, '\0', 100);
		int k = 0;
		for(int j = 0; j < 10; j++){
			// hard coded like a noob
			if(counts[j] / 1000){
				num[k++] = counts[j] / 1000 + '0';
			}
			if(counts[j] / 100){
				num[k++] = counts[j] % 1000 / 100 + '0';
			}
			if(counts[j] / 10){
				num[k++] = counts[j] % 100 / 10 + '0';
			}
			if(counts[j]){
				num[k++] = counts[j] % 10 + '0';
				num[k++] = j + '0';
			}
		}
		printf("%s\n", num);
	}

	return 0;
}

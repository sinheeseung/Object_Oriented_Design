#include <iostream>

int print(int num){
	for(int i=0;i<num/2;i++){
		for(int j =num/2;j>i;j--){
			printf(" ");
		}
		for(int j=0;j<i*2+1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=0; i<num/2-1;i++){
		for(int j=0;j<i;j++){
			printf(" ");
		}
		for(int j=0;j<num/2-2-i;j++){
			printf("*");
		}
		printf("\n");
	}
}


int main()
{
	int num = 10;
	print(num);
	return 0;
}

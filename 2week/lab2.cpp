#include <iostream>
using namespace std;

int some_func1(int start, int end){
	for(int i=0;i<end/2;i++){
		for(int j=0;j<i;j++){
			printf(" ");
		}

		for(int j=0;j<end-i*2-1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	for(int i=1;i<end/2;i++){
		for(int j=1;j<end/2-i;j++){
			printf(" ");
		}

		for(int j=0;j<i*2+1;j++){
			printf("*");
		}
		printf("\n");
	
	}
}

int main(){
	int start = 0, end = 10;
	some_func1(start, end);

	return 0;
}

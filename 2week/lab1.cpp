#include <iostream>
using namespace std;

int some_func1(int num){
	for(int i=0;i<num;i++){
		for(int j=num-1;j>i;j--){
			printf(" ");
		}
		
		for(int j=0;j<2*i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=1;i<num;i++){
		for(int j=0;j<i;j++){
			printf(" ");
		}

		for(int j=2*num-1;j>2*i;j--){
			printf("*");
		}
		printf("\n");
	}

}

int main(){
	int num = 10;
	some_func1(num);

	return 0;
}

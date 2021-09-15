#include <iostream>
using namespace std;

int leftVer(int scale){
	for(int i=0;i<scale;i++){
                printf("|\n");
        }
}
int rightVer(int scale, int blank){
	for(int i=0;i<scale;i++){
                for(int j=0;j<scale+blank;j++){
                        printf(" ");
                }
                printf("|\n");
        }
}
int horizon(int scale, int blank){
	for(int i=0;i<blank;i++){
		printf(" ");
	}
	for(int i=0;i<scale;i++){
		printf("-");
	}
	printf("\n");
}
int two_vertical(int scale){
	for(int i=0;i<scale;i++){
                printf("|");
                for(int j=0;j<scale;j++){
                        printf(" ");
                }
                printf("|\n");
        }
}
int PrintNumber1(int scale){
	leftVer(scale);
}
int PrintNumber2(int scale){
	horizon(scale,1);
	rightVer(scale,1);
	horizon(scale,1);
	leftVer(scale);
	horizon(scale,1);
}
int PrintNumber3(int scale){
	horizon(scale,1);
	rightVer(scale,1);
	horizon(scale,1);
	rightVer(scale,1);
	horizon(scale,1);
}
int PrintNumber4(int scale){
	two_vertical(scale);
	horizon(scale,1);
	rightVer(scale,1);
}
int PrintNumber5(int scale){
	horizon(scale,1);
	leftVer(scale);
	horizon(scale,1);
	rightVer(scale,1);
	horizon(scale,1);
}
int PrintNumber6(int scale){
	horizon(scale,1);
	leftVer(scale);
	horizon(scale,1);
	two_vertical(scale);
	horizon(scale,1);
}
int PrintNumber7(int scale){
	horizon(scale,0);
	rightVer(scale,0);
	rightVer(scale,0);
}
int PrintNumber8(int scale){
	horizon(scale,1);
	two_vertical(scale);
	horizon(scale,1);
	two_vertical(scale);
	horizon(scale,1);
}
int PrintNumber9(int scale){
	horizon(scale,1);
	two_vertical(scale);
	horizon(scale,1);
	rightVer(scale,1);
}
int PrintNumber0(int scale){
	horizon(scale,1);
	two_vertical(scale);
	two_vertical(scale);
	horizon(scale,1);
}

int main(){
	int num, scale;

	while(1){
		printf("Enter the number(0~9) :");
        	std::cin >> num;

      		printf("Enter scale(1~10) :");
        	std::cin >> scale;

		if(num >= 0 && num <= 9 && scale >= 1 && scale <= 10)
		break;	
	}

	if(num == 1)
		PrintNumber1(scale);
	if(num == 2)
                PrintNumber2(scale);
	if(num == 3)
                PrintNumber3(scale);
	if(num == 4)
                PrintNumber4(scale);
	if(num == 5)
                PrintNumber5(scale);
	if(num == 6)
                PrintNumber6(scale);
	if(num == 7)
                PrintNumber7(scale);
	if(num == 8)
                PrintNumber8(scale);
	if(num == 9)
                PrintNumber9(scale);
	if(num == 0)
		PrintNumber0(scale);
	return 0;
}

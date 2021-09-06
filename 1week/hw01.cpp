#include <iostream>

void PrintCenterAilgnStar(int height){
	for(int i=0;i<height;i++){
		for(int j=0;j<height-1-i;j++){
			std::cout << " ";
	}
		for(int k=0;k<i*2+1;k++){
			std::cout << "*";
		}
		std::cout << "\n";
	}
}

int main(int argc, char* argv[]){
	PrintCenterAilgnStar(7);
	return 0;
}

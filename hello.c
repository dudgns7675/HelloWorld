#include <stdio.h>
void master(){
	printf("This is Master Branch!!\n");
}
void second(){
	printf("This is Second Branch!!\n");
}

void myname(){
	printf("Lee!\n");
}

int main(){
	master();
	second();
	printf("Hello Git!\n");
	myname();
	return 0;
}

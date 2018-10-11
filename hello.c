#include <stdio.h>
void master(){
	printf("This is Master Branch!!\n");
}

void myname(){
	printf("Lee!\n");
}

int main(){
	master();
	printf("Hello Git!\n");
	myname();
	return 0;
}

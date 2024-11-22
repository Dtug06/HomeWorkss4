#include<stdio.h>
int main (){
	int number;
	printf ("moi nhap so can kiem tra\n"); 
	scanf ("%d",&number) ;
	if (number %3==0 && number %5==0) {
		printf ("so nay chia het cho ca 3 va 5\n");
		 
	}else if (number % 3==0 && number%5!=0) {
		printf("so nay chia het cho 3");
		 
	}if (number %3!=0 &&number%5==0) {
		printf("so nay chia het cho 5");
		 
	}else
	 printf("so nay deu khong chia het cho ca 3 va 5");
	 
	return 0;
	 
} 

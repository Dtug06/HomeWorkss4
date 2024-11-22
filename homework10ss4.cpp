#include<stdio.h> 
int main(){
	int a,b,c,temp;
	printf("nhap a\n");
	scanf("%d",&a) ;
	printf("nhap b \n");
	scanf("%d",&b) ;
	printf("nhap c \n");
	scanf("%d",&c);	 
	if (a>b) {
		temp=a;
		a=b;
		b=temp; 		 
	}
	if(b>c) {
			temp=b;
			b=c;
			c=temp; 		
	}
	if (a>b) {
		temp=a;
		a=b;
		b=temp; 		 
	}
	if(b>c) {
			temp=b;
			b=c;
			c=temp; 		
	}
	
	printf("%d,%d,%d",a,b,c) ;
	return 0; 	 
} 

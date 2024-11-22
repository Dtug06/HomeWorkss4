#include <stdio.h> 
int main (){
	int a,b,c;
	printf("noi nhap so a\n");
	scanf("%d",&a);
	printf("moi nhap so b\n");
	scanf("%d",&b) ;
	printf("moi nhap so c\n");
	scanf("%d",&c) ;
	if (c<b && c>a){
		printf("so %d nam trong khoang %d va %d",c,a,b);
	 
	} else 
	printf ("khong nam trong khoang") ;
return 0;	
} 

#include <stdio.h>
int main (){
	int year ;
	printf ("nhap so nam ");
	scanf("%d",&year ) ;
	if ( year %4==0&&year%100!=0 ||year %400==0){
		printf( "nam %d la 1 nam nhuan ",year);
		 
	}else 
	printf ("khong phai la nam nhuan ");
	return 0; 	
} 

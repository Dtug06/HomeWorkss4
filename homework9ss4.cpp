#include <stdio.h>
int main (){
	int year ,nhuan,month,day; 
	 
	printf ("nhap so nam ");
	scanf("%d",&year ) ;
	if ( year %4==0&&year%100!=0 ||year %400==0){
		nhuan = 1;		
	}else nhuan=0;
	printf("nhap thang\n");
	scanf("%d",&month) ;
	printf("nhap ngay\n");
	scanf("%d",&day) ;
	printf("%d/%d/%d\n",day,month,year);
if (month >0 && month <=12) {
	printf("thang hop le");
	 
}else 
printf("thang khong hop le \n");
if (day >0&&day <=31){
	if (month ==2&&nhuan==1){
		if (day <=28&&day >0){
			printf("so ngay hop le\n") ;
		} else
		printf("so ngay khong hop le\n"); 
	} 
	if (month==4||month==6||month==9|month==11){
		if (day <=30&&day>0){
			printf("ngay hop le\n"); 
		} else 
		printf("ngay khong hop le\n") ;
	}else 
	printf("ngay hop le\n");
	 
}
return 0;
}
 
 
	 
	 
	 
		
		 
	

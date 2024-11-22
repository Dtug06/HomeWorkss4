#include <stdio.h> 
int  main(){
	int kWoat,firstKwoat,lastKwoat,moneyElec; 
printf ("nhap so dien tu dau thang\n");
scanf("%d",&firstKwoat) ;
printf("nhap so dien cuoi thang\n") ;
scanf("%d",&lastKwoat) ;
kWoat=lastKwoat-firstKwoat;
if (kWoat<50 && kWoat>=0) {
	moneyElec=kWoat*10;
	printf("tien dien thang nay la:%d",moneyElec) ;	
}
if (kWoat<100 && kWoat>=50) {
	moneyElec=kWoat*15;
	printf("tien dien thang nay la:%d",moneyElec) ;	
}
if (kWoat<100 && kWoat>=50) {
	moneyElec=kWoat*20;
	printf("tien dien thang nay la:%d",moneyElec) ;
} 
 if (kWoat<150 && kWoat>=100) {
	moneyElec=kWoat*25;
	printf("tien dien thang nay la:%d",moneyElec) ;
}
if (kWoat<200 && kWoat>=150) {
	moneyElec=kWoat*30;
	printf("tien dien thang nay la:%d",moneyElec) ;
}
return 0;
}
 

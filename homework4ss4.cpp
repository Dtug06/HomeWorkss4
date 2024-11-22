#include <stdio.h> 
int main (){
	int month ; 
	printf("moi nhap so thang\n");
	scanf ("%d",&month);
	switch (month){
		case 1:
		printf ("thang %d co 31 ngay ",month );
		break ;
		case 2:
		printf ("thang %d co 29 doi voi nam nhuan ,28 ngay voi nam khong nhuan ",month );
		break ;
		case 3:
		printf ("thang %d co 31 ngay ",month );
		break ;
		case 4:
		printf ("thang %d co 30 ngay ",month );
		break ;
		case 5:
		printf ("thang %d co 31 ngay ",month );
		break ;
		case 6:
		printf ("thang %d co 30 ngay ",month );
		break ;
		case 7:
		printf ("thang %d co 31 ngay ",month );
		break ;
		case 8:
		printf ("thang %d co 31 ngay ",month );
		break ;
		case 9:
		printf ("thang %d co 30 ngay ",month );
		break ;
		case 10:
		printf ("thang %d co 31 ngay ",month );
		break ;
		case 11:
		printf ("thang %d co 30 ngay ",month );
		break ;
		case 12:
		printf ("thang %d co 31 ngay ",month );
		break ;
		default :
		printf("so thang khong hop le");
		break;
		 
		 
	}
	return 0; 
	
} 

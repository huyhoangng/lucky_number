#include <stdio.h>
#include <math.h>

int main (){
	int i;
	int tong_tien=0;
	int c,a,cf,n,b;
	do
	{
	
		printf("***MENU***\n");
		printf("1.Capuchino = 50.000\n");
		printf("2.Americano = 45.000\n");
		printf("3.Cafe den da khong duong = 30.000\n");
		printf("4.Nuoc loc = 5.000\n");
		printf("5.Banh ngot = 30.000\n");
		printf("---------------------\n");
	printf("Moi ban chon mon: ");
	scanf("%d",&i);
		switch (i){
	case 1:
		i=1;
		printf("Ban da chon Capuchino\n",c++);	
	break;
	case 2:
		i=2;
		printf("Ban da chon Americano \n",a++);
	break;
	case 3:
		i=3;
		printf("Ban da chon Cafe den da khong duong\n",cf++);
	break;
	case 4:
		i=4;
		printf("Ban da chon Nuoc loc\n",n++);
	break;
	case 5:
		i=5;
		printf("Ban da chon Banh ngot\n",b++);
	break;
	default :
	printf("Ban hoan thanh order!\n");
	break;
	}
	}
while (i !=0);
tong_tien=(50.000*c)+(45.000*a)+(30.000*cf)+(5.000*n)+(30.000*b);
printf ("Tong tien cua ban la %d\n",tong_tien);

return 0;
}


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Câu 4:--------------------------------------------------------------------------------------------- 
	int a,b;
	float x;
	
	printf("Nhap a vao day: ");
	scanf("%d",  &a);
	
	printf("Nhap b vao day: ");
	scanf("%d",  &b);
	
	//	printf("Ket qua phep tinh nhan la: %d", a*b);

	if(a ==0)
	{
		if(b == 0)
		{
			printf("Phuong trinh vo so nghiem");
		}
		else
		{
			printf("phuong trinh vo nghiem ");
		}
		
	}	
	else
	{
		x = -b/a;
		printf("Phuong trinh co nghiem rieng biet %0.2f", x);
	}

	return 0;
}

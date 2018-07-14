#include <stdio.h>
#include <math.h>

void print(int num){
	printf(",");
	if (num<100){
		printf("0");
		if (num<10){
			printf("0");
		}
	}
	printf("%d",num);
}

int main(){
	int x, y, z, num;
	int sgn = 0;
	scanf("%d %d",&x,&y);
	
	int  sum = x + y;
	if (sum<0){
		sum = -sum;
		printf("-");
		sgn = 1;
	}
	x = sum;
	y = -1;
	while (x>0){
		x /= 1000;
		y++;
	}
	x = sum;
	
	if (x==0){
		printf("0");
	}else{
		z = pow(1000,y);
		printf("%d",x/z);
		y--;
		for (;y>=0;y--){
			z = pow(1000,y);
			num = x/z%1000;
			print(num);
		}
	}
	printf("\n");
	
	return 0;
}

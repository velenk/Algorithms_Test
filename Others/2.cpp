#include <stdio.h>
int constellation(int a,int b);
int main()
{
	int n,i;
	int a[2001];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[2*i]);
		scanf("%d",&a[2*i+1]);
	}
	for(i=0;i<n;i++) {
		constellation(a[2*i],a[2*i+1]);
		if(i!=n-1) {
			printf("\n");
		}
	}
	return 0;
}
int constellation(int a,int b)
{
	if(a==3&&b>=20||a==4&&b<=19) {
		printf("Aries");
	}
	else if(a==4&&b>=20||a==5&&b<=20) {
		printf("Taurus");
	}
	else if(a==5&&b>=21||a==6&&b<=21) {
		printf("Gemini");
	}
	else if(a==6&&b>=22||a==7&&b<=22) {
		printf("Cancer");
	}
	else if(a==7&&b>=23||a==8&&b<=22) {
		printf("Leo");
	}
	else if(a==8&&b>=23||a==9&&b<=22) {
		printf("Virgo");
	}
	else if(a==9&&b>=23||a==10&&b<=23) {
		printf("Libra");
	}
	else if(a==10&&b>=24||a==11&&b<=22) {
		printf("Scorpio");
	}
	else if(a==11&&b>=23||a==12&&b<=21) {
		printf("Sagittarius");
	}
	else if(a==12&&b>=22||a==1&&b<=19) {
		printf("Capricorn");
	}
	else if(a==1&&b>=20||a==2&&b<=18) {
		printf("Aquarius");
	}
	else if(a==2&&b>=19||a==3&&b<=19) {
		printf("Pisces");
	}
	return 0;
}

#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;
	
    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf("%lf",&a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}

/* ?????????? */
double f( int n, double a[], double x ){
	int i = 0;
	int sum = 0;
	
	double power(double x, int i){
		const double y = x;
		x = 1;
		
		for (;i>0;i--){
			x *= y;
		}
		return x;
	}
	
	for (;i<=n;i++){
		sum += a[i]*power(x, i);
	}
	
	return sum;
}

#include <stdio.h>

void draw(int i,char s);

int main()
{
  char s;
  int n,x;
  int i = 1;
  
  if(scanf("%d %c",&n,&s)){
  }
  
  while((i*i*2-1)<n){
    i++;
  }
  
  i--;
  if(i==0){
  	x = n - 1;
  	printf("%c\n",s);
  }else{
  	x = n - (i*i*2-1);
  	draw(i,s);
  }

  printf("%d\n",x);
  
  return 0;
}

void draw(int i,char s)
{
  int cnt,cnt1;
  int cnt0 = 0;
  
  for(;i>0;i--){
  	cnt = 2*i-1;
  	cnt1 = cnt0;
    for(;cnt1>0;cnt1--){
    	printf(" ");
	}
	for(;cnt>0;cnt--){
    	printf("%c",s);
	}
	printf("\n");
    cnt0++;
  }
  
  int max = cnt0 + 1;
  i = 2;
  cnt0 -= 2;
  
  for(;i<max;i++){
  	cnt = 2*i-1;
  	cnt1 = cnt0;
    for(;cnt1>0;cnt1--){
    	printf(" ");
	}
	for(;cnt>0;cnt--){
    	printf("%c",s);
	}
	printf("\n");
    cnt0--;
  }
}

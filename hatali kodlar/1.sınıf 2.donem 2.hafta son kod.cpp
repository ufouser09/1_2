#include <stdio.h>

int main(){
	int i,a,b,c;
	for(i=0;i<999;i++){
		a=i%10;
		b=i/100;
		c=(i-(b*100))/10;
		
		if(a*a*a+b*b*b+c*c*c==i){
			printf("sayimizi bulduk=%d\n",i);
		}
	}
	return 0;
}

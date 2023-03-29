#include<stdio.h>
#include<math.h>//输入x值，按照下列公式计算cos(x)的
//值，直到最后一项小于10-6为止。
//测试数据：输入1（注意：单位是弧度）；输出0.54 。
int jiecheng(int a){
	if(a==0){
		return 1;
	}
	int i;
	int k=1;
	for(i=1;i<=a;i++){
		k*=i;
	}
	return k;
}
int main() {
	float x,sum,term,sign;
	int k;
	printf("input:");
	scanf("%f",&x);
//	sum=1;
//	sign=1;
//	term=1;
//	for(k=1; term<pow(10,-6); k++) {
//		term=x*x/((2*k-1)/(2*k))*term;
//		sign=-sign;
//		sum+=term*sign;
//	}
	sum=0;
	sign=1;
	term=1;
	for(k=0;term%0.000001>pow(10,-6);k++){
		term=sign*pow(x,2*k)[表情]cheng(2*k);
		sum+=term;
		sign=-sign;
		if(term<0){
			term=-term;
		}
	}
	printf("cos(x)=%.2f\n",sum);
}
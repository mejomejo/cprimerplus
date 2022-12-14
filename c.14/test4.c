#include <stdio.h>

struct fushu{
	float sb;
	float xb;
};

struct fushu jia(struct fushu x,struct fushu y)
{
	struct fushu rr;
	rr.sb=x.sb+y.sb;
	rr.xb=x.xb+y.xb;
	return rr;
}

struct fushu jian(struct fushu x,struct fushu y)
{
	struct fushu rr;
	rr.sb=x.sb-y.sb;
	rr.xb=x.xb-y.xb;
	return rr;
}

struct fushu cheng(struct fushu x,struct fushu y)
{
	struct fushu rr;
	rr.sb=x.sb*y.sb-x.xb*y.xb;
	rr.xb=x.sb*y.xb+x.xb*y.sb;
	return rr;
}

struct fushu chu(struct fushu x,struct fushu y)
{
	struct fushu rr;
	rr.sb=(x.sb*y.sb+x.xb*y.xb)/(y.sb*y.sb+y.xb*y.xb);
	rr.xb=(x.xb*y.sb-x.sb*y.xb)/(y.sb*y.sb+y.xb*y.xb);
	return rr;
}

void shizi(float x,float y){
	if(y < 0){
		printf("(%.1f%.1fi)",x,y);
	}
	else
		printf("(%.1f+%.1fi)",x,y);
}

void result(float x,float y){
	if(y<=0.05 && y >= -0.05)
		printf("%.1f\n",x);
	else if(x <=0.05 && x >=-0.05)
			printf("%.1fi\n",y);
	else if(y < 0)
			printf("%.1f%.1fi\n",x,y);
	else
			printf("%.1f+%.1fi\n",x,y);
}

int main(void)
{
	struct fushu c1,c2,r1,r2,r3,r4;
	
	scanf("%f %f %f %f",&c1.sb,&c1.xb,&c2.sb,&c2.xb);
	
	r1=jia(c1,c2);	
	shizi(c1.sb,c1.xb);
	printf(" + ");
	shizi(c2.sb,c2.xb);
	printf(" = ");
	result(r1.sb,r1.xb);
	
	r2=jian(c1,c2);		
	shizi(c1.sb,c1.xb);
	printf(" - ");
	shizi(c2.sb,c2.xb);
	printf(" = ");
	result(r2.sb,r2.xb);
	
	r3=cheng(c1,c2);	
	shizi(c1.sb,c1.xb);
	printf(" * ");
	shizi(c2.sb,c2.xb);
	printf(" = ");
	result(r3.sb,r3.xb);
	
	r4=chu(c1,c2);		
	shizi(c1.sb,c1.xb);
	printf(" / ");
	shizi(c2.sb,c2.xb);
	printf(" = ");
	result(r4.sb,r4.xb);
}
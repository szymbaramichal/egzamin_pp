#include <stdio.h>
#include <stdlib.h>

struct u{
int l, m;
struct u * n;
} *u1,*u2;

int main()
{
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
	u1=NULL; u2=u1; u1=(struct u *)malloc(sizeof(struct u)); 
	u2=(struct u *)malloc(sizeof(struct u)); 
	u2->n=u1; u2->n->l=9; u2->n->m=0; u1=u2;
	//~~~~~~~~~~~~~~~~~~~~~Nie~~~~~~~~~~~~~~~~~~~~~~~~//
	
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
	u1=NULL; u2=u1; u2=(struct u *)malloc(sizeof(struct u)); 
	u2->n=(struct u *)malloc(sizeof(struct u)); 
	u2=u2->n; u2->l=9; u2->m=0; u1=u2;
	//~~~~~~~~~~~~~~~~~~~~~Tak~~~~~~~~~~~~~~~~~~~~~~~~//
	
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
	u2=NULL; u1=u2; u1=(struct u *)malloc(sizeof(struct u)); 
	u1->n=(struct u *)malloc(sizeof(struct u));
	u2=u1; u2->l=9; u2->m=0; 
	//~~~~~~~~~~~~~~~~~~~~~Nie~~~~~~~~~~~~~~~~~~~~~~~~//
	
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
	u2=NULL; u1=u2; u1=(struct u *)malloc(sizeof(struct u)); 
	u1->n=(struct u *)malloc(sizeof(struct u));
	u2=u1->n; u2->l=9; u2->m=0; u2=u1;
	//~~~~~~~~~~~~~~~~~~~~~Tak~~~~~~~~~~~~~~~~~~~~~~~~//
	
	
}

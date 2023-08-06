#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include "0729_SETTING.h"





void MALLOC_TEST2(){
    char temp[80];
    char *str[3];

    int i;
    for(i=0; i<3;i++){
        printf("input character:");
        gets(temp);
        str[i]= (char*)malloc(strlen(temp+1));
        strcpy(str[i],temp);
      }
      for(i=0; i<3;i++){
        printf("%s\n", str[i]);
      }
      for(i=0; i<3;i++){
        free(str[i]);
        printf("free memory:%d\n",i);
      }
      printf("free memory done");

}


void MALLOC_FREE(){

	int *pi;              // ���� �Ҵ� ������ ������ ������ ����
	double *pd;

	pi = (int*)malloc(sizeof(int));		       // �޸� ���� �Ҵ� �� ������ ����
	if (pi == NULL)						       // ���� �Ҵ翡 �����ϸ� NULL ������ ��ȯ
	{
		printf("# �޸𸮰� �����մϴ�.\n");    // ���� ��Ȳ �޽��� ���
		exit(1);                               // ���α׷� ����
	}
	pd = (double*)malloc(sizeof(double));

	*pi = 10;                                  // �����ͷ� ���� �Ҵ� ���� ���
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);     // ���� �Ҵ� ������ ����� �� ���
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	free(pi);                                  // ���� �Ҵ� ���� ��ȯ
	free(pd);

}


void test_2(){
    char *pa="success";
    char *pb="failure";

    printf("pa:%s, pb:%s\n",pa,pb);
    swap_ptr(&pa,&pb);
    printf("pa:%s, pb:%s\n",pa,pb);


}

void swap_ptr(char **ppa, char **ppb){
    char *pt;
    pt=*ppa;
    *ppa=*ppb;
    *ppb=pt;

    }


void test_1()
{
    int a=0;
    int *m= &a;
    a=a+1;
    a=a+2;
    a=a+3;
    printf("a:%d",a);

    int b=5;
    int *c=&b;
    int *d=&b;
    printf("b=%d, c=%d, d=%d",&b,c,*d);
}

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

	int *pi;              // 동적 할당 영역을 연결할 포인터 선언
	double *pd;

	pi = (int*)malloc(sizeof(int));		       // 메모리 동적 할당 후 포인터 연결
	if (pi == NULL)						       // 동적 할당에 실패하면 NULL 포인터 반환
	{
		printf("# 메모리가 부족합니다.\n");    // 예외 상황 메시지 출력
		exit(1);                               // 프로그램 종료
	}
	pd = (double*)malloc(sizeof(double));

	*pi = 10;                                  // 포인터로 동적 할당 영역 사용
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);     // 동적 할당 영역에 저장된 값 출력
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi);                                  // 동적 할당 영역 반환
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

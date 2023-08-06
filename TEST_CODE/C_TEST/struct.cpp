
#include <stdio.h>
#include "struct.h"
#include <stdlib.h>
#include <string.h>

#define name2 "good morning"

extern char name3[]=name2;

void struct_ex1(int num, double grade){
    printf("num:%d\n",num);
    printf("grade :%.1lf\n", grade);
}


void write_profile(char *name1, int data, int age1,double height1, char *introduce)
{
    struct profile temp_profile;
    strcpy(temp_profile.name, name1);
    //temp_profile.name= name1;
    temp_profile.date =data;
    temp_profile.age =age1;
    temp_profile.height =height1;
    temp_profile.intro = introduce;

    printf("name : %s\n",temp_profile.name);
    printf("date : %d\n",temp_profile.date);
    printf("age : %d\n",temp_profile.age);
    printf("height : %.1f\n",temp_profile.height);
    printf("intro : %s\n",temp_profile.intro);

}

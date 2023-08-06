#ifndef _STRUCT_H_
#define _STRUCT_H_

void struct_ex1(int num, double grade);
void write_profile(char *name, int data, int age1,double height1,char *intro);

struct student
{
    char name[20];
    int num;
    double grade;

};


struct profile
{
    char name[20];
    int date;
    int age;
    int num;
    double height;
    char *intro;

};

#endif // STRUCT_H_INCLUDED

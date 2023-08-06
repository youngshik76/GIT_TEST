#include<stdio.h>
void main()
{
    // char c='Z';
    // char *cp=&c;
    // int n=100;
    // int *np=&n;
    // //char **cpp;
    // //int ***nppp;

    // //printf("%d  %d  %d  %d\n",n,*np,**npp,***nppp);    
    // printf("%d  %d  %d  \n",sizeof(c),sizeof(*cp),sizeof(cp));
    // printf("%d  %d  %d  \n",sizeof(n),sizeof(*np),sizeof(np));

    int n=0x10;
    //int *np=&n;
    int **npp=&n;
    printf("test3\n");
    //printf("%d  %d  %d\n",n,*np,**npp);
    //printf("%d  %d  %d\n",sizeof(n),sizeof(*np),sizeof(**npp));
    //printf("%d  %d  %d\n",sizeof(n),sizeof(np),sizeof(npp));
    printf("%x  %x  %x\n",n,*npp,**npp);
    
}
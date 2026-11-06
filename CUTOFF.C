#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char*argv[])
{
char name[30];
int m1,m2,m3,m4,m5,total;
float avg,cutoff;

if(argc!=7)
{
printf("usage:./a.out Name M1 M2 M3 M4 M5\n");
return 0;
}

strcpy(name,argv[1]);
m1=atoi(argv[2]);
m2=atoi(argv[3]);
m3=atoi(argv[4]);
m4=atoi(argv[5]);
m5=atoi(argv[6]);
total=m1+m2+m3+m4+m5;
avg=total/5.0;
cutoff=m1+(m2/2.0)+(m3/2.0);
printf("\n============================\n");
printf("STUDENT CUTOFF REPORT \n");
printf("\n===========================\n");
printf("student name:%s\n",name);
printf("sub 1:%d\n",m1);
printf("sub 2:%d\n",m2);
printf("sub 3:%d\n",m3);
printf("sub 4:%d\n",m4);
printf("sub 5:%d\n",m5);

printf("total marks:%d\n",total);
printf("\average marks:%.2f\n",avg);
printf("cutoff marks:%.2f\n",cutoff);

return 0;
}
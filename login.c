#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char studentID[]="gaganmanohar",password[]="12345",id[20],p[20];
  int n=1, x, y;
  do{
    printf("\nStudent_id:");
    scanf("%s",&id);
    fflush(stdout);
    printf("\nPassword:");
    scanf("%s",&p);
    fflush(stdout);

    x=strcmp(id, studentID);
    y=strcmp(p, password);
     if(x==0 && y==0)
     {
       printf("\nSuccessfully Loggedin\n");
       break;
     }
     else
     {
       printf("\nWrong Password,try again \n", 3-n);
       getchar();
       n++;

     }
     if(n>3)
     {
       printf("\nAccess Denied\n");
       getchar();
     }
   }
     while(n<=3);
     while(1)
     {
     fflush(stdout);
     int c;
     printf("enter your choice\n 1.attendance\n2.bunkmeter\n3.results\n4.notes\n5.timetable\n6.courseinfo\n7.exit\n");
     scanf("%d",&c);
     switch(c)
     {
       case 1: attendance();
                break;
       case 2: bunkmeter();
                break;
       case 3: results();
                break;
       case 4: notes();
                break;
       case 5: timetable();
                break;
       case 6: courseinfo();
                break;
       default: exit(0);
     }
   }
   return 0;
}




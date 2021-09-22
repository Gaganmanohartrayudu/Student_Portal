#include<stdio.h>
#include<string.h>
int main()
{
  printf("\t\t=================================================\n");
  printf("\t\t|                                               |\n");
  printf("\t\t|        -----------------------------          |\n");
  printf("\t\t|                  ATTENDANCE                   |\n");
  printf("\t\t|        -----------------------------          |\n");
  printf("\t\t|                                               |\n");
  printf("\t\t=================================================\n\n\n");
  char name[25],name1[24];
  printf("enter the name of student:\n");
  scanf("%s",name);
  float eatt=42,tot=48,bat=40;
  printf("----------------------------------------\n");
  printf("| SUBJECT | ATTENDANCE | PERCENTAGE \n");
  printf("----------------------------------------\n");
  printf("|   EC    |     %f     |      %f     \n",eatt,(eatt/tot)*100);
  printf("----------------------------------------\n");
  printf("|   CHEM  |     %f     |      %f     \n",bat,(bat/tot)*100);

  printf("Enter the student's name");
  scanf("%s",name1);
  eatt=47;tot=48;bat=46;
  printf("----------------------------------------\n");
  printf("| SUBJECT | ATTENDANCE | PERCENTAGE \n");
  printf("----------------------------------------\n");
  printf("|   EC    |     %f     |      %f     \n",eatt,(eatt/tot)*100);
  printf("----------------------------------------\n");
  printf("|   CHEM  |     %f     |      %f     \n",bat,(bat/tot)*100);

  return 0;
}

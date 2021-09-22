#include<stdio.h>
#include<string.h>
int main()
{
  printf("\t\t=================================================\n");
  printf("\t\t|                                               |\n");
  printf("\t\t|        -----------------------------          |\n");
  printf("\t\t|              COURSE INFORMATION               |\n");
  printf("\t\t|        -----------------------------          |\n");
  printf("\t\t|                                               |\n");
  printf("\t\t=================================================\n\n\n");
  char name[25];
  printf("enter the name of student:\n");
  scanf("%s",name);
  printf("%s's course information\n", name);
  printf("|------------------------------------------------------------------------------------------|\n");
  printf("| 1.ELECTRONICS                                                                            |\n");
  printf("|   HOD's name    :  DR.NEHA                                                               |\n");
  printf("|   Staff's room  :  BLOCK B , ROOM 306                                                    |\n");
  printf("|   Topics        :  a)Analog Electronics                                                  |\n");
  printf("|                    b)Digital Electronics                                                 |\n");
  printf("|   References    :  a)Boylestad, Pearson Publications                                     |\n");
  printf("|                    b)Basic DIgital Electronics, Wiley Publications                       |\n");
  printf("|------------------------------------------------------------------------------------------|\n");
  printf("| 1.CHEMISTRY                                                                              |\n");
  printf("|   HOD's name    :  DR.VARSHINI                                                           |\n");
  printf("|   Staff's room  :  BLOCK B , ROOM 324                                                    |\n");
  printf("|   Topics        :  a)Spectroscopy                                                        |\n");
  printf("|                    b)Coordination Compounds                                              |\n");
  printf("|   References    :  a)An Introduction to Spectroscopy, Captain Jack, Wiley Publications   |\n");
  printf("|                    b)Inorganic Chemistry, S.D.Sharma, Pearson Publications               |\n");
  printf("|------------------------------------------------------------------------------------------|\n");

  return 0;
}

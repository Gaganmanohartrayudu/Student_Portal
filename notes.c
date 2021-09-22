#include<stdio.h>
#include"string.h"



int main(){
char a[10];
int b=1;
int c=0;
printf("\t\t=================================================\n");
printf("\t\t|                                               |\n");
printf("\t\t|        -----------------------------          |\n");
printf("\t\t|                   NOTES                       |\n");
printf("\t\t|        -----------------------------          |\n");
printf("\t\t|                                               |\n");
printf("\t\t=================================================\n\n\n");
printf("0) Electronics\n");
printf("1) CHemistry\n");
printf("select an option\n");
while(b){
if(c){ printf("incomaptible option try again\n"); c=0;}
else{scanf("%s",a);if(strlen(a)==1 &&(a[0]==48||a[0]==49)){ b=0;} else{ for(int i=0;a[i];i++) {a[i]='\0';} c=1;}}
}
int v=a[0];
switch(v){

case(48): printf("jwhjw\n");
           break;
case(49): printf("dkjahd\n");
break;
}

return 0;
}

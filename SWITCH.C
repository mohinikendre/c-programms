#include<stdio.h>
#include<conio.h>
int main(){
int a;
clrscr();
printf("enter number between 1 to 7");
scanf("%d",&a);
switch(a){
case 1:{
printf("you selected sunday");
break;
}
case 2:{
printf("you selected monday");
break;
}
case 3:{
printf("you selected tuesday");
break;
}
case 4:{
printf("you selected wednesday");
break;
      }
case 5:{
printf("you selected thursday");
break;
}
case 6:{
printf("you selected friday" );
break;
}
case 7:{
printf("you selected saturday");
break;
}
default:{

printf("entered invalid numer");
break;
}
}
getch();
return 0;
}
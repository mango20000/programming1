#include <stdio.h>
int main()
{
int day;
printf("Enter day number(1-7): ");
scanf("%d", &day);
switch(day)
{
case 1:
printf("Monday\n");
case 2:
printf("Tuesday\n");
case 3:
printf("Wednesday\n");
case 4:
printf("Thursday\n");
break;
case 5:
printf("Friday\n");
break;
case 6:
printf("Saturday\n");
break;
case 7:
printf("Sunday");
break;
default:
printf("Invalid input! Please enter week number between 1-7.");
}
return 0;
}

#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
int n=60,m;
while(n)
{
printf("%d",n--);
if(kbhit())
{
if(getch()=='1')
n+=60;
}
delay(500);
clrscr();
}
printf("Call Ended");
getch();
}
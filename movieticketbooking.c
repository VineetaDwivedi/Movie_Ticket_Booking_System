#include<stdio.h>
int main()
{
int n,t,i,temp;
float rs;
char name[12],movie;
char id,date;
printf("~~~~~~~~~~WELCOME TO OUR OFFICIAL PAGE~~~~~~~~\n\n\n");
printf("Printing the name of the movies:\n");
printf("1.Jawan \n2.Mark Antony \n3.The Nun ll\n\n\n");
printf("Choose the movie:\n");
scanf("%d",&id);
temp=id;
if(id==1)
{
printf("Entering into the Jawan...........\n");
}
else if(id==2)
{
printf("Entering into the Mark Antony...........\n");
}
else if(id==3)
{
printf("Entering into the The Nun ll...........\n");
}
else
{
printf("Database error.....\n Please Enter write Digits");
return 0;
}
printf("You Entering into the Movie Ticket Booking Section\n\n\n");
printf("The amount of movie is 350 Rs.per audience\n");
printf("Number of Audience\n");
scanf("%d",&n);
n=n-1;
if (n==1)
{
printf("Enter the name of the Audience\n");
scanf("%s",&name[n]);
}
else
{
printf("Enter the names of the Audiences\n");
for(i=0;i<=n;i++)
{
scanf("%s",&name[n]);
}
}
printf("In which date you want to see the movie_:09:2023\n");
scanf("%d",&date);
printf("Choose the time\n 1.10:30\n 2.1:30\n 3.3:30\n 4.7:00\n\n\n");
scanf("%d",&t);
if(t==1)
{
printf("Your time is:10:30\n");
}
else if(t==2)
{
printf("Your time is:1:30\n");
}
else if(t==3)
{
printf("Your time is:3:30\n");
}
else
{
printf("Your time is:7:00\n");
}
printf("Printing all the details of the tickits....\n");
puts(name);
if(temp==1)
{
printf("Movie name : Jawan\n");
}
else if(temp==2)
{
printf("Movie name : Mark Antony\n");
}
else if(temp==3)
{
printf("Movie name : The Nun ll\n");
}
else
{
printf("Database problem\n");
}
printf("Date:%d:09:2023\n",date);
rs=(n+1)*350;
printf("Amount of Rs:%f\n",rs);
if(t==1)
{
printf("Time is:10:30\n");
}
else if(t==2)
{
printf("Time is:1:30\n");
}
else if(t==3)
{
printf("Time is:3:30\n");
}
else
{
printf("Time is:7:00\n\n\n");
}
printf("~~~~~~~~~~Thanking you for entering into the server~~~~~~~\n");
printf("Your ticket has been booked");
return 0;
}

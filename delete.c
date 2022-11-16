#include"header.h"


void delete_node()
{
sll **ptr=&headptr;
 int i;
        system("clear");
     for(i=0;i<14;i++)
     printf("\n");
    printf("\033[4;1;36m...............................................................STUDENT RECORD MAIN MENU..............................................................\033[0m\n");
        printf("\033[32m\n\t DELETE RECORD \033[0m\n");
     printf("\n\n\n\n");



if(*ptr==0)
{
    printf("\033[5;31;1m No data found to delete...! \033[0m \n");
     usleep(5000);
    return;
}
char op;
printf("Select the option : r/R :By Rollnumber\n");
printf("                  : n/N :By Name\n");
scanf(" %c",&op);
  op=op|1<<5;
l1: 
if(op=='r')
{

int num;
printf("Enter the roll number : ");
scanf("%d",&num);
sll *del=*ptr;
sll *prev;
while(del)
{
    if(del->rollno == num)
    {
        if(del==*ptr)
            *ptr=del->next;
        else
            prev->next=del->next;
        free(del);
        printf("\033[5;31;1m Roll number %d deleted\033[0m \n",num);
         usleep(5000);
        return;
    }
prev=del;
del=del->next;
}
printf("\033[5;31;1m Roll number not found.! \033[0m \n");
}
else if(op=='n')
{

char a[20];

printf("Enter the name: ");
scanf("%s",a);

sll *del=*ptr;
sll *prev;
int cc=searchname(a);
if(cc>2)
{
printf("\033[5;31;1m Multiple names found.!\033[0m \n");
op='r';
goto l1;
}
while(del)
{
    if(strcmp(del->name,a)==0)
    {
        if(del==*ptr)
            *ptr=del->next;
        else
            prev->next=del->next;
        free(del);
    printf("\033[5;31;1m Roll number %s deleted\033[0m \n",a);
         usleep(5000);
        return;
    }
prev=del;
del=del->next;
}
printf("\033[5;31;1m Name not found ! \033[0m \n");
}

else
printf("\033[5;31;1m Invalid option \033[0m \n");
         
usleep(5000);
}




void delete_all()
{
sll **ptr=&headptr;

int i;
       system("clear");
     for(i=0;i<14;i++)
     printf("\n");
    printf("\033[4;1;36m...............................................................STUDENT RECORD MAIN MENU..............................................................\033[0m\n");
        printf("\033[32m\n\t DELETING ALL RECORDS \033[0m\n");
     printf("\n\n\n\n");
     
if(*ptr==0)
{
    printf("\033[5;31;1m No data found to delete...! \033[0m \n");
    usleep(2000);
    return;
}
int c=0;
sll *del = *ptr;
while(del)
{
*ptr=del->next;
printf("\033[5;31;1m node : %d deleted \n \033[0m",++c);
 usleep(5000);
free(del);
    del=*ptr;
}
}


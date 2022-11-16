#include"header.h"

void add_end()
{
sll **ptr=&headptr;
    sll *new,*last;
    new=malloc(sizeof(sll));
    int i;
    
       system("clear");
     for(i=0;i<14;i++)
     printf("\n");
    printf("\033[4;1;36m...................................................................STUDENT RECORD ..................................................................\033[0m\n");
        printf("\033[32m\n\t ADD NEW RECORD \033[0m\n");
     printf("\n\n\n\n");
    rollno();
    new->rollno=roll;
    printf("roll number assigned : %d\n",roll);
    printf("Enter the name  : ");
    scanf("%s",new->name);
    printf("Enter the mark : ");
    scanf("%f",&new->mark);
    new->next=0;
    if(*ptr==0)
        *ptr=new;
    else
    {
        last=*ptr;
        while(last->next)
            last= last->next;
        last->next=new;

    }
}
void rollno()
{
sll *ptr=headptr;
if(ptr==0)
roll=1;
else
{
int *a,c=count_node(); 
a=malloc(c*4);
sll *temp=ptr;
int i=0,j;
while(temp)
{
a[i++]=temp->rollno;
temp=temp->next;
}
for(i=0;i<c-1;i++)
for(j=i+1;j<c;j++)
if(a[i]>a[j])
a[i]^=a[j]^=a[i]^=a[j];

for(i=1;i<a[0];i++)
{
if(i<a[0])
{
roll=i;
return;
}
}

for(i=0;i<c;i++)
if(a[i+1]!=a[i]+1)
{
roll=a[i]+1;
return;
}

roll=a[i-1]+1;

}
}

void modify()
{
sll *ptr=headptr;
int i;
          system("clear");
     for(i=0;i<14;i++)
     printf("\n");
    printf("\033[4;1;36m...............................................................STUDENT RECORD MAIN MENU..............................................................\033[0m\n");
        printf("\033[32m\n\t MODIFY RECORD \033[0m\n");
     printf("\n\n\n\n");
     
     
     if(ptr==0)
{
    printf("\033[5;31;1m No data found to modify...! \033[0m \n");
    usleep(5000);
    return;
}
char op;
printf("Select an option to search record : r/R :By Rollnumber\n");
printf("                                  : n/N :By Name\n");
printf("                                  : m/M :By Mark\n");
scanf(" %c",&op);
  op=op|1<<5;
l1: 
if(op=='r')
{

int num;
printf("Enter the roll number : ");
scanf("%d",&num);
sll *del=ptr;
while(del)
{
    if(del->rollno == num)
    {
   modifydata(del);
      return;
     }

del=del->next;
}
printf("\033[5;31;1m Roll number not found.! \033[0m \n");
}
else if(op=='n')
{

char a[20];
printf("Enter the name: ");
scanf("%s",a);
int cc=searchname(a);
sll *del=ptr;
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
      modifydata(del);
      return;
      }

del=del->next;
}
printf("\033[5;31;1m Name not found ! \033[0m \n");
}
else if(op=='m')
{

float num;
printf("Enter the mark : ");
scanf("%f",&num);
sll *del=ptr;
int cc=searchmark(num);
if(cc>2)
{
printf("\033[5;31;1m Multiple marks found.!\033[0m \n");
op='r';
goto l1;
}
while(del)
{
    if(del->mark == num)
    {
     modifydata(del);
      return;
     }

del=del->next;
}
printf("\033[5;31;1m Roll number not found.! \033[0m \n");
}

else
printf("\033[5;31;1m Enter valid option \033[0m \n");
usleep(5000);
}




void modifydata(sll *del)
{
sll *ptr=headptr;
char op;
  printf("Do you want to modify rollnumber (y/n): ");
   scanf(" %c",&op);
  op=op|1<<5;
  if(op=='y')
  {
  int newnum;
  l1:  printf("Enter the new rollnumber : ");
    scanf("%d",&newnum);
    if(0==searchrollno(newnum))
      del->rollno=newnum;
      else
      {
      printf("\033[5;31;1m New rollnumber not available...! \033[0m \n");
      goto l1;
      }
 }
  printf("Do you want to modify name (y/n): ");
   scanf(" %c",&op);
  op=op|1<<5;
  if(op=='y')
  {
       printf("Enter the name  : ");
    scanf("%s",del->name);
   }
     printf("Do you want to modify mark (y/n): ");
   scanf(" %c",&op);
  op=op|1<<5;
  if(op=='y')
  {
    printf("Enter the mark : ");
    scanf("%f",&del->mark);
    }
        printf("\033[5;31;1m Record updated...\033[0m \n");
     usleep(5000);
        }
        
        
int searchname(char* a)
{

   int ret=0;
   sll *ptr=headptr;
    if(ptr==0)
    {
    return 0;
    }
    printf("\033[1;35m ROLL NUMBER    NAME             MARKS \033[0m\n\n"); 
    while(ptr)
    {
    if(strcmp(ptr->name,a)==0)
    {
    ret++;
       printf("\033[32m%d           %s               %g\033[0m\n",ptr->rollno,ptr->name,ptr->mark);
     }
        ptr=ptr->next;
    }
 
return ret;
} 
int searchmark(float mark)
{
int ret=0;
   sll *ptr=headptr;
    if(ptr==0)
    {
    return 0;
    }
    printf("\033[1;35m ROLL NUMBER    NAME             MARKS \033[0m\n\n"); 
    while(ptr)
    {
    if(ptr->mark==mark)
    {
    ret++;
       printf("\033[32m%d           %s               %g\033[0m\n",ptr->rollno,ptr->name,ptr->mark);
     }
        ptr=ptr->next;
    }
 
return ret;
}
int searchrollno(int num)
{
int ret=0;
   sll *ptr=headptr;
    if(ptr==0)
    {
    return 0;
    }
    printf("\033[1;35m ROLL NUMBER    NAME             MARKS \033[0m\n\n"); 
    while(ptr)
    {
    if(ptr->rollno==num)
    {
    ret++;
       printf("\033[32m%d           %s               %g\033[0m\n",ptr->rollno,ptr->name,ptr->mark);
     }
        ptr=ptr->next;
    }
 
return ret;
}

int count_node()
{
int c=0;
sll *ptr=headptr;
   
    if(ptr==0)
    return 0;
    
    while(ptr)
    {
      c++;
        ptr=ptr->next;
    }
    return c;

}


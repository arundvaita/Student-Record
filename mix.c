#include"header.h"
void exitfun()
{
sll *ptr=headptr;
 
     system("clear");
     int i;
     for(i=0;i<14;i++)
     printf("\n");
    printf("\033[4;1;36m...........................................STUDENT RECORD ...........................................\033[0m\n");
     printf("\n\n\n\n");
     char op;
  printf("\033[32m\n\tS/s : Save and exit\n\tE/e : Exit without saving\n\t \033[0m\n ");
   scanf(" %c",&op);
  op=op|1<<5;
  if(op=='s')
  {
  save();
    printf("\033[32m\n\tRecord saved successfully \n\t \033[0m\n ");
       usleep(2000);
       system("clear");
       exit(0);
       }
        else if(op=='e')
  {
       system("clear");
       exit(0);
       }
}
void sort()
{
sll *ptr=headptr;
 system("clear");
 int i;
     for(i=0;i<14;i++)
     printf("\n");
    printf("\033[4;1;36m...........................................STUDENT RECORD ...........................................\033[0m\n");
            printf("\033[32m\n\t SORTING RECORDS\033[0m\n");
     printf("\n\n\n\n");
if(ptr==0)
{
    printf("\033[5;31;1m No data found to sort...! \033[0m \n");
    return;
}
char op;
printf("Select the option : r/R :By Rollnumber\n");
printf("                  : n/N :By Name\n");
printf("                  : m/M :By Marks\n");
scanf(" %c",&op);
  op=op|1<<5;
int c,j;

sll temp,*p1=ptr,*p2;
c=count_node();
if(op=='r')
{
for(i=0;i<c;i++)
{
    p2=p1->next;
    for(j=0;j<c-i-1;j++)
    {
        if(p1->rollno>p2->rollno)
        {
            temp.rollno=p1->rollno;
            strcpy(temp.name,p1->name);
            temp.mark=p1->mark;
            
            p1->rollno=p2->rollno;
            strcpy(p1->name,p2->name);
            p1->mark=p2->mark;
            
               p2->rollno= temp.rollno;
            strcpy(p2->name,temp.name);
            p2->mark=temp.mark;
        
        }
        p2=p2->next;
    }
    p1=p1->next;
}
printf("\033[5;31;1m Data sorted... \033[0m \n");
usleep(1000);
return;
}
if(op=='n')
{
for(i=0;i<c;i++)
{
    p2=p1->next;
    for(j=0;j<c-i-1;j++)
    {
        if(strcmp(p1->name,p2->name)>0)
        {
            temp.rollno=p1->rollno;
            strcpy(temp.name,p1->name);
            temp.mark=p1->mark;
            
            p1->rollno=p2->rollno;
            strcpy(p1->name,p2->name);
            p1->mark=p2->mark;
            
               p2->rollno= temp.rollno;
            strcpy(p2->name,temp.name);
            p2->mark=temp.mark;
        
        }
        p2=p2->next;
    }
    p1=p1->next;
}
printf("\033[5;31;1m Data sorted... \033[0m \n");
usleep(1000);
return;
}
if(op=='m')
{
for(i=0;i<c;i++)
{
    p2=p1->next;
    for(j=0;j<c-i-1;j++)
    {
        if(p1->mark>p2->mark)
        {
            temp.rollno=p1->rollno;
            strcpy(temp.name,p1->name);
            temp.mark=p1->mark;
            
            p1->rollno=p2->rollno;
            strcpy(p1->name,p2->name);
            p1->mark=p2->mark;
            
               p2->rollno= temp.rollno;
            strcpy(p2->name,temp.name);
            p2->mark=temp.mark;
        
        }
        p2=p2->next;
    }
    p1=p1->next;
}
printf("\033[5;31;1m Data sorted... \033[0m \n");
usleep(1000);
return;
}
}
void reverse_data()
{
system("clear");
int i;
     for(i=0;i<14;i++)
     printf("\n");
    printf("\033[4;1;36m...........................................STUDENT RECORD ...........................................\033[0m\n");
            printf("\033[32m\n\t REVERSING RECORDS\033[0m\n");
     printf("\n\n\n\n");
     sll *ptr=headptr;
if(ptr==0)
{
    printf("\033[5;31;1m No data found to reverse...! \033[0m \n");
    usleep(1000);
    return;
}
int c,j;

sll temp,*p1=ptr,*p2;
c=count_node();

for(i=0;i<c/2;i++)
{
    p2=p1;  // ptrZZ
    for(j=i;j<c-i-1;j++)   // j=0
    p2=p2->next;
        
            temp.rollno=p1->rollno;
            strcpy(temp.name,p1->name);
            temp.mark=p1->mark;
            
            p1->rollno=p2->rollno;
            strcpy(p1->name,p2->name);
            p1->mark=p2->mark;
            
               p2->rollno= temp.rollno;
            strcpy(p2->name,temp.name);
            p2->mark=temp.mark;
        
        
    
    
    p1=p1->next;
}
}
void search_node()
{
system("clear");
sll *ptr=headptr;
int i;
     for(i=0;i<14;i++)
     printf("\n");
    printf("\033[4;1;36m...........................................STUDENT RECORD ...........................................\033[0m\n");
            printf("\033[32m\n\t REVERSING RECORDS\033[0m\n");
     printf("\n\n\n\n");
if(ptr==0)
{
    printf("\033[5;31;1m No data found ....! \033[0m \n");
    usleep(1000);
    return;
}
char op;
printf("Select the option : r/R :By Rollnumber\n");
printf("                  : n/N :By Name\n");
printf("                  : m/M :By Marks\n");
scanf(" %c",&op);
  op=op|1<<5;
  if(op=='r')
  {
  int num;
printf("Enter the roll number : ");
scanf("%d",&num);
 if(0== searchrollno(num))
   printf("\033[5;31;1m Roll number not found.! \033[0m \n");
   
   printf("\n\n\n Enter any digit to exit to main menu\n");
scanf(" %c",&op);
return;
  }
   else if(op=='n')
  {
    char a[20];
printf("Enter the name: ");
scanf("%s",a);
 if(0== searchname(a))
 printf("\033[5;31;1m Name not found.! \033[0m \n");
   printf("\n\n\n Enter any digit to exit to main menu\n");
scanf(" %c",&op);
return;
  }
 else if(op=='m')
  {
  float num;
printf("Enter the mark : ");
scanf("%f",&num);
if( 0==searchmark(num))
printf("\033[5;31;1m Mark not found.! \033[0m \n");
   printf("\n\n\n Enter any digit to exit to main menu\n");
scanf(" %c",&op);
return;
  }
}
void save()
{
sll *ptr=headptr;
 FILE *fp=fopen("student.dat","a");

    while(ptr)
    {
        fprintf(fp,"%d                %s         %f\n",ptr->rollno,ptr->name,ptr->mark);
        ptr=ptr->next;
    }
    fclose(fp);

}


void read_file()
{
sll **ptr=&headptr,*new,*last;
 FILE *fp=fopen("student.dat","r");
 if(fp==0)
{
 fp=fopen("student.dat","w");
 fprintf(fp,"ROLL NUMBER          NAME     MARKS\n");
  fclose(fp);
  return;
 }
 else
   while(fgetc(fp)!='\n');    // for pointing to new line , first line is headings

 while(1)
    {
        new=malloc(sizeof(sll));
        if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->mark)==-1)
            break;
        new->next=0;
        if(*ptr==0)
            *ptr=new;
        else
        {
            last=*ptr;
            while(last->next)
                last=last->next;

            last->next=new;
        }

    }
    fclose(fp);
    }

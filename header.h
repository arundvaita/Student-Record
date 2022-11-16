#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
#include<unistd.h>







// structure declaration and typedefine
typedef struct student
{
    int rollno;
    char name[20];
    float mark;
    struct student *next;
}sll;

extern int roll;
extern sll *headptr;



// funcrtion definitions

void add_end();  // give rollnumber automatically
void delete_all();
void delete_node();
void print_data();
void modify();   // need to be done
void modifydata(sll*); 
int count_node();
void save();   // only one record , append it,
void read_file(); // automatically load it in first time( so that duplications of rollno can be avoided), if file not present create one file and close( for initial)

void rollno(); // find rollno
void exitfun();
void sort();
void reverse_data();

void search_node();

int searchname(char*);  // return count
int searchmark(float);  // return count
int searchrollno(int);  // return count

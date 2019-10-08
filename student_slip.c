#include<stdio.h>
#include<stdlib.h>
    void studentSlip();

struct student{
    char id[20];
    char name[100];
    //nested structure
    struct course{
        char course_code[50];
        char grade[3];
        char course_name[80];
        int credit_hour;
        }course[2];
    };

    //main function
    int main(){
        //struct student stu;
      //  struct student *stu_p;
        studentSlip();
    }

    //function of the program
    void studentSlip(){
        //declare the variable and the pointer.
        struct student stu;
        struct student *stu_p;

        int num_stu,j,i;
       // enter number of students
       printf("How many students do you have ?");
       scanf(" %d",&num_stu);
       //memory allocation
       stu_p = (struct student *) malloc ( num_stu * sizeof(struct student));
       if (stu_p=="")
       printf("memory is not allocated.");
       else
       printf("memory is allocated.\n");

       for(i=1;i<=num_stu;i++){
        printf("Fill the ff fields:\n");
         printf("enter id number :");
        scanf("%s",stu.id);
         printf("enter student name:");
         scanf("%s",stu.name);

         for(j=0;j<2;j++){
             printf("enter course %d:\n",j+1);
             printf(" course code:");
      scanf("%s",stu.course[j].course_code);
         printf(" grade:");
        scanf("%s",stu.course[j].grade);
         printf(" course name:");
     scanf("%s",stu.course[j].course_name);
     printf(" credit hour:");
  scanf("%d",&stu.course[j].credit_hour);
         }//end of for loop

        //set the address of the stu or intenal pointer to the pointer
        stu_p = &stu;

        /*print out  student slip using pointer*/
        printf("    MEKELLE UNIVERSITY\n");
        printf("    Student Grade Report\n");
        printf("    __________________\n");
        printf("    ID:%s\n",stu_p->id);
        printf("    Student Name : %s\n",stu_p->name);

printf("    ___________________\n");
printf("    |Code \t|Grade\n");

for(j=0;j<2;j++){
printf("    |%s\t|%s\n",stu_p->course[j].course_code,stu_p->course[j].grade);
}

printf("    ___________________\n");

printf("\n\n\n");
printf( "    Course matrix\n" );
printf("    ______________________________\n");
printf("    |Code\t|Course name\t|Credit\n");
printf("    _______________________________\n");

for(j=0;j<2;j++){
printf("    |%s\t|%s\t |%d\n",stu_p->course[j].course_code,stu_p->course[j].course_name,stu_p->course[j].credit_hour);
}

printf("    _______________________________\n");
       }//end of for loop

       //de-allocate the memory
       free(stu_p);
 }//end of fun....

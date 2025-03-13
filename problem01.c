#include<stdio.h>
#include<string.h>


   struct Student
   {
     int roll_no;
    char name[50];
    float marks;
   };
   
int main(){
    // Declare a structure variable
    struct Student s1;

    //Assign values to structure members
    s1.roll_no= 101;
    strcpy(s1.name, "Priyanshu Sahu");
    s1.marks=95.2;

    //display the value of structure members
    printf("Student Details:\n");
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %2f\n", s1.marks);
     return 0;


}
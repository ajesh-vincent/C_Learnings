/********************************************************


 * File: StudentDatabase.c
 *
 * Copyright 2023 Personal
 *
 *
 * Author: Ajesh Vincent
 *
 * Date Edited January 29, 2023
 *
 *
 * Description: Build a database  illustrating power of structs for learning C
 
 
 *******************************************************/
 
 #include<stdio.h>
 #include<stdlib.h>
 #define N 2

struct Student
{
		 char name[200];
		 int marks;
		 char grade[2];
};
int main()
{
	struct Student stud_array[N];
	for(int i=0;i<N;i++)
	{
		printf("Enter information of student %d \n",i+1);
		printf("Enter Name\n");
		scanf("%s",stud_array[i].name);
		printf("Enter marks\n");
		scanf("%d",&stud_array[i].marks);
		printf("Enter grade\n");
		
		
		scanf("%s",stud_array[i].grade);
	}
	for(int i=0;i<N;i++)
	{
		printf("Student %d\t%s\t%d\t%s\n",i+1,stud_array[i].name,stud_array[i].marks,stud_array[i].grade);
	}
	return 0;
}
		
		
		
	 
	 
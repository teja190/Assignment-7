#include<stdio.h>
#include<conio.h>
struct student
{
	char name[30];
	int rollno;
	int sub[6];
	int total;
};

void main()
{
	int i, n, j;
	struct student st[20], temp;

	printf("Enter number of students data you want to enter: ");
	scanf("%d",&n);
	for(i=0;i < n;i++)
	{
		printf("\nEnter name of student %d: ",(i+1));
		scanf("%s",&st[i].name);
		printf("\nEnter Roll No of student %d: ",(i+1));
		scanf("%d",&st[i].rollno);
		printf("\nEnter marks for 6 subjects of student %d: ",(i+1));
		scanf("%d%d%d%d%d%d",&st[i].sub[0],&st[i].sub[1],&st[i].sub[2],&st[i].sub[3],&st[i].sub[4],&st[i].sub[5]);
		st[i].total = (st[i].sub[0]+st[i].sub[1]+st[i].sub[2]+st[i].sub[3]+st[i].sub[4]+st[i].sub[5]);
		
	}
	for(i=0;i < (n-1);i++)
	{
		for(j=0;j < (n-i-1);j++);
	
	}
	printf("\n\n\n");
	for(i=0; i < n;i++)
	{
		printf("\nName of student: %s",st[i].name);
		printf("\nRoll No of student: %d",st[i].rollno);
		printf("\nTotal Marks of student: %d\n",st[i].total);
	}
	getch();
}

/*
Enter number of students data you want to enter: 2

Enter name of student 1: sai

Enter Roll No of student 1: 1

Enter marks for 6 subjects of student 1: 12
13
14
15
11
16

Enter name of student 2: vamsi

Enter Roll No of student 2: 2

Enter marks for 6 subjects of student 2: 13
12
11
15
18
12




Name of student: sai
Roll No of student: 1
Total Marks of student: 81

Name of student: vamsi
Roll No of student: 2
Total Marks of student: 81 */

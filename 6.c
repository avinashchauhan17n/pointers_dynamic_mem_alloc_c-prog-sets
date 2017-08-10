/*6 )EmpID, name, Date of Birth, Date of Joining, Department name, Salary, IDProofType, IDProofNo. 
The EMPLOYEE CAN provide any one of the following number as ID proof:Aadhar card, PAN, Voter Id, Passport etc. So only one field should be enough to store this data. Do this using union. */

#include<stdio.h>
#include<stdlib.h>
#define size 2
struct date
{
int year;
int month;
int day;
};

struct employee
{

	int empid;
	char name[50];
	char department[50];
	int salary;
	struct date dob;
	struct date doj;
	int idprooftype;  // 0 aadahr , 1 pan , 2voter , 3passport 
	union idproof
	{
		char aadhar[15];
		char pan[15];
		char voter[15];
		char passport[15];
	}idproof;
};
int main() 
{
	struct employee e1[1];
	int i,j,k;
	
	for(i=0;i<size;i++)
	{
		printf("Enter the details of employee %d \n",i+1);
		
		printf("Enter the employee id of employee %d \n",i+1);
		scanf("%d",&e1[i].empid);
		
		printf("Enter the department of employee %d \n",i+1);
                scanf("%s[^\n]",e1[i].department);
		
		printf("Enter the salary of employee %d \n",i+1);
                scanf("%d",&e1[i].salary);
                
		printf("Enter the DOB of  employee %d in d/m/y \n",i+1);
                scanf("%d/%d/%d",&e1[i].dob.day,&e1[i].dob.month,&e1[i].dob.year);

		printf("Enter the DOJ of  employee %d in d/m/y \n",i+1);
                scanf("%d/%d/%d",&e1[i].doj.day,&e1[i].doj.month,&e1[i].doj.year);

		printf("Enter the idproof type of employee %d \n0 for aadhar\n1 for pan\n2 for voter\n3 for passport ",i+1);
                scanf("%d",&e1[i].idprooftype);
		
		printf("Enter the idproof number of employee %d \n",i+1);
                scanf("%s[^\n]",e1[i].idproof.aadhar);		
	}
printf("\n\n\n");
        for(i=0;i<size;i++)
        {
                printf("Details of employee %d \n",i+1);
                printf("Emp ID: %d \n",e1[i].empid);
                printf("Department: %s \n",e1[i].department);
                printf("salary: %d \n",e1[i].salary);            
                printf("DOB: %d/%d/%d\n",e1[i].dob.day,e1[i].dob.month,e1[i].dob.year);
                printf("DOJ %d/%d/%d \n",e1[i].doj.day,e1[i].doj.month,e1[i].doj.year);
		if(e1[i].idprooftype==0)
		{	printf("Aadhar NO: ");
			printf("%s",e1[i].idproof.aadhar);}
		else if(e1[i].idprooftype==1)
	            {    printf("PAN: ");
			printf("%s",e1[i].idproof.pan);}
		else if(e1[i].idprooftype==2)
	             {   printf("voter: ");
			printf("%s",e1[i].idproof.voter);}
		else if(e1[i].idprooftype==3)
                	{printf("Passport: ");
			printf("%s",e1[i].idproof.passport);}    
			
	printf("\n\n\n");            
        }

	printf("\n\n\n");
}

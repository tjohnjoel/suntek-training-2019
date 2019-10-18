#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char pass[]="admin";
char uname[]="admin";

struct product{
    float cost;
	int pid;
	int scount;
	struct product* next;
};

struct product* p1;

void storedetails()
{
	struct product* p2=(struct product*)malloc(sizeof(struct product));
	struct product* p3=(struct product*)malloc(sizeof(struct product));
	struct product* p4=(struct product*)malloc(sizeof(struct product));
	struct product* p5=(struct product*)malloc(sizeof(struct product));
	struct product* p6=(struct product*)malloc(sizeof(struct product));
	struct product* p7=(struct product*)malloc(sizeof(struct product));
	struct product* p8=(struct product*)malloc(sizeof(struct product));
	struct product* p9=(struct product*)malloc(sizeof(struct product));
	struct product* p10=(struct product*)malloc(sizeof(struct product));
	struct product* p11=(struct product*)malloc(sizeof(struct product));
	struct product* p12=(struct product*)malloc(sizeof(struct product));
	struct product* p13=(struct product*)malloc(sizeof(struct product));
	struct product* p14=(struct product*)malloc(sizeof(struct product));
	struct product* p15=(struct product*)malloc(sizeof(struct product));
	struct product* p16=(struct product*)malloc(sizeof(struct product));
	struct product* p17=(struct product*)malloc(sizeof(struct product));
	struct product* p18=(struct product*)malloc(sizeof(struct product));
	struct product* p19=(struct product*)malloc(sizeof(struct product));
	struct product* p20=(struct product*)malloc(sizeof(struct product));
	
	p1->cost=100.00;
	p1->pid=1;
	p1->scount=10;
	p1->next=p2;
	
	p2->cost=120.00;
	p2->pid=2;
	p2->scount=15;
	p2->next=p3;
	
	p3->cost=400.00;
	p3->pid=3;
	p3->scount=60;
	p3->next=p4;
	
	p4->cost=600.00;
	p4->pid=4;
	p4->scount=40;
	p4->next=p5;
	
	p5->cost=200.00;
	p5->pid=5;
	p5->scount=10;
	p5->next=p6;
	
	p6->cost=50.00;
	p6->pid=6;
	p6->scount=100;
	p6->next=p7;
	
	p7->cost=100.00;
	p7->pid=7;
	p7->scount=10;
	p7->next=p8;

	p8->cost=800.00;
	p8->pid=8;
	p8->scount=100;
	p8->next=p9;
	
	p9->cost=500.00;
	p9->pid=9;
	p9->scount=16;
	p9->next=p10;
	
	p10->cost=10.00;
	p10->pid=10;
	p10->scount=1000;
	p10->next=p11;
	
	p11->cost=20.00;
	p11->pid=11;
	p11->scount=110;
	p11->next=p12;
	
	p12->cost=55.00;
	p12->pid=12;
	p12->scount=310;
	p12->next=p13;
	
	p13->cost=500.00;
	p13->pid=13;
	p13->scount=30;
	p13->next=p14;
	
	p14->cost=40.00;
	p14->pid=14;
	p14->scount=10;
	p14->next=p15;

	p15->cost=3500.00;
	p15->pid=15;
	p15->scount=7;
	p15->next=p16;
	
	p16->cost=900.00;
	p16->pid=16;
	p16->scount=16;
	p16->next=p17;
	
	p17->cost=15.00;
	p17->pid=17;
	p17->scount=110;
	p17->next=p18;
	
	p18->cost=900.00;
	p18->pid=18;
	p18->scount=10;
	p18->next=p19;
	
	p19->cost=170.00;
	p19->pid=19;
	p19->scount=190;
	p19->next=p20;
	
	p20->cost=180.00;
	p20->pid=20;
	p20->scount=100;
	p20->next=NULL;
}

void search(int id)
{
	struct product* temp=(struct product*)malloc(sizeof(struct product));
	temp=p1;
	printf("%d",temp->pid);
	while(temp->pid!=id)
	{
		temp=temp->next;
	}
	//return temp;
}



void updatecost()
{
	struct product * temp=(struct product*)malloc(sizeof(struct product));
	int id;
	printf("Enter the product ID\n");
	scanf("%d",&id);
	search(id);
}
void updateunamepass()
{
	char uname1[50];
	char pass1[50];
	int c;
	printf("kindly enter the username\n");
    scanf("%s",&uname1);
    printf("kindly enter the password\n");
    scanf("%s",&pass1);
    if(!strcmp(uname,uname1) && !strcmp(pass,pass1))
    {
    	printf("Enter new Username\n");
    	scanf("%s",&pass);
    	printf("Enter new password\n");
    	scanf("%s",&pass);
    }
    else
	{
    	printf("wrong Username/password\n");
	}
}




void admin()
{
	int choice;
	printf("Welcome,ADMIN\n");
	do
	{
		printf("1.Update username/password\n2.Update cost\n3.Update stock\n4.Update discount percentage applicable\n5.Display product information\n6.Logout\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				updateunamepass();
				break;
			case 2:
				updatecost();
				break;
		}
	}while(choice!=6);
	
}

void admincheck()
{
	char uname1[50];
	char pass1[50];
	int c;
	printf("kindly enter the username\n");
    scanf("%s",&uname1);
    printf("kindly enter the password\n");
    scanf("%s",&pass1);
    if(!strcmp(uname,uname1) && !strcmp(pass,pass1))
    {
    	admin();
    }
	else
    {
    	printf("re enter\n");
		admincheck();
	}
    
}
void main()
{
	int choice;
	printf("login as:\n\n1.Admin\n2.Billing Agent\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			admincheck();
			break;
		case 2:
			//billingagent();
			break;
	}
}

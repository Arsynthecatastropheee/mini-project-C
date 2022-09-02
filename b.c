#include <stdio.h>
#include <stdlib.h>

void main_menu();
void menu();
void login();
void new_account();
void info();
void update();
void check_bal();
void money_transfer();
void upi_send();
void upi_request();
void exit();

int accNo[10]={1234567890,1010101010,1212121212,1313131313};
int n=4;
int checkAcc;
char pay_name[20];
char pay_id[20];
int tamount;
int balance=1500000;
int bal;

struct account
{
	char name[200];
	int age;
	char address[1000];
	char dob[50];
    int phone_no;
	int balance;
    int type_acc;
}obj;

void menu()
{
	system("cls");
	int choice;
	char symb;
	printf("\n***           ***");
    printf("\n*** BANK ***");
    printf("\n***           ***");
	printf("\n\n1.NEW USER\n2.ALREADY REGISTERED");
	printf("\n\nENTER CHOICE :- ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	{
		system("cls");
		new_account();
		break;
	}
	case 2:
	{
		system("cls");
		login();
		break;
	}
	default:
	{
		system("cls");
		printf("\t\t\t  INVALID CHOICE...");
		printf("\n\nEnter '*' to continue or '#' to exit :- ");
		scanf(" %c", &symb);
		if (symb == '*')
		{
			system("cls");
			menu();
		}
		else if (symb == '#')
		{
			return;
		}
	}
	}
}

void main_menu()
{
	system("cls");
	int choice;
	int pin;
	char symb;
	printf("\t\t\t      ADKP BANK");
	printf("\n\n1.ACCOUNT INFO\n2.UPDATE ACCOUNT\n3.DELETE ACCOUNT\n4.CHECK BALANCE\n5.MONEY TRANSFER\n6.EXIT");
	printf("\n\nENTER CHOICE :- ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	{
		system("cls");
		info();
		break;
	}
	case 2:
	{
	    system("cls");
	    update();
		break;
	}
	case 3:
	{
		break;
	}
	case 4:
	{
		check_bal();
		break;
	}
	case 5:
	{   system("cls");
		money_transfer();
		break;
	}
	case 6:
	{
		system("cls");
		printf("\t\t\tTHANK YOU\n\n\t\t\tVISIT AGAIN");
		return;
	}
	default:
	{
		system("cls");
		printf("\t\t\t  INVALID CHOICE...");
		printf("\n\nEnter '*' to continue to main menu or '#' to exit :- ");
		scanf(" %c", &symb);
		if (symb == '*')
		{
			system("cls");
			menu();
		}
		else if (symb == '#')
		{
			return;
		}
	}
	}
}

void new_account()
{
	int symb;
	printf("Enter Account No. :- ");
	scanf("%d",&accNo[n]);
	n++;
	printf("\nEnter your name :- ");
    gets(obj.name);
    gets(obj.name);
	printf("\nEnter your address :- ");
	gets(obj.address);
	printf("\nEnter your age :- ");
	scanf("%d", &obj.age);
	printf("\nEnter your dob in format (dd/mm/yyyy) :- ");
	scanf("%s", &obj.dob);
	printf("\nEnter type of account (1.Current/2.savings) :- ");
	scanf("%d",&obj.type_acc);
	printf("\n\nAccount created successfully..");
	printf("\n\nEnter '1' to continue to menu :- ");
	scanf("%d",&symb);
	menu();
}


void login()
{
	int pass;
    char symb;
	printf("\t\t\t      ADKP BANK\n\n");
	printf("ACCOUNT NO. :- ");
	scanf("%d",&checkAcc);
	for(int i=0;i<10;i++)
	{
    if(checkAcc==accNo[i])
    {
        pin:
	    printf("PIN (6 digit) :- ");
	    scanf("%d",&pass);
	    if(pass==123456)
	    {
	    	system("cls");
	    	main_menu();
	    }
	    else
	    {
	    	printf("INAVLID PIN");
	    	goto pin;
	    }
    } 
	}
        printf("Account No. doesn't exist");
        printf("\n\nEnter '*' to continue to main menu or '#' to exit :- ");
		scanf(" %c", &symb);
		if (symb == '*')
		{
			system("cls");
			login();
		}
		else if (symb == '#')
		{
			return;
		}  
}

int reg_id=137857289;
char reg_IFSC[20]="ADKP0001287";

void info()
{
	system("cls");
	int symb;
	printf("\t\t\t      ADKP BANK\n\n");
	printf("\nCustomer Name: %s",obj.name);
	printf("\nCustomer id: %d",reg_id);
	printf("\nAddress: %s",obj.address);
	printf("\nAccount Number: %d",checkAcc);  
	printf("\nIFSC Code: %s",reg_IFSC); 
	printf("\n\nEnter '1' to continue to main menu :- ");
	scanf("%d",&symb);
	main_menu();
}

void update()
{
	system("cls");
int uchoice;
printf("\t\t\t      ADKP BANK\n\n");
printf("\n1.Change Name\n2.Change Address");
printf("\n\nENTER CHOICE :- ");
	scanf("%d",&uchoice);
	switch(uchoice)
	{
	case 1:
	{
		system("cls");
		int symb;
		printf("\t\t\t      ADKP BANK\n\n");
		printf("\nEnter your updated name :");
		gets(obj.name);
		system("cls");
	    printf("\nYour updated account :\n");
	    info();
		printf("\n\nEnter '1' to continue to main menu :- ");
		scanf("%d",&symb);
		main_menu();
		break;
	}
	case 2:
	{
	    system("cls");
		int symb;
	    printf("\t\t\t      ADKP BANK\n\n");
		printf("\nEnter your updated address :");
	    gets(obj.address);
	    system("cls");
	    printf("\nYour updated account :\n");
	    info();
		printf("\n\nEnter '1' to continue to main menu :- ");
		scanf("%d",&symb);
		main_menu();
		break;
	}
	default:
	{
	printf("\nEnter another choice");
	update();
	}
  }
}


void upi_send()
{
	int submit;
	int symb;
    printf("\t\t\t      ADKP BANK\n\n");
    printf("\nENTER Payee UPI ID :- ");
	scanf("%s",&pay_id);
	printf("\nENTER Payee Name :- ");
	scanf("%s",&pay_name);
	printf("\nENTER Amount :- ");
    scanf("%d",&tamount);
	bal=balance-tamount;
	balance=bal;
    printf("\nMoney is tranfer to %s",pay_name);
	printf("\nYour balance is %d",bal);
	printf("\n\nEnter '1' to continue to main menu :- ");
	scanf("%d",&symb);
	main_menu();
}

void upi_request()
{
	int symb;
	printf("\nENTER Payer UPI ID :- ");
	scanf("%s",&pay_id);
	printf("\nENTER Payer Name :- ");
	scanf("%s",&pay_name);
	printf("\nENTER Amount :- ");
    scanf("%d",&tamount);
	bal=balance+tamount;
	balance=bal;
    printf("\nMoney is received from %s",pay_name);
	printf("\nYour balance is %d",balance+tamount);
	printf("\n\nEnter '1' to continue to main menu :- ");
	scanf("%d",&symb);
	main_menu();
}

void check_bal()
{
	pin:
	system("cls");
	printf("\t\t\t      ADKP BANK\n\n");
	int pin;
	int symb;
	printf("PIN (6 digit) :- ");
	scanf("%d",&pin);
	if(pin==123456)
	{
		system("cls");
		printf("\t\t\t      ADKP BANK\n\n");
		printf("\nAccount balance :- %d ",balance);
	}
	else
	{
		printf("INAVLID PIN");
		goto pin;
	}
	printf("\n\nEnter '1' to continue to main menu :- ");
	scanf("%d",&symb);
	main_menu();
}

void money_transfer()
{
	system("cls");
	int choice;
	system("cls");
	printf("\t\t\t      ADKP BANK\n\n");
    printf("\nSelect UPI Mode");
	printf("\n1.Send Money\n2.Request Money");
    printf("\n\nENTER CHOICE :- ");
    scanf("%d", &choice);
	system("cls");
	switch (choice)
	{
	case 1:
	{
	system("cls");	
	upi_send();
	break;
	}
	case 2:
	{
	system("cls");
    upi_request();
    break;
	}
    default:
	{
	printf("\nEnter another choice");
	money_transfer();
	break;		
	}
	}	
}

int main()
{
    system("cls");
	menu();
	return 0;
}

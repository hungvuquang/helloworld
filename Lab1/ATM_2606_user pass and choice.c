#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int id,pass;
int main(int argc, char *argv[]) {
	int choice;
	int balance=1000000;
	char ch;
	login(id,pass);
	while(choice!=4)
	{
		wellcome();
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				//checkbalance();
				printf("So tien con lai trong tai khoan: %d \n", balance);
				//ham withdraw
				break;
			case 2:
				//Nhap so tai khoan
				//Ham chuyen tien
				break;
			case 3:
				//Ham kiem tra so du
				system("CLS");
				checkbalance(balance);
				break;
			case 4:
				break;
		}		
	}
	
	return 0;
}

//Balance
void checkbalance(int balance)
{
	printf("So tien con lai trong tai khoan: %d \n", balance);
	printf("Bam phim bat ky de ve Menu chinh: \n");
	getch();
}

//Wellcome
void wellcome()
{
	printf("\t Wellcome to ATM \n");
	printf("\t Please choice number to transaction \n");
	printf("\t 1. Withdraw \n");
	printf("\t 2. Tranfer \n");
	printf("\t 3. Check \n");
	printf("\t 4. Exit \n");
}


//Login
int login(int id, int pass)
{
	printf("\n Enter username password to login: ");
	printf("\n Usename: ");
	scanf("%d", &id);
	printf(" Password: ");
	scanf("%d", &pass);
		
	if (id==123 && pass == 456)
		printf("\t Login success  \n");
	else
		printf("Login ivalid \n");
 } 

/*

=================================================================================


		Project Made By: Parth Sharma And Nitesh Pandya
		Class: 12th
		
		
=================================================================================

*/

#include<fstream>
#include<ctype.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

char buffer[10];

class account
{
	int acno;
	char name[20],gen;
	int deposit,pin,phoneno,mobileno;
	char type;
	char add[50], city[20], email[20];
public:
	void create_account();		//get data from user
	void show_account();		//show data on screen
	void modify();   			//get new data from user
	void dep(int);				//accept amount and add to balance amount
	void draw(int);				//accept amount and subtract from balance amount
	void report();				//show data in tabular format
	int retacno();				//return account number
	int retdeposit();			//return balance amount
	char rettype();				//return type of account
};         

void account::create_account()
{	
	cout<<"\n\n\t\tNew Account!\n\t\tPlease Enter the Following details:";
	cout<<"\n\n\tEnter The account No.";
	cin>>acno;
	cout<<"\n\n\tEnter The Name of The account Holder : ";
	gets(buffer);
	cin>>name;
	cout<<"\n\n\tGender (M/F): ";
	gets(buffer);
	cin>>gen;
	cout<<"\n\n\tPresent Residence:";
	cout<<"\n\n\t\tAddress:";
	gets(buffer);
	cin>>add;
	cout<<"\n\n\t\tCity:";
	gets(buffer);
	cin>>city;
	cout<<"\n\n\t\tPIN:";
	cin>>pin;
	cout<<"\n\n\tPhone no:";
	cin>>phoneno;
	cout<<"\n\n\tMobile phone no:";
	cin>>mobileno;
	cout<<"\n\n\tE-mail ID:";
	gets(buffer);
	cin>>email;
	cout<<"\n\n\tEnter Type of The account (C/S) : ";
	gets(buffer);
	cin>>type;
	type=toupper(type);
	cout<<"\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
	cin>>deposit;
	cout<<"\n\n\nAccount Created..";
}

void account::show_account()
{
	cout<<"\nAccount No. : "<<acno;
	cout<<"\nAccount Holder Name : ";
	cout<<name;
	cout<<"\nType of Account : "<<type;
	cout<<"\nBalance amount : "<<deposit;
}


void account::modify()
{
	cout<<"\n\n\t\tModify Detailsl of your account!";
	cout<<"\n\t\tPlease enter the new details:";
	cout<<"\n\n\tThe account No."<<acno;
	cout<<"\n\n\tEnter The Name of The account Holder : ";
	gets(buffer);
	cin>>name;
	cout<<"\n\n\tGender (M/F): ";
	gets(buffer);
	cin>>gen;
	cout<<"\n\n\tPresent Residence:";
	cout<<"\n\n\t\tAddress:";
	gets(buffer);
	cin>>add;
	cout<<"\n\n\t\tCity:";
	gets(buffer);
	cin>>city;
	cout<<"\n\n\t\tPIN:";
	cin>>pin;
	cout<<"\n\n\tPhone no:";
	cin>>phoneno;
	cout<<"\n\n\tMobile phone no:";
	cin>>mobileno;
	cout<<"\n\n\tE-mail ID:";
	gets(buffer);
	cin>>email;
	cout<<"\n\n\tEnter Type of The account (C/S) : ";
	gets(buffer);
	cin>>type;
	type=toupper(type);
	cout<<"\n\n\tEnter The amount : ";
	cin>>deposit;
}


void account::dep(int x)
{	deposit+=x;	}

void account::draw(int x)
{	deposit-=x;	}

void account::report()
{	cout<<acno<<"\t\t "<<name<<"\t\t "<<type<<"\t "<<deposit<<endl;	}

int account::retacno()
{	return acno;	}

int account::retdeposit()
{	return deposit;	}

char account::rettype()
{	return type;	}

void write_account();				//write record in binary file
void display_sp(int);				//display account details given by user
void modify_account(int);			//modify record of file
void delete_account(int);			//delete record of file
void display_all();					//display all account details
void deposit_withdraw(int, int); 	//desposit/withdraw amount for given account


int main()
{
	char ch;
	int num;

	cout<<"\n\n\n\t==================================================================";
	cout<<"\n\n\n\t\t\tBANK Management System V1.0.0.1";
	cout<<"\n\n\n\n\t\tMADE BY : Parth Sharma(1221) And Nitesh Pandya(1218)";
	cout<<"\n\n\t\tSCHOOL : Kendriya Vidyalaya Shajapur";
	cout<<"\n\n\t\tUnder the guidence of Mr Vivek Shrivastava";
	//cout<<"\n\n\t\tRoll no. :\n\t\t\t\tParth Sharma: \t1221\n\t\t\t\tNitesh Pandya: \t1217";
	cout<<"\n\n\n\t==================================================================";
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tPress any key";

	getch();
	
	system("cls");
	do
	{
		system("cls");
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t1. NEW ACCOUNT";
		cout<<"\n\n\t2. DEPOSIT AMOUNT";
		cout<<"\n\n\t3. WITHDRAW AMOUNT";
		cout<<"\n\n\t4. VIEW DETAILS OF A SPECIFIC ACCOUNT";
		cout<<"\n\n\t5. ALL ACCOUNT HOLDER LIST";
		cout<<"\n\n\t6. CLOSE AN ACCOUNT";
		cout<<"\n\n\t7. MODIFY AN ACCOUNT";
		cout<<"\n\n\t8. EXIT";
		cout<<"\n\n\tSelect Your Option (1-8) ";
		cin>>ch;
		system("cls");
		switch(ch)
		{
		case '1':
			write_account();
			break;
		case '2':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			deposit_withdraw(num, 1);
			break;
		case '3':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			deposit_withdraw(num, 2);
			break;
		case '4':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			display_sp(num);
			break;
		case '5':
			display_all();
			break;
		case '6':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			delete_account(num);
			break;
		 case '7':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			modify_account(num);
			break;
		 case '8':
			cout<<"\n\n\tThanks for using bank managemnt system";
			break;
		 default :cout<<"\n\n\n\t\tInvalid input!!!!\n\n\n\n\t\tPress enter to try again!";
		}
		getch();
	}while(ch!='8');
	return 0;
}

void write_account()													//Write the initial account on the file
{
	account ac;
	ofstream fout;
	fout.open("Account.dat",ios::binary|ios::app);
	ac.create_account();
	fout.write((char*)&ac, sizeof(account));
	fout.close();
}

void display_sp(int n)													//Display
{
	account ac;
	int flag=0;
	ifstream fin;
	fin.open("Account.dat",ios::binary);
	if(!fin)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\nBALANCE DETAILS\n";
	while(fin.read((char*)&ac, sizeof(account)))
	{
		if(ac.retacno()==n)
		{
			ac.show_account();
			flag=1;
		}
	}
	fin.close();
	if(flag==0)
		cout<<"\n\nAccount number does not exist";
}


void modify_account(int n)												//Modify
{
	int found=0;
	account ac;
	fstream File;
	File.open("Account.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(File.read((char*)&ac, sizeof(account)) && found==0)
	{
		if(ac.retacno()==n)
		{
			ac.show_account();
			cout<<"\n\nEnter The New Details of account"<<endl;
			ac.modify();
			int pos=(-1)*sizeof(account);
			File.seekp(pos,ios::cur);
			File.write((char*)&ac, sizeof(account));
			cout<<"\n\n\t Record Updated";
			found=1;
		}
	}
	File.close();
	if(found==0)
		cout<<"\n\n Record Not Found ";
}

void delete_account(int n)												//Delete an account
{
	account ac;
	ifstream fin;
	ofstream fout;
	fin.open("Account.dat",ios::binary);
	if(!fin)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	fout.open("Temp.dat",ios::binary);
	fin.seekg(0,ios::beg);
	while(fin.read((char*)&ac, sizeof(account)))
	{
		if(ac.retacno()!=n)
		{
			fout.write((char*)&ac, sizeof(account));
		}
	}
	fin.close();
	fout.close();
	remove("Account.dat");
	rename("Temp.dat","Account.dat");
	cout<<"\n\n\tRecord Deleted ..";
}

void display_all()														//Display all the data
{
	account ac;
	ifstream fin;
	fin.open("Account.dat",ios::binary);
	if(!fin)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
	cout<<"====================================================\n";
	cout<<"A/c no.\t\tNAME\t\tType\tBalance\n";
	cout<<"====================================================\n";
	while(fin.read((char*)&ac, sizeof(ac)))
	{
		ac.report();
	}
	fin.close();
}
void deposit_withdraw(int n, int option)
{
	int amt;
	int found=0;
	account ac;
	fstream File;
	File.open("Account.dat", ios::binary|ios::in|ios::out);					//File.seekg(0);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}																		//else found=1;
	while(!File.eof() && found==0)
	{	
		File.read((char*)&ac, sizeof(account));
		if(ac.retacno()==n)
		{
			ac.show_account();
			if(option==1)
			{
				cout<<"\n\n\tTO DEPOSITE AMOUNT ";
				cout<<"\n\nEnter The amount to be deposited";
				cin>>amt;
				ac.dep(amt);
			}
			if(option==2)
			{
				cout<<"\n\n\tTO WITHDRAW AMOUNT ";
				cout<<"\n\nEnter The amount to be withdraw";
				cin>>amt;
				int bal=ac.retdeposit()-amt;
				if((bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype()=='C'))
					cout<<"Insufficience balance";
				else
					ac.draw(amt);
			}
			int pos=(-1)* sizeof(ac);
			File.seekp(pos,ios::cur);
			File.write((char*)&ac, sizeof(account));
			cout<<"\n\n\t Record Updated";
			found=1;
	       }
	}
	File.close();
	if(found==0)
		cout<<"\n\n Record Not Found ";
}




/*

=================================================================================


		Project Made By: Parth Sharma And Nitesh Pandya
		Class: 12th
		
		
=================================================================================

*/

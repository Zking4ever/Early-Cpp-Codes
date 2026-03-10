#include <iostream>
#include <fstream>

using namespace std;

struct Account{
	int AccNo;
	char UserName[50];
	double balance;
	int AccID;
} ;
int NoOfUsers=0;//stores number of users of the bank and counts every new account
//-----lets create file to store data---------
ofstream file;	
//--------------------
void WriteOnFile(Account acc){
	if(file.is_open()){
	file<<"-----------------------------------------------------------------------------------------"<<endl;
	file<<acc.AccNo<<"\t\t"<<acc.UserName<<"\t\t"<<acc.balance<<"\t\t"<<acc.AccID<<endl;
	
	file.close();
}
else {
    file.open("data.dat");
    file<<"Account NO"<<"\t User name"<<"\t\tbalance"<<"\tAccount id"<<endl;
	file<<"-----------------------------------------------------------------------------------------"<<endl;
	file<<acc.AccNo<<"\t\t"<<acc.UserName<<"\t\t"<<acc.balance<<"\t\t"<<acc.AccID<<endl;
	
}
}
int main()
{
   cout<<"-------------------------------------------------------------"<<endl;
    cout << "\t\tWelcome To AB Bank System"<<endl;
     cout<<"-------------------------------------------------------------"<<endl;   
		 int option;
	 do{
		 cout<<"1. Create New Account"<<endl;
		 cout<<"8. Exit"<<endl;
		 cout<<"\t Enter your choice (1-8)"<<endl;
		 cin>>option;
		 switch(option)
		 {
 case 1: 	Account newAcc;
			cout<< "\t New Account"<<endl;
			cout<< "Enter Account Number: ";
			cin>>newAcc.AccNo; 
			cout<<endl;//to start new line
			cin.ignore();
			cout<< "Enter Account Holders Name: ";
			cin.getline(newAcc.UserName, 50);
			cout<<endl;//to start new line
			cout<< "Enter initial balance: ";
			cin>>newAcc.balance;
			newAcc.AccID = NoOfUsers+1;
			WriteOnFile(newAcc);
			NoOfUsers++;
cout<<"-------------------------------------------------------"<<endl;	
cout<<"\t Account Created Successfuly"<<endl;
cout<<"**************************************************"<<endl;
			 break;
		
		 case 8: cout<<"exiting...."<<endl;
			 break;
		 default: cout<<"Error!! Enter a correct choice"<<endl;
		 cout<<"---------------------------------------------------------"<<endl;
			 break;
		 }
	 }
	 while(option!=8);
    return 0;       
}

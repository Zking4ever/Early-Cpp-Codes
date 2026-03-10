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
void createAcc(){
  ofstream ExportData;
	ExportData.open("usersdata.dat");
	Account newAcc;
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
	ExportData.write(reinterpret_cast<char*>(&newAcc),sizeof(Account));
	ExportData.close();
cout<<"-------------------------------------------------------"<<endl;	
cout<<"\t Account Created Successfuly"<<endl;
cout<<"**************************************************"<<endl;
}

void depositAm(){
	int accNo;
    double amount;
    bool found=false;
    Account acc;

fstream Data;
Data.open("usersdata.data");	
while( Data.read(reinterpret_cast<char*>(&acc),sizeof(Account))){
	if(acc.AccNo==accNo){
		acc.balance+=amount;
	//	Data.seekp();
		found=true;
	}
}
if(!found){
	cout<<"Account Not Found";
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
		 cout<<"2. Deposite Amount"<<endl;
		 cout<<"3. Withdraw Amount"<<endl;
		 cout<<"4. Balance Enquiry"<<endl;
		 cout<<"5. Close Account"<<endl;
		 cout<<"6. Modify Account"<<endl;
		 cout<<"7. All Account holder list"<<endl;
		 cout<<"8. Exit"<<endl;
		 cout<<"\t Enter your choice (1-8)"<<endl;
		 cin>>option;
		 switch(option)
		 {
		 case 1: createAcc();
			 break;
		 case 2: depositAm();
			 break;
		 case 3:
			 break;
		 case 4:
			 break;
		 case 5:
			 break;
		 case 6:
			 break;
		 case 7:
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

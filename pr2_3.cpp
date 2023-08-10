#include <iostream>
using namespace std;

class Bank {
    private:
    	char dummy, pick ;
    	int ID,phone ;
    	string name,email;
        float balance=0;
    public:
    	
    	Banner(){
			cout<< "\t\t:-YOUR BANK MANGEMENT SYSTEM -: "<< endl;
			cout<<"************************************************************ "<< endl ;
			cout<<endl;
			cout<< "\t\t:- Design And Program by -: "<< endl;
			cout<<"************************************************************ "<< endl;
			cout<<"\t\tV R U N D   P A D A R I Y A " <<endl;
			cout<<endl;
			cout<<endl;
			cout<< "press any key to go to next page : "; cin>>dummy;
			system("cls");
		}
		
		Staff(){
			rep : 
			cout<<"************************************************************** "<< endl;
			cout<<" -: Press A to login as administrator or B to login as staff:-"<<endl;
			cout<<"************************************************************** "<< endl;
			cout<<endl;
			cout<< "press a key to go to next page : "; cin>>pick;
			
			if(pick=='A' || pick=='a')
			{
				cout<<"\n************************************************************" ;
				cout<<"\nWelcome to administration page : ";
				cout<<"\n************************************************************" ;
				cout<< endl;
				cout<< "\tEnter The Name Of Bank Staff Member :" ; cin>>name ;
				cout<< "\tEnter The ID of Bank Staff Member :" ; cin>>ID ;
				cout<< "\tEnter The Phone Number Of Bank Staff Member :" ; cin>>phone ;
				cout<< "\tEnter The Email Address of Bank Staff Member :"; cin>>email ;
				
				cout<<"\nSuccessfully Registered! : \n";
				cout<<"***************************************************************"<<endl ;
				cout<< "\n\t Name \t\t:" <<name;
				cout<< "\n\t Amount Number\t:"<<ID;
				cout<< "\n\t Phone Number \t:"<<phone;
				cout<< "\n\t Email \t\t:"<<email;
				cout<<"\n*************************************************************"<<endl ;
			}
			
			else if(pick=='B' || pick=='b')
			{
				cout<<"\n************************************************************" ;
				cout<<"\nWelcome to staff panel : ";
				cout<<"\n************************************************************" ;
				cout<< endl;
				cout<< "\tEnter The Name Of Bank Staff Member :" ; cin>>name ;
				cout<< "\tEnter The ID of Bank Staff Member :" ; cin>>ID ;
				cout<< "\tEnter The Phone Number Of Bank Staff Member :" ; cin>>phone ;
				cout<< "\tEnter The Email Address of Bank Staff Member :"; cin>>email ;
				
				cout<<"\nSuccessfully Registered! : \n";
				cout<<"***************************************************************"<<endl ;
				cout<< "\n\t Name \t\t:" <<name;
				cout<< "\n\t Amount Number\t:"<<ID;
				cout<< "\n\t Phone Number \t:"<<phone;
				cout<< "\n\t Email \t\t:"<<email;
				cout<<"\n*************************************************************"<<endl ;
			}
			else 
			{
				cout<<"\nInvalid Input!\n\n";
				goto rep;
			}
			
		}
        void deposit(float amount) {
            balance += amount;
            cout << amount << " INR deposited successfully!" << endl;
        }
        void withdraw(float amount) {
            if (amount > balance) {
                cout << "Insufficient balance. Withdrawal failed." << endl;
            } else {
                balance -= amount;
                cout << amount << " INR withdrawn successfully!" << endl;
            }
        }
        void display() {
            cout << "Your current balance is " << balance <<"INR"<<  endl;
        }
};

int main() {
    Bank customer;
    int choice;
    float amount;

	customer.Banner();
	customer.Staff();
	
    while (true) {
        cout << "\n\nPlease select an option:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "\n Option : ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter deposit amount in INR: ";
                cin >> amount;
                customer.deposit(amount);
                break;
            case 2:
                cout << "\nEnter withdrawal amount ";
                cin >> amount;
                customer.withdraw(amount);
                break;
            case 3:
                customer.display();
                break;
            case 4:
                cout << "\nThank you for using the Bank System!" << endl;
                exit(0);
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
return 0;
}

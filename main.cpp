#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
/**TODO:
* 
*       Enter Name, Account number, Account type to be shown during transactions.
		Shows the information about the person who is doing the transaction.
		Enter amount to deposited in the account.
		Shows the Balance in the account.
		Enter amount to be withdrawn from the account, and then it shows available balance.
		Cancel the transaction.

*   setvalue(): This function is used here to set the data using basic input and output method in C++ i.e., 
	cout and cin statements which displays and take input from the keyboard i.e., from the user respectively.
	showvalue(): This function is used to print the data.
	deposit(): This function helps to deposit money in a particular account.
	showbal(): This function shows the total balance available after deposition.
	withdrawl(): This function helps to withdraw money from the account.
	main(): This function there is a simple switch case (to make choices) inside an infinite while loop so that every time user gets to select choices.
**/
class Bank {
private:

	std::string name;
	int account_number = 0;
	int type{ 10 };
	int amount = 0;
	int total = 0;

public:

	void setValue()
	{
		std::cout << "Enter name\n";
		std::cin.ignore();

		std::getline(std::cin, name);

		std::cout << "Enter Account number\n";
		std::cin >> account_number;

		std::cout << "Enter Account type\n";
		std::cin >> type;

		std::cout << "Enter Balance\n";
		std::cin >> total;
	}

	void showData()
	{
		std::cout << "Account Name: " << name << std::endl;
		std::cout << "Account No: " << account_number << std::endl;
		std::cout << "Account type: " << type << std::endl;
		std::cout << "Balance: " << total << std::endl;
	}

	void deposit()
	{
		std::cout << "Enter amount to be deposited\n";
		std::cin >> amount;

	}

	void showBalance()
	{
		total += amount;
		std::cout << "\nTotal balance is: \n" << total;
	}

	void withdraw()
	{
		int wd, available_balance;
		std::cout << "Enter amount to withdraw\n";
		std::cin >> wd;
		available_balance = total - wd;
		std::cout << "Available balance is " << available_balance;
	}
};
    
int main()
{
	Bank b;
	int choice;

	while (true) {
		std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~WELCOME~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~\n\n";
		std::cout << "Enter Your Choice\n";
		std::cout << "\t1. Enter name, Account "
			<< "number, Account type\n";
		std::cout << "\t2. Balance Enquiry\n";
		std::cout << "\t3. Deposit Money\n";
		std::cout << "\t4. Show Total balance\n";
		std::cout << "\t5. Withdraw Money\n";
		std::cout << "\t6. Cancel\n";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			b.setValue();
			break;
		case 2:
			b.showData();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.showBalance();
			break;
		case 5:
			b.withdraw();
			break;
		case 6:
			exit(1);
		default:
			std::cout << "\nInvalid input\n";
		}
	}
}
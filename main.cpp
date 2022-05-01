#include <iostream>
#include <fstream>
#include <string>
#include <string_view>
#include <cstdlib>
/**TODO:
* Login system{
* welcome_menu
* get_input
* user login
* register user
* get_username
* get_password
* save_user
* fail attempts
* }
*       Enter Name, Account number, Account type to be shown during transactions.
		Shows the information about the person who is doing the transaction.
		Enter amount to deposited in the account.
		Shows the Balance in the account.
		Enter amount to be withdrawn from the account, and then it shows available balance.
		Cancel the transaction.
* atm system{
* welcome menu
* get_input
* deposit
* withdraw
* check balance
* }
**/

namespace login {
    
    void main_menu() {
        std::cout << "atm_main_menu" << std::endl;
    }
} // login namespace

namespace atm {
	void main_menu() {
		std::cout << "atm_main_menu" << std::endl;
	}
} // atm namespace
    
    int main()
    {   
        
        std::cout << "HELLO WORLD!" << std::endl;
        std::cin.get(); // alternative to std::system("pause");
        return 0;
    }






#include<iostream>
using namespace std;

// Creating class
class BankManagement{
    //Private data type
    private:
        char name[20];      //Name of account holder
        char AccNum[15];    //Account numver 
        char AccType[10];    //For Account number
        double initialAmount, deposit, withdraw;   // Intial amount, deposit amount and withdraw amount

    public:
        BankManagement(){
            name[20] = ' ';
            AccNum[15] = ' ';
            AccType[10] = ' ';
            initialAmount = 5000;
            deposit = 0;
            withdraw = 0;

        }
        void Menu();
        void CreateAccount();
        void DepositAmount();
        void CheckAmount();
        void WithdrawAmount();
        void displayAmountDetails();

};

//Design the Bank Menu
void BankManagement::Menu(){
    //option choicee
    int choice;

    cout<<"*************** Welcome to the WHT Bank *****************\n"<<endl;
    cout<<"\t\t\tChoose from An Option Below"<<endl;
    cout<<"\t\t\t1. Create Your Account"<<endl;
    cout<<"\t\t\t2. Deposit Balance"<<endl;
    cout<<"\t\t\t3. Withdraw Blance"<<endl;
    cout<<"\t\t\t4. Check Blance"<<endl;
    cout<<"\t\t\t5. Display details"<<endl;
    cout<<"\t\t\t6. Exit"<<endl;
    cout<<"*********************************************************"<<endl;

    cout<<"\t\t\tPlease select and option: ";
    cin>> choice; //input choice here

    if(choice == 1){
        CreateAccount(); Menu();
    }

    if(choice == 2){
        DepositAmount(); Menu();
    }

    if(choice == 3){
        WithdrawAmount(); Menu();
    }

     if(choice == 4){
        CheckAmount(); Menu();
    }

    if(choice == 5){
        displayAmountDetails(); Menu();
    }
}

//Design Create Account
void BankManagement::CreateAccount(){
    cout << "Enter Account holder name: ";
    cin>> name;
    cout << "Enter Account number: ";
    cin>> AccNum;
    cout << "Enter Acount type: ";
    cin>> AccType;
    }

//design depossit functtion
 void BankManagement::DepositAmount(){
    cout << "Enter your deposit amount: ";
    cin>> deposit;
    initialAmount = initialAmount + deposit;
 }   

 //desgin withdraw function
 void BankManagement::WithdrawAmount(){
    cout << "Enter your withdraw amount: ";
    cin>> withdraw;
    initialAmount = initialAmount - withdraw;
 } 

  //design check function
 void BankManagement::CheckAmount(){
    //initialAmount= initialAmount + deposit;
    cout << "Check your balance: $" << initialAmount << endl <<endl;
 } 

//desgin display function
 void BankManagement::displayAmountDetails(){
    cout << "\t\t\t Transaction Details "<<endl;
    cout << "\t\t\t Name " << name <<endl;
    cout << "\t\t\t Account Number " << AccNum <<endl;
    cout << "\t\t\t Account Type " << AccType <<endl <<endl;
    cout << "\t\t\t Total deposit: $" << deposit;
    cout << "\t\t\t Total withdraw: $" << withdraw ;
    cout << "\t\t\t Present Balance " << initialAmount <<endl;

 }

//Main function
int main()
{
    /* Lets create an Object class */
    BankManagement MBOBank;
    MBOBank.Menu();





    return 0;

}
#include<iostream>
using namespace std;

class BankAccount
{
private:
    string accountholder;
    int accountnumber;
    float balance;

public:
    BankAccount(string aholder,int anumber,float b)
    {
        accountholder=aholder;
        accountnumber=anumber;
        balance=b;
    }
    void deposit()
    {
          float amount;
          cout<<"\nEnter amount to deposit:";
          cin>>amount;
          if(amount>0)
          {
           balance=balance+amount;
          cout<<"\nsuccessfully deposited";
          }
          else
          {
              cout<<"\nInvalid amount"<<endl;
         }
    }
    void withdraw()
    {
       float amount;

       if(amount<=0)
       {
           cout<<"\nInvalid amount";
       }
       cout<<"\nEnter amount to withdraw:";
       cin>>amount;
       if(amount>balance)
       {
           cout<<"\nAmount exceeds the current balance";
       }
       else
       {
           balance=balance-amount;
           cout<<"\nAmount withdrawn successfully";
           cout<<"\nCurrent balance is:"<<balance<<endl;
       }

    }
    void displaydetails()
    {
        cout<<"\n--Details of User--"<<endl;
        cout<<"\nAccount Holder name:"<<accountholder<<endl;
        cout<<"Account Number:"<<accountnumber<<endl;
        cout<<"Account balance:"<<balance<<endl;
    }
};
int main()
{
    BankAccount b1("Vaishnavi",1,23000);
    int choice;

    do
    {
       cout<<"\n--- Bank Account---";
       cout<<"\n1.Deposit";
       cout<<"\n2.Withdraw";
       cout<<"\n3.Display Details";
       cout<<"\n4.Exit";

       cout<<"\n Enter your choice:";
       cin>>choice;

       switch(choice)
       {
           case 1:b1.deposit();
                  break;
           case 2:b1.withdraw();
                  break;
           case 3:b1.displaydetails();
                   break;
            case 4:printf("\nExited...");
                   break;
            default:printf("\nInvalid choice");
       }

    }       while(choice!=4);


    return 0;
}

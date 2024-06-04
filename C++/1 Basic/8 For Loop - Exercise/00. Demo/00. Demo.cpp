#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;
int main()
{
    int acc_no,pin_no;
    int money;
    cout<<"Welcome to the bank.\n Hi, Your pin number is:\n 'Enter acc_No:\n";
    cout<<"Enter pin_No: \n";
    cin>>acc_no;
    cin>>pin_no;

    switch(acc_no,pin_no)
    {
    case:5645:2345:
       cout<<"Enter the amount you want to withdraw:";
       cin>>money;
       cout<<"The total amount is"<<money;
       break;

    case:4526:6534:
       cout<<"Enter the amount you want to withdraw:";
       cin>>money;
       cout<<"The total amount is"<<money;
       break;

    case:8645:5786:
        cout<<"Enter the amount you want to withdraw:";
       cin>>money;
       cout<<"The total amount is"<<money;
       break;

    case:4665:5467:
       cout<<"Enter the amount you want to withdraw:";
       cin>>money;
       cout<<"The total amount is"<<money;
       break;
       default:cout<<"you sucessfully withdraw the amount:"<<money;
                cout<<"Thank you for using your bank with us";
               break;
    }

    return 0;



}



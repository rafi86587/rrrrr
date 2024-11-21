#include <iostream>
using namespace std;

int main()
{
    int n,n1;

    cout<<"Welcome to the Food Ordering System!"<<endl;
    cout<<"Main Menu:"<<endl;
    cout<<"1. Breakfast"<<endl;
    cout<<"2. Lunch" <<endl;
    cout<<"3. Dinner"<<endl;
    cout<<"Enter your choice: ";
    cin >> n;

    switch (n)
    {
        case 1:
            cout<<"Breakfast Menu:"<<endl;
            cout<<"1. Pancakes - $5.00"<<endl;
            cout<<"2. Omelette - $6.00"<<endl;
            cout<<"3. French Toast - $4.50"<<endl;
            cout<<"Enter your choice: ";
            cin>>n1;

            switch (n1)
            {
                case 1:
                    cout<<"You selected: Pancakes - $5.00"<<endl;
                    break;
                case 2:
                    cout<<"You selected: Omelette - $6.00"<<endl;
                    break;
                case 3:
                    cout<<"You selected: French Toast - $4.50"<<endl;
                    break;
                default:
                    cout<<"Error"<<endl;
            }
            break;

        case 2:
            cout<<"Lunch Menu:"<<endl;
            cout<<"1. Rice - $8.00"<<endl;
            cout<< "2. beef - $7.50"<<endl;
            cout<<"3. Chicken - $6.00"<<endl;
            cout<<"Enter your choice: ";
            cin >>n1;

            switch (n1)
            {
                case 1:
                    cout<<"You selected: Rice - $8.00"<<endl;
                    break;
                case 2:
                    cout<<"You selected: beef - $7.50"<<endl;
                    break;
                case 3:
                    cout<<"You selected: Chicken - $6.00"<<endl;
                    break;
                default:
                    cout<<"Error"<<endl;
            }
            break;

        case 3:
            cout<<"Dinner Menu:"<<endl;
            cout<<"1. Ruti - $15.00"<<endl;
            cout<<"2. Mutton - $12.00"<<endl;
            cout<<"3. Pizza - $10.00"<<endl;
            cout<<"Enter your choice: ";
            cin>>n1;

            switch (n1)
            {
                case 1:
                    cout<<"You selected: Ruti - $15.00"<<endl;
                    break;
                case 2:
                    cout << "You selected: mutton - $12.00"<<endl;
                    break;
                case 3:
                    cout<<"You selected: Pizza - $10.00"<<endl;
                    break;
                default:
                    cout<<"Error"<<endl;
            }
            break;

            default:
            cout<<"Error"<<endl;
    }

    return 0;
}

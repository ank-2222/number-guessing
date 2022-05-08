#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
#include<conio.h>
using namespace std;
  void rule();
 int main(){
      int balance,bettingamt,guess,random;
      string name;
      char choice;
      srand(time(0));
     cout<<"----Number Guessing Game----\n";
       rule();
     cout<<"\n\n";
     cout<<"Enter Your Name\n";
     getline(cin,name);
     cout<<"Enter The starting Balance for Game\n";
     cin>>balance;
     do{
         system("cls");
       
        
         
         do{
             system("cls");
             cout<<"Hey! "<<name<<" Your starting Balance: "<<balance<<"\n\n";
        cout<<"Starting Game\n";
       
             cout<<"hey "<<name<<", Enter your betting ammount\n ";
             cin>>bettingamt;
             if(bettingamt>balance){
                 cout<<"You have entered amount more than your Balance\n";
                 cout<<"Your available balance is: "<<balance<<"\n";
                 cout<<"Renter your Betting amount\n";

             }

          }while(bettingamt>balance);
         cout<<"\n";
        do{
            cout<<"Guess a number between 0 to 9\n";
            cin>>guess;
            if(guess<0||guess>9){
                cout<<"You have entered invalid number.\n";
                cout<<"Enter Number between 0 to 9.\n";

            }

        }while(guess<0&&guess>9);

        random = rand()%10;

        if(guess== random){
            cout<<"Yay, you won this round\n\n";
            balance=balance+guess*10;
    
          }
        else {
            cout<<"Better Luck Next Time\n\n";
            balance-=bettingamt;

        }
        cout<<"Random Number was: "<<random<<"\n";

        cout<<"Your Available Balance: "<<balance<<"\n";

        if(balance==0){
            cout<<"You Have Low Balance\n";
            cout<<"Thanks For Playing\n";
            break;
        }


        cout<<"Do You want To play More?(Y/n)\n";
        cin>>choice;




     }while(choice=='Y'||choice=='y');
     
     
     return 0;

 }
 void rule(){
     cout<<"\t-----Welcome to Number guessing Game-----\n";
     cout<<"\t1.You Have to guess a number between 0 and 9.\n";
     cout<<"\t2.If guessed right, You will get 10x of money bet.\n";
     cout<<"\t3.If guessed wrong, You will lose money bet.\n";
 }
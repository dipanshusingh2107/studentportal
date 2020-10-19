#include<iostream>
#include<bits/stdc++.h>
#include"admin.h"
#include"hostel.h"
#include"job.h"
#include"library.h"
#include"student.h"
#include<sqlite3.h>
using namespace std;

int main()
{
    student s1;

    while(1)
    {
        if(s1.login())
        break;
        else
        {
            cout<<"WANT TO EXIT PRESS 1"<<endl;
            string option ;
            cin>>option;
            if(option=="1")
            return 0;
        }
    }
    system("CLEAR");
    cout<<"WELCOME BACK "<<s1.name<<endl;
    s1.mybooks();
    
    do{
        char choice;
        cout<<"Enter the option Number For details and Hit ENTER \n";
        cout<<"1. Hostel Details \n";
        cout<<"2. Job Opportunities\n";
        cout<<"5. To exit \n";
        choice= getchar();

        switch(choice)
        {
            case '1': s1.showhosteldata();break;
            case '2': s1.showjobdata();break;
            case '5': return 0;
            
            default : cout<<"Wrong Input \n";
        }

        cout<<"Press any Key to continue\n";
        cin.ignore();
        cin.get();
        system("CLEAR");

    }while(1);
    
    

    


}
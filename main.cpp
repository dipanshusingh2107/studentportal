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

   s1.showhosteldata();
   s1.showjobdata();

    


}
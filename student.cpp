#include"student.h"
#include<cstring>

void uppercase(string &s)
{
    for(int i=0;i<s.size();i++)
    {
        s[i]= toupper(s[i]);
    }
}

bool student::login()
{
    string username,password;   //username is rollno
    cout<<"Enter Roll Number \n";
    cin>>username;
    uppercase(username);
    cout<<"Enter Password \n";
    cin>>password;
    this->showrecord(username);
    if(this->password == password)
    return true;
    else
    {
        return false;
    }
    
    


}






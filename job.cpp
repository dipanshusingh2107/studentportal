#include"job.h"
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void job::input(string name, float ctc , string info)
{
    this->company_name= name;
    this-> ctc = ctc;
    this->info = info;
}

static int callback(void *unused, int count, char **data, char **columns)
{
     vector<job>*ptr= (vector<job>*)unused;
    job obj;
    string name= data[0];
    string info = data[2];
    float ctc = atof(data[1]);
    obj.input(name,ctc,info);  // complete this 

    ptr->push_back(obj);
    
    

    return 0;
}



void job::showjobdata()
{
    sqlite3 * db;
    int exit = sqlite3_open("admin.db",&db);

    string sql = "select * from job ;";
    vector<job>v;
    vector<job>*ptr = &v; 
    sqlite3_exec(db,sql.c_str(),callback,ptr,NULL);
    for(auto i:v)
    {
        cout<<fixed<<setprecision(2);
        cout<<i.company_name<<" "<<i.ctc<<" "<<i.info<<endl;
    }
}
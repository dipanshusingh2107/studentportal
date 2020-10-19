#include<iostream>
#include<bits/stdc++.h>
#include"library.h"
using namespace std;

void upper(string &s)       //uppercase name not working
{
    for(int i=0;i<s.size();i++)
    {
        s[i]= toupper(s[i]);
    }
}


// study this more
static int countcallback(void *count, int argc, char **argv, char **azColName) {
    int *c = (int*)count;
    *c = atoi(argv[0]);
    return 0;
}

static int callback(void *ptr, int argc, char **argv, char **azColName) {
    library *c = (library*)ptr;
    string bname = argv[0];     //bookname
    int issuenum = atoi(argv[1]);   // issue number;
    
    (c->books).push_back({bname,issuenum});
    return 0;
}

void library::search_book()
{
    sqlite3 * db;
    int exit = sqlite3_open("admin.db",&db);
    cout<<"Enter Book Name\t";
    string bname;
    cin>>bname;
    upper(bname);
    string sql = "select count(*) from books where book_name = '"+bname+"' and issuedto = 'NULL';" ;
    int count;
    sqlite3_exec(db, sql.c_str(), countcallback, &count, NULL);
    cout<<"Number Of "<<bname<<" Availabe are: "<<count<<endl;
}

void library::mybooks()
{
    sqlite3 * db;
    int exit = sqlite3_open("admin.db",&db);
    if(this->books.size()!=0)
    {
        this->books.clear();
    }

    string sql = "select * from books where issuedto= '"+this->rollno+"' ;";
    sqlite3_exec(db,sql.c_str(),callback,this,NULL);

    for(auto i:books)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
}
#include<iostream>
#include<bits/stdc++.h>
#include <sqlite3.h>
using namespace std;

static int callback(void *unused, int count, char **data, char **columns)
{
    int idx;

    printf("There are %d column(s)\n", count);

    for (idx = 0; idx < count; idx++) {
        printf("The data in column \"%s\" is: %s\n", columns[idx], data[idx]);
    }

    printf("\n");

    return 0;
}

int32_t main()
{
    sqlite3 * db;
    sqlite3_open("admin.db",&db);

     string sql = " SELECT * FROM admin_table;" ; //sql command to be executed;
    sqlite3_exec(db,sql.c_str(),callback,NULL,NULL);  //c_str convert string to char*


    return 0;
}
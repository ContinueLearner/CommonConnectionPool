#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include "Connection.h"
using namespace std;

int main()
{
	Connection conn;
	char sql[1024] = { 0 };
	sprintf(sql, "insert into user(name,password,state) values('%s','%s','%s')", "wang wu", "123456", "offline");
	conn.connect("127.0.0.1", 3306, "root", "lpy20030123", "chat");
	conn.update(sql);
	return 0; 
}

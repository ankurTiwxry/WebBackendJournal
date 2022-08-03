#include <iostream>
#include <stdio.h>
#include <sqlite3.h>

#include "config.h"

static int CreateDb(const char* buffer);
static int CreateTable(const char* buffer);

int main()
{
	const char* filepath = config::filepath;
	sqlite3* DB;

	CreateDb(filepath);
	CreateTable(filepath);
}

static int CreateDb(const char* buffer) {
	
}

static int CreateTable(const char* buffer) {
	sqlite3* DB;

	std::string sql = "CREATE TABLE IF NOT EXISTS GRADES("
		"ID      INTEGER	PRIMARY		KEY		AUTOINCREMENT, "
		"NAME    TEXT		NOT NULL,"
		"LNAME   TEXT		NOT NULL,"
		"AGE     INT		NOT NULL,"
		"ADDRESS CHAR(50),"
		"GRADE   CHAR(1) );,";
}
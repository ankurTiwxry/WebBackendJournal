#include "util.h"
#include "config.h"
#include "sqlite_wrapper.h"

int main()
{
	const char* filepath = config::filepath;
	sqlite3* DB;

	sqlite_wrapper::CreateDb(filepath);
	sqlite_wrapper::CreateTable(filepath);
}


#include <database_connect.h>
#include <stdio.h>
#include <libpq-fe.h>

PQconn* connect_to_database(const char* conninfo)
{
    conn = PQconnectdb(conninfo);

    if (PQstatus(conn) == CONNECTION_BAD) {
        printf("Connection to database failed\n");
        printf("%s\n", PQerrorMessage(conn));
        return 1;
    }

    return conn;
}

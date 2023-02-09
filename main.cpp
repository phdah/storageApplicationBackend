#include <stdio.h>
#include <libpq-fe.h> // Postgres c lib

int main() {

    PGconn *conn;
    PGresult *res;
    //const char *query = "select * from table_name";
    int rec_count;
    int col_count;
    int row;
    int col;


    conn = PQconnectdb("host=localhost user=postgres password=postgres dbname=cpp_test_db");

    if (PQstatus(conn) == CONNECTION_BAD) {
        printf("Connection to database failed\n");
        printf("%s\n", PQerrorMessage(conn));
        return 1;
    }

    res = PQexec(conn, "SELECT * FROM table_name");

    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        printf("Query failed\n");
        PQclear(res);
        PQfinish(conn);
        return 1;
    }

    rec_count = PQntuples(res);
    col_count = PQnfields(res);
    printf("Number of rows: %d\nNumber of columns: %d\n", rec_count, col_count-1);

    for ( row=0; row<rec_count; row++ ) {
        // col=0 will provide the row number too
        for ( col=1; col<col_count; col++ ) {
            printf("%s ", PQgetvalue(res, row, col));
        }
        printf("\n");
    }

    PQclear(res);
    PQfinish(conn);

    printf("\nNice! The script worked.\n");
    return 0;
}

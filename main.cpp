#include <stdio.h>
#include <libpq-fe.h> // Postgres c lib

using namespace std;

int main() {

    PGconn *conn;
    PGresult *ddl;
    PGresult *res;
    /*
    const char* insert = "INSERT INTO table_name (column_1, column_2, column_3, column_4, column_5) VALUES ('value_22_1', 'value_22_2', 'value_22_3', 'value_22_4', 'value_22_5')";
    */
    int row_number = 30;
    char insert[1024];
    snprintf(insert, sizeof(insert), "INSERT INTO table_name (column_1, column_2, column_3, column_4, column_5) VALUES ('value_%d_1', 'value_%d_2', 'value_%d_3', 'value_%d_4', 'value_%d_5')", row_number, row_number, row_number, row_number, row_number);

    int rec_count;
    int col_count;
    int row;
    int col;


    conn = PQconnectdb("host=localhost user=postgres password=postgres dbname=cpp_test_db");

    ddl = PQexec(conn, insert);
    if (PQresultStatus(ddl) != PGRES_COMMAND_OK) {
        printf("Insert failed: %s\n", PQresultErrorMessage(ddl));
        PQclear(ddl);
        return 1;
    }

    const char* query = "SELECT * FROM table_name";

    res = PQexec(conn, query);
    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        printf("Query failed: %s\n", PQresultErrorMessage(ddl));
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

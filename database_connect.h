#ifndef DATABASE_CONNECT_H
#define DATABASE_CONNECT_H

#include <stdio.h>
#include <libpq-fe.h>

PGconn *connect_to_database(const char* conninfo);

#endif

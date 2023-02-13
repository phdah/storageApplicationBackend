terraform {
    required_providers {
        postgresql = {
            source = "cyrilgdn/postgresql" // https://registry.terraform.io/providers/cyrilgdn/postgresql/latest/docs
            version = "1.18.0"
        }
    }
}

provider "postgresql" {
    host            = "localhost"
    port            = 5432
    database        = "postgres"
    username        = "postgres"
    password        = "postgres"
    sslmode         = "disable"
    connect_timeout = 15
}

resource "postgresql_database" "cpp_test_db" {
    name = "cpp_test_db"
}

resource "postgresql_database" "example_db" {
    name = "example_db"
}

resource "postgresql_schema" "example_schema" {
    name  = "example_schema"
    owner = "postgres"
    database = "example_db"

    policy {
        usage = true
    }
}

resource "postgresql_role" "example_user" {
    name     = "example_user"
    password = "example_password"
}

resource "postgresql_grant" "example_user_privs" {
    role      = postgresql_role.example_user.name
    database  = postgresql_database.example_db.name
    object_type = "database"
    privileges = ["ALL"]
}

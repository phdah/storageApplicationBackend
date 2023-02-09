# storageApplicationBackend
Relates to: https://github.com/emmaolofs/StorageApplication

# Development Plan

## Development: Write the code for the backend using C++. Implement the database, API, and other features according to the design.

### Task 1: Database implementation
- [x] Identify the data entities and relationships
  - Relational database, that needs to be transactiona.
- [x] Choose a database technology (e.g. MySQL, MongoDB)
  - Postgres, using [libpq](https://www.postgresql.org/docs/9.2/libpq.html) `c++` API.
- Implement functions for
  - [ ] adding
  - [ ] updating
  - [x] retrieving

### Task 2: API implementation
- [ ] Design the API structure and endpoints
- [ ] Implement the API using a C++ web framework (e.g. CppCMS, Wt)
- [ ] Implement functions for handling API requests and interacting with the database

### Task 3: Authentication and Authorization
- [ ] Choose an authentication method (e.g. JWT, OAuth)
- [ ] Implement authentication and authorization for the API
- [ ] Ensure that sensitive data is properly secured

### Task 4: File handling
- [ ] Implement functions for handling and storing files (e.g. images, documents)
- [ ] Implement functions for retrieving and displaying files

### Task 5: Error handling
- [ ] Implement error handling for the backend
- [ ] Ensure that appropriate error messages are returned to the client

### Task 6: Logging
- [ ] Implement logging for the backend
- [ ] Ensure that logs are properly stored and can be easily accessed for debugging and troubleshooting

## Testing: Test the backend thoroughly to ensure that it is working as expected and fix any bugs that are found.

## Deployment: Deploy the backend to a production environment, such as a cloud-based server or a dedicated server.

## Maintenance: Monitor the backend for any issues and make updates or improvements as needed.

## Documenting: Document the backend for future reference and for other developers.

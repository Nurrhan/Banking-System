//
// Created by Mostafa Mahmoud on 5/7/2017.
//

#ifndef DS_PROJECT_BANKING_SYSTEM_EMPLOYEE_H
#define DS_PROJECT_BANKING_SYSTEM_EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
private:
    string username;
    string password;

public:
    // Constructors and destructor

    Employee() : username(""), password("") {}

    Employee(const string &username, const string &password) : username(username), password(password) {}

    // Getters and setters

    const string &getUsername() const {
    return username;
  }

  void setUsername(const string &username) {
      this->username = username;
  }

  const string &getPassword() const {
      return password;
  }

  void setPassword(const string &password) {
      this->password = password;
  }


    friend ostream &operator<<(ostream &os, const Employee &employee);

};

ostream &operator<<(ostream &os, const Employee &employee) {
    os << "Username: " << employee.username << "\nPassword: " << employee.password;
    return os;
}
#endif //DS_PROJECT_BANKING_SYSTEM_EMPLOYEE_H

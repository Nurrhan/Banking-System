//
// Created by Mostafa Mahmoud on 5/7/2017.
//

#ifndef DS_PROJECT_BANKING_SYSTEM_ACCOUNT_H
#define DS_PROJECT_BANKING_SYSTEM_ACCOUNT_H

#include <iostream>
using namespace std;

class Account {

private:
    string accNumber;
    char accType;
    string firstName;
    string surName;
    string lastName;
    string phoneNum;
    string username;
    string password;
    string dateOfBirth;
    double balance;

public:
    // Constructors and destructor  (create_account() will replace constructor)

    Account();

    Account(const string &accNumber, char accType, const string &firstName, const string &surName,
            const string &lastName, const string &phoneNum, const string &username, const string &password,
            const string &dateOfBirth, double balance);

    /////////////////////////////////////////////////////////////////////////////////
    // Setters and getters

    const string &getAccNumber() const;

    void setAccNumber(const string &accNumber);

    char getAccType() const;

    void setAccType(char accType);

    const string &getFirstName() const;

    void setFirstName(const string &firstName);

    const string &getSurName() const;

    void setSurName(const string &surName);

    const string &getLastName() const;

    void setLastName(const string &lastName);

    const string &getPhoneNum() const;

    void setPhoneNum(const string &phoneNum);

    const string &getUsername() const;

    void setUsername(const string &username);

    const string &getPassword() const;

    void setPassword(const string &password);

    const string &getDateOfBirth() const;

    void setDateOfBirth(const string &dateOfBirth);

    double getBalance() const;

    void setBalance(double balance);

    // << operator for printing using cout
    // password omitted so that employee can't show it
    friend ostream &operator<<(ostream &os, const Account &account);

    //////////////////////////////////////////////////////////////////////////
    // Other methods


};

Account::Account() {}

Account::Account(const string &accNumber, char accType, const string &firstName, const string &surName,
                 const string &lastName, const string &phoneNum, const string &username, const string &password,
                 const string &dateOfBirth, double balance) : accNumber(accNumber), accType(accType),
                                                              firstName(firstName), surName(surName),
                                                              lastName(lastName), phoneNum(phoneNum),
                                                              username(username), password(password),
                                                              dateOfBirth(dateOfBirth), balance(balance) {}

// Setters and getters

const string &Account::getAccNumber() const {
    return accNumber;
}

void Account::setAccNumber(const string &accNumber) {
    Account::accNumber = accNumber;
}

char Account::getAccType() const {
    return accType;
}

void Account::setAccType(char accType) {
    Account::accType = accType;
}

const string &Account::getFirstName() const {
    return firstName;
}

void Account::setFirstName(const string &firstName) {
    Account::firstName = firstName;
}

const string &Account::getSurName() const {
    return surName;
}

void Account::setSurName(const string &surName) {
    Account::surName = surName;
}

const string &Account::getLastName() const {
    return lastName;
}

void Account::setLastName(const string &lastName) {
    Account::lastName = lastName;
}

const string &Account::getPhoneNum() const {
    return phoneNum;
}

void Account::setPhoneNum(const string &phoneNum) {
    Account::phoneNum = phoneNum;
}

const string &Account::getUsername() const {
    return username;
}

void Account::setUsername(const string &username) {
    Account::username = username;
}

const string &Account::getPassword() const {
    return password;
}

void Account::setPassword(const string &password) {
    Account::password = password;
}

const string &Account::getDateOfBirth() const {
    return dateOfBirth;
}

void Account::setDateOfBirth(const string &dateOfBirth) {
    Account::dateOfBirth = dateOfBirth;
}

double Account::getBalance() const {
    return balance;
}

void Account::setBalance(double balance) {
    Account::balance = balance;
}

// password omitted so that employee can't show it
ostream &operator<<(ostream &os, const Account &account) {
    os << "Account Number: " << account.accNumber << "\nAccount Type: " << account.accType
       << "\nName: " << account.firstName << ' ' << account.surName << ' ' << account.lastName
       << "\nPhone Number: " << account.phoneNum << "\nUsername: " << account.username
       << "\nDate of Birth: " << account.dateOfBirth << "\nBalance: " << account.balance;
    return os;
}


#endif //DS_PROJECT_BANKING_SYSTEM_ACCOUNT_H

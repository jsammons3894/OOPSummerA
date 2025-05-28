#include <iostream>

class Account {
private:
    int id;
    double balance;
    double annualInterestRate;

public:
    //get functions
    int getId{
        return id;
    }
    double getBalance{
        return balance;
    }
    double getAnnualInterestRate;

    //set functions
    void setId(const int& newId){
        if (newId >= 0){
        id = newId;
        }
        else balance = 0;
    }
    void setBalance(const int& newBalance){
        if (newBalance >= 0){
        balance = newBalance;
        }
        else balance = 0;
    }
    void setAnnualInterestRate(const double& newAnnualInterestRate){
        if (newAnnualInterestRate >= 0){
        annualInterestRate = newAnnualInterestRate;
        }
        else balance = 0;
    }

    //user defined constructor
    Account(const int& id, const int& balance, const double& annualInterestRate){
        void setId(const int& newId){
        if (newId >= 0){
        id = newId;
        }
        else balance = 0;
    }
    void setBalance(const int& newBalance){
        if (newBalance >= 0){
        balance = newBalance;
        }
        else balance = 0;
    }
    void setAnnualInterestRate(const double& newAnnualInterestRate){
        if (newAnnualInterestRate >= 0){
        annualInterestRate = newAnnualInterestRate;
        }
        else balance = 0;
    }
    }



};
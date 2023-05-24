#pragma once
#include <string> // C++ standard string class
#include "comission.hpp" // CommissionEmployee class declaration

class BasePlusCommissionEmployee {
public:
BasePlusCommissionEmployee(const std::string&, const std::string&, 
const std::string&, double = 0.0, double = 0.0, double = 0.0);

void setBaseSalary(double); // set base salary
double getBaseSalary() const; // return base salary
double earnings() const; // calculate earnings
std::string toString() const; // create string representation
private:
double baseSalary; // base salary
}; 
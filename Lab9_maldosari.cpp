/**
 * @file Lab9_maldosari.cpp
 * @author Musab Aldosari
 * @date 2026-11-16
 * @brief A banking program using inheritance and polymorphism
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Customer {
private:
	string customerID;
	string email;

public:

	/**
	 * @brief Creates a customer with default information.
	 * @param None
	 * @return None
	 */
	Customer() {
		customerID = "N/A";
		email = "N/A";
	}
	
	/**
	 * @brief Creates a customer with ID and email.
	 * @param id The customer's ID.
	 * @param emailAddr The customer's email address
	 * @return None
	 */
	Customer(const string& id, const string& emailAddr) {
		customerID = id;
		email = emailAddr;
	}

	/**
	 * @brief Returns the customer's ID.
	 * @param None
	 * @return The customer's ID.
	 */
	string getCustomerID() const {
		return customerID;
	}

	/**
	 * @brief Returns the customer's email.
	 * @param None
	 * @return The customer's email.
	 */
	string getEmail() const {
		return email;
	}

	/**
	 * @brief Prints the customer's information.
	 * @param None
	 * @return None
	 */
	void printCustomerInfo() const {
		cout << "Customer ID: " << customerID << endl;
		cout << "Email: " << email << endl;
	}
};
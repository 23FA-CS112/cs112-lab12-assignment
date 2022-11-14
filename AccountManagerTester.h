/* AccountManagerTester.h declares a test-class for class AccountManager.
 * Joel Adams, for CS 112 at Calvin University.
 */

#ifndef ACCOUNTMANAGERTESTER_H_
#define ACCOUNTMANAGERTESTER_H_

#include <iostream>

#include "AccountManager.h"
using namespace std;

class AccountManagerTester {
public:
    void runTests();
    void testCreateAndDelete();
    void testChangeUser();
    void testChangePassword();
};

#endif /*ACCOUNTMANAGERTESTER_H_*/

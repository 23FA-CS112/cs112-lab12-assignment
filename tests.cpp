#define CATCH_CONFIG_MAIN
#include "AccountManager.h"
#include "Menu.h"
#include "catch.hpp"

TEST_CASE("Menu class") {
    Menu m;
    REQUIRE(m.containsChoice('a'));
    REQUIRE(m.containsChoice('b'));
    REQUIRE(m.containsChoice('c'));
    REQUIRE(m.containsChoice('d'));
    REQUIRE(m.containsChoice('q'));
    REQUIRE(!m.containsChoice('e'));
}

// TEST_CASE("AccountManager class") {
//     SECTION("create and delete account") {
//         AccountManager am("testAccountInfo.txt");
//         REQUIRE(am.myAccounts["ann"] == "1234");
//         REQUIRE(am.myAccounts["bob"] == "bubba");
//         REQUIRE(am.myAccounts["cam"] == "mac");
//         // create a new account
//         am.createNewAccount("dan", "nad");
//         REQUIRE(am.myAccounts["dan"] == "nad");
//         // delete the account
//         am.deleteAccount("dan");
//     }
//     SECTION("create duplicate account") {
//         AccountManager am("testAccountInfo.txt");
//         am.createNewAccount("dan", "nad");
//         // try to create a duplicate account -- should fail
//         REQUIRE_THROWS_AS(am.createNewAccount("dan", "d"), Exception);
//     }
//     SECTION("delete non-existent account") {
//         AccountManager am("testAccountInfo.txt");
//         // try to delete the deleted account -- should fail
//         REQUIRE_THROWS_AS(am.deleteAccount("dan"), Exception);
//     }

//     SECTION("change password") {
//         AccountManager am("testAccountInfo.txt");
//         am.createNewAccount("dan", "dan1234");
//         am.changePassword("dan", "1234dan");
//         REQUIRE(am.myAccounts["dan"] == "1234dan");
//     }

//     SECTION("change password on non-existent account") {
//         AccountManager am("testAccountInfo.txt");
//         REQUIRE_THROWS_AS(am.changePassword("dan", "d"), Exception);
//     }

//     SECTION("change username") {
//         AccountManager am("testAccountInfo.txt");
//         am.createNewAccount("dan", "dan1234");
//         am.changeUserName("dan", "danno");
//         REQUIRE(am.myAccounts["danno"] == "dan1234");
//         // verify that the old account is gone
//         REQUIRE_THROWS_AS(am.deleteAccount("dan"), Exception);
//         am.deleteAccount("danno");
//     }

// }
/* Menu.cpp defines the Menu class operations.
 * Joel Adams, for CS 112 at Calvin University.
 */

#include "Menu.h"

char Menu::QUIT = 'q';

Menu::Menu() {
    // initialize myValue
    myValue = "Please choose one of the following items:";
    myValue += "\n a - Add new user+password";
    myValue += "\n b - Change a user's user-name";
    myValue += "\n c - Change a user's password";
    myValue += "\n d - delete user+password";
    myValue += "\n q - quit";
    myValue += "\n --> ";
    // initlaize myValidChoices
}

/* get string representation of my menu.
 */
string Menu::asString() const {
    return myValue;
}

/* output method
 * Parameters: out, an ostream.
 */
void Menu::print(ostream& out) const {
    out << asString();
}

/* convenience method
 * Parameters: choice, a char.
 */
bool Menu::containsChoice(char choice) const {
    return false;
}

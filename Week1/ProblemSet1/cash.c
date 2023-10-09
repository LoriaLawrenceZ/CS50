#include <stdio.h>
#include <cs50.h>

// Function prototypes
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void) {
    // Get the number of cents owed from the user
    int cents = get_cents();

    // Calculate the number of each type of coin needed
    int quarters = calculate_quarters(cents);
    int dimes = calculate_dimes(cents);
    int nickels = calculate_nickels(cents);
    int pennies = calculate_pennies(cents);

    // Calculate the total number of coins needed
    int total_coins = quarters + dimes + nickels + pennies;

    // Print the total number of coins needed
    printf("%d\n", total_coins);
}

// Function to get the number of cents from the user
int get_cents(void) {
    int cents;
    do {
        cents = get_int("Change owed: ");
    } while (cents < 0); // Ensure the input is non-negative
    return cents;
}

// Function to calculate the number of quarters needed
int calculate_quarters(int cents) {
    return cents / 25;
}

// Function to calculate the number of dimes needed
int calculate_dimes(int cents) {
    cents %= 25; // Calculate the remaining cents after quarters
    return cents / 10;
}

// Function to calculate the number of nickels needed
int calculate_nickels(int cents) {
    cents %= 25; // Calculate the remaining cents after quarters
    cents %= 10; // Calculate the remaining cents after dimes
    return cents / 5;
}

// Function to calculate the number of pennies needed
int calculate_pennies(int cents) {
    cents %= 25; // Calculate the remaining cents after quarters
    cents %= 10; // Calculate the remaining cents after dimes
    cents %= 5;  // Calculate the remaining cents after nickels
    return cents;
}
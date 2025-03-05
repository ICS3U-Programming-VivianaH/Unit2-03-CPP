// Copyright 2025 Viviana Hurtado
// Created by Viviana Hurtado
// March 3, 2025
// This program calculates and displays the area
// and perimeter for a given user input.
#include <iomanip>  // For formatting the output
#include <iostream>

#include "constants.cpp"  // Include the constants file

// Use specific using declarations
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    // Input
    int diameter;
    cout << "Enter the diameter of the pizza (inches): ";
    cin >> diameter;

    // Process
    double subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
    double tax = HST * subtotal;
    double total = subtotal + tax;

    // Output
    cout << "\nThe total cost is = $";
    cout << fixed << setprecision(2) << total << endl;

    return 0;
}

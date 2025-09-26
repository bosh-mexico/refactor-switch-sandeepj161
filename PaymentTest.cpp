#include "Checkout.h"
#include <cassert>
#include <iostream>

void testValidPayments() {
    std::cout << "Running Valid Payment Tests..." << std::endl;
    assert(Checkout::processPayment(PaymentMode::PayPal, 100.0) == true);
    assert(Checkout::processPayment(PaymentMode::GooglePay, 200.0) == true);
    assert(Checkout::processPayment(PaymentMode::CreditCard, 300.0) == true);
    std::cout << "Valid payment tests passed!" << std::endl << std::endl;
}

void testInvalidPayments() {
    std::cout << "Running Invalid Payment Tests..." << std::endl;
    assert(Checkout::processPayment(PaymentMode::Unknown, 100.0) == false);
    assert(Checkout::processPayment(PaymentMode::PayPal, -50.0) == false);
    assert(Checkout::processPayment(PaymentMode::GooglePay, 0.0) == false);
    std::cout << "Invalid payment tests passed!" << std::endl << std::endl;
}

int main() {
    testValidPayments();
    testInvalidPayments();
    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}

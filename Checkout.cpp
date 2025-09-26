#include "Checkout.h"
#include <iostream>
using namespace std;

unique_ptr<PaymentProcessor> Checkout::createProcessor(PaymentMode mode) {
    switch (mode) {
        case PaymentMode::PayPal: return make_unique<PayPalProcessor>();
        case PaymentMode::GooglePay: return make_unique<GooglePayProcessor>();
        case PaymentMode::CreditCard: return make_unique<CreditCardProcessor>();
        default: return nullptr;
    }
}

bool Checkout::processPayment(PaymentMode mode, double amount) {
    if (amount <= 0) {
        cerr << "Error: Invalid amount!" << endl;
        return false;
    }

    auto processor = createProcessor(mode);
    if (!processor) {
        cerr << "Error: Invalid payment mode selected!" << endl;
        return false;
    }

    return processor->process(amount);
}

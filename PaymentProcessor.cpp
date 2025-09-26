#include "PaymentProcessor.h"
using namespace std;

bool PayPalProcessor::process(double amount) {
    cout << "Processing PayPal payment of $" << amount << endl;
    // Future: integrate with PayPal API
    return true;
}

bool GooglePayProcessor::process(double amount) {
    cout << "Processing GooglePay payment of $" << amount << endl;
    // Future: integrate with GooglePay API
    return true;
}

bool CreditCardProcessor::process(double amount) {
    cout << "Processing Credit Card payment of $" << amount << endl;
    // Future: integrate with CreditCard API
    return true;
}

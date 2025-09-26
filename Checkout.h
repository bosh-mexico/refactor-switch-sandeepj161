#ifndef CHECKOUT_H
#define CHECKOUT_H

#include "PaymentMode.h"
#include "PaymentProcessor.h"
#include <memory>

class Checkout {
public:
    static bool processPayment(PaymentMode mode, double amount);

private:
    static std::unique_ptr<PaymentProcessor> createProcessor(PaymentMode mode);
};

#endif

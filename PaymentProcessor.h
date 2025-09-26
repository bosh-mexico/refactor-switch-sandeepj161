#ifndef PAYMENT_PROCESSOR_H
#define PAYMENT_PROCESSOR_H

#include <iostream>
#include "PaymentMode.h"

class PaymentProcessor {
public:
    virtual ~PaymentProcessor() = default;
    virtual bool process(double amount) = 0;
};

// Concrete processors
class PayPalProcessor : public PaymentProcessor {
public:
    bool process(double amount) override;
};

class GooglePayProcessor : public PaymentProcessor {
public:
    bool process(double amount) override;
};

class CreditCardProcessor : public PaymentProcessor {
public:
    bool process(double amount) override;
};

#endif

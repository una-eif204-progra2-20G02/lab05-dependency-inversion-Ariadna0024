//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H

#include <string>
#include "IProcessPayment.h"

class CashSender : public IProcessPayment {
public:
    CashSender();
    std::string sendPayment() const override;
    ~CashSender();
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H

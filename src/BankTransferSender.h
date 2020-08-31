//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H


#include <string>
#include "IProcessPayment.h"

class BankTransferSender : public IProcessPayment  {
public:
    BankTransferSender();
    ~BankTransferSender();
    std::string sendPayment() const;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H

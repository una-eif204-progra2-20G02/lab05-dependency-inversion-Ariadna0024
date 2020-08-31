//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H

#include <string>
#include "IProcessPayment.h"
class CheckSender : public IProcessPayment{
public:
    CheckSender();
    ~CheckSender();
    std::string sendPayment() const;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H

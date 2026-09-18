#include "Patient.h"

Patient::Patient(int id, std::string name, bool critical) 
    : id(id), name(name), isCritical(critical) {}

int Patient::getId() const {
    return id;
}

std::string Patient::getName() const {
    return name;
}

bool Patient::getCriticalStatus() const {
    return isCritical;
}

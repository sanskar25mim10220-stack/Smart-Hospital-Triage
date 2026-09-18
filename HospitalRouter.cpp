#include "HospitalRouter.h"
#include <iostream>

HospitalRouter::HospitalRouter() : currentDoctorIndex(0) {}

void HospitalRouter::registerPatient(int id, const std::string& name) {
    standardQueue.push_back(Patient(id, name, false));
    std::cout << "Standard patient registered. Please wait in the lobby.\n";
}

void HospitalRouter::triggerEmergency(int id, const std::string& name) {
    // Acts as a stack (LIFO) for immediate attention
    emergencyStack.push_back(Patient(id, name, true));
    std::cout << "CRITICAL ALERT: Patient moved to emergency override!\n";
}

void HospitalRouter::assignNextPatient() {
    if (!emergencyStack.empty()) {
        Patient p = emergencyStack.back();
        emergencyStack.pop_back();
        std::cout << "URGENT ASSIGNMENT: " << p.getName() << " sent to ER immediately!\n";
        return;
    }

    if (standardQueue.empty()) {
        std::cout << "No patients in the waiting room.\n";
        return;
    }

    Patient p = standardQueue.front();
    standardQueue.erase(standardQueue.begin());
    
    // Circular logic for round-robin assignment
    currentDoctorIndex = (currentDoctorIndex % TOTAL_DOCTORS) + 1;
    
    std::cout << "Patient " << p.getName() << " assigned to Doctor " << currentDoctorIndex << ".\n";
}

void HospitalRouter::viewQueues() const {
    std::cout << "\n--- Current Patient Loads ---\n";
    std::cout << "Critical Cases Waiting: " << emergencyStack.size() << "\n";
    std::cout << "Standard Cases Waiting: " << standardQueue.size() << "\n";
    std::cout << "-----------------------------\n";
}

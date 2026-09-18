#ifndef HOSPITALROUTER_H
#define HOSPITALROUTER_H

#include <vector>
#include <string>
#include "Patient.h"

class HospitalRouter {
private:
    std::vector<Patient> standardQueue;
    std::vector<Patient> emergencyStack; 
    int currentDoctorIndex;
    const int TOTAL_DOCTORS = 3; 

public:
    HospitalRouter();
    void registerPatient(int id, const std::string& name);
    void triggerEmergency(int id, const std::string& name);
    void assignNextPatient();
    void viewQueues() const;
};

#endif

#include <iostream>
#include <string>
#include <limits>
#include "HospitalRouter.h"

void displayMenu() {
    std::cout << "\n=== Triage System ===\n";
    std::cout << "1. Register Standard Patient\n";
    std::cout << "2. Trigger Emergency Override\n";
    std::cout << "3. Assign Next Patient to Doctor\n";
    std::cout << "4. View Queue Status\n";
    std::cout << "5. Exit\n";
    std::cout << "Select Action: ";
}

int main() {
    HospitalRouter router;
    int choice, id;
    std::string name;
    int nextId = 100; // Auto-generating IDs

    while (true) {
        displayMenu();
        if (!(std::cin >> choice)) {
            // Non-functional requirement: Error handling and stability
            std::cout << "System Error: Numeric input required.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1:
                std::cout << "Enter Patient Name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                router.registerPatient(nextId++, name);
                break;
            case 2:
                std::cout << "Enter Emergency Patient Name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                router.triggerEmergency(nextId++, name);
                break;
            case 3:
                router.assignNextPatient();
                break;
            case 4:
                router.viewQueues();
                break;
            case 5:
                std::cout << "Ending Triage Session.\n";
                return 0;
            default:
                std::cout << "Invalid command.\n";
        }
    }
    return 0;
}

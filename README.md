# Smart-Hospital-Triage
This system manages patient flow in an emergency room. It uses advanced data concepts—specifically relying on a stack-based approach for emergency overrides (last-in, first-out for critical conditions) and a circular routing model to distribute patients evenly among on-call doctors.

# Smart Hospital Triage System

 Overview of the Project
A lightweight C++ CLI application designed to optimize emergency room patient flow. It categorizes patients and uses algorithmic routing to assign them to doctors efficiently, ensuring critical patients receive immediate care.

 Features
* **Register Patients:** Log patient details and urgency.
* **Round-Robin Assignment:** Automatically distribute standard cases evenly among doctors.
* **Emergency Override:** Push critical cases to the top of the priority list.
* **System Monitoring:** View active queues and doctor assignments.

 Technologies/Tools Used
* **Language:** C++ (C++11 or higher)
* **Architecture:** Modular Object-Oriented Design
* **Version Control:** Git & GitHub

Steps to Install & Run the Project
1. Clone the repository: 
2. Navigate to the source folder: 
3. Compile the system: 
4. Run the executable:
   * **Windows:
   * **Mac/Linux:

 Instructions for Testing
1. Add 3 standard patients. 
2. Trigger the "Assign Next Patient" function to see them distributed evenly to Doctors 1, 2, and 3.
3. Add a patient with the "Emergency Override" feature.
4. Attempt to input text when a patient ID number is requested to test the application's Error Handling non-functional requirement.


Key Features & Functional RequirementsTriageOS implements
Three major functional modules required by the project specifications, featuring a clear input/output structure and logical workflow[cite: 1]:Patient Intake Module (CRUD Operations):
Register new standard patients into the hospital database.Assign auto-generated unique tracking IDs.Store patient records dynamically in memory.Algorithmic Doctor Routing (Simulation/Processing):
Distributes standard patients to available doctors.Utilizes logic derived from circular linked list principles to maintain a continuous,
fair round-robin loop (Doctor 1 → Doctor 2 → Doctor 3 → Doctor 1).Emergency Override Mechanism (Queue Management):
Registers critical patients directly to a specialized high-priority pipeline.Relies on stack implementations (LIFO) so the most recent,
most severe trauma arrivals are pushed to the absolute front of the line for immediate surgical or medical intervention.
System Reporting Module:Displays real-time analytics of the waiting room.Shows the exact count of critical vs. standard cases awaiting assignment.
 
 
 
 Non-Functional RequirementsTo ensure the system is robust and production-ready, TriageOS enforces the following non-functional requirements.
 RequirementImplementation StrategyError HandlingValidates all std::cin user inputs.
 If a user enters text instead of an ID number, the system catches the mismatch, clears the buffer, and prevents a fatal crash.UsabilityFeatures a clean, distraction-free terminal menu with clear textual feedback for every action
 (e.g., "URGENT ASSIGNMENT").PerformanceOperations like adding to the stack or vectors occur in $O(1)$
 time complexity, ensuring instantaneous routing even under high data loads.MaintainabilityThe codebase is strictly modularized into distinct classes 
 (Patient, HospitalRouter), separating the data model from the routing logic for easy future updates.
 
 
Future Enhancements
While this CLI version operates in memory, future iterations could integrate n8n workflow automation to automatically send SMS notifications to the assigned on-call doctors when a critical patient 
is routed to them, transforming this from a local terminal app into a fully connected medical IoT system.

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
   * **Windows:** `triage_sys.exe`
   * **Mac/Linux:** `./triage_sys`

 Instructions for Testing
1. Add 3 standard patients. 
2. Trigger the "Assign Next Patient" function to see them distributed evenly to Doctors 1, 2, and 3.
3. Add a patient with the "Emergency Override" feature.
4. Attempt to input text when a patient ID number is requested to test the application's Error Handling non-functional requirement.

Problem Statement
Emergency rooms often face chaotic influxes of patients. Without an efficient triage and routing system, critical patients might wait too long, and doctor workloads become unbalanced, leading to burnout and decreased quality of care. 

 Scope of the Project
This project is a terminal-based Hospital Triage System built in C++. It digitizes patient intake, categorizes them by urgency, and mathematically routes them to available doctors. 

 Target Users
* Hospital receptionists and triage nurses.
* Ward administrators managing doctor shifts.

 High-Level Features
1. **Patient Intake Module (CRUD):** Register new patients with urgency levels.
2. **Emergency Override Module (Stack Logic):** Instantly push critical patients to the front of the queue.
3. **Doctor Routing Module (Circular Logic):** Evenly distribute standard patients to on-call doctors in a continuous round-robin loop.

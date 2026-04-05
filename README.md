📄 Abstract

This project implements a simple customer support ticket management system using the C programming language. 
It allows users to create, view, update, and delete tickets through a menu-driven interface.
The system demonstrates fundamental concepts of data structures, string handling, and file-less record management,
making it a practical example of how C can be applied to real-world problem solving.

📝 Introduction

Customer support systems are essential for managing client issues efficiently. In this project, a ticketing system is
designed to simulate how organizations track and resolve customer complaints. Each ticket contains an ID, customer name,
issue description, and status. The program provides a console-based interface where users can interact with tickets, 
reflecting the basic operations of a real-world helpdesk system. This project highlights the importance of structured
programming and data management in building reliable applications.

 Methodology
 
The system is implemented using the following methodology:
- Data Structure:
A struct Ticket is defined to store ticket details such as ID, customer name, issue, and status. An array of tickets (tickets[MAX]) is used for storage.
- Core Functions:
- createTicket(): Adds a new ticket with user-provided details and sets its status to "Open".
- viewTickets(): Displays all existing tickets in a formatted list.
- updateTicket(): Allows modification of the status of a ticket by searching with its ID.
- deleteTicket(): Removes a ticket by shifting subsequent records to maintain array integrity.
- Menu System:
A loop-driven menu in main() provides options for users to perform operations until they choose to exit.
- Error Handling:
The program checks for invalid inputs, nonexistent ticket IDs, and ensures smooth user interaction.

RESULT:

<img width="830" height="289" alt="Screenshot 2026-04-05 200154" src="https://github.com/user-attachments/assets/a8529cba-69c5-4cc2-ba80-c6cefb0c8afd" />

<img width="353" height="269" alt="Screenshot 2026-04-05 200202" src="https://github.com/user-attachments/assets/d67c8a97-d553-445d-9ca4-fc6c7ae183a2" />

<img width="675" height="244" alt="Screenshot 2026-04-05 200211" src="https://github.com/user-attachments/assets/7a16d5a7-af9f-487f-8b05-47c58c4a8439" />

<img width="397" height="217" alt="Screenshot 2026-04-05 200218" src="https://github.com/user-attachments/assets/79a2eb33-ede0-4e31-9f90-88dc58f9d44f" />

<img width="459" height="228" alt="Screenshot 2026-04-05 200226" src="https://github.com/user-attachments/assets/de7dd13f-486d-49d1-a312-75db86b88a22" />


✅ Conclusion
The Customer Support Ticket System demonstrates how C can be used to build a functional, interactive application for managing records. While simple, it effectively covers CRUD (Create, Read, Update, Delete) operations, which are the foundation of most database-driven systems. This project can be extended by adding features such as file storage for persistence, search functionality, and priority levels. Overall, it serves as a practical introduction to structured programming and data management in C.




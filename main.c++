#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

class Student
{
public:
    Student(int id, std::string name, int age, std::string phone, std::string email,
            std::string bloodGroup, bool isActive, std::string parentName, std::string parentPhone)
        : id(id), name(name), age(age), phone(phone), email(email),
          bloodGroup(bloodGroup), isActive(isActive), parentName(parentName), parentPhone(parentPhone) {}

    int getId() const
    {
        return id;
    }

    std::string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    std::string getPhone() const
    {
        return phone;
    }

    bool isActiveStudent() const
    {
        return isActive;
    }

    std::string getBloodGroup() const
    {
        return bloodGroup;
    }

    void displayParentInfo() const
    {
        std::cout << "Parent Name: " << parentName << std::endl;
        std::cout << "Parent Phone: " << parentPhone << std::endl;
    }

private:
    int id;
    std::string name;
    int age;
    std::string phone;
    std::string email;
    std::string bloodGroup;
    bool isActive;
    std::string parentName;
    std::string parentPhone;
};

class Hostel
{
public:
    void addStudent(const Student &student)
    {
        students.push_back(student);
    }

    void updateNewStudents(const Student &student)
    {
        newStudents.push_back(student);
    }

    void displayAllStudents() const
    {
        std::cout << "List of all students:" << std::endl;
        for (const auto &student : students)
        {
            std::cout << "ID: " << std::setw(4) << student.getId() << " | Name: " << std::setw(20) << student.getName()
                      << " | Age: " << std::setw(3) << student.getAge() << " | Active: " << (student.isActiveStudent() ? "Yes" : "No")
                      << std::endl;
        }
    }

    void displayParentInfoById(int studentId) const
    {
        for (const auto &student : students)
        {
            if (student.getId() == studentId)
            {
                std::cout << "Parent Information for Student ID " << studentId << ":" << std::endl;
                student.displayParentInfo();
                return;
            }
        }
        std::cout << "Student with ID " << studentId << " not found." << std::endl;
    }

    void removeStudentById(int studentId)
    {
        for (auto it = students.begin(); it != students.end(); ++it)
        {
            if (it->getId() == studentId)
            {
                students.erase(it);
                removeStudentFromNewStudents(studentId);
                std::cout << "Student with ID " << studentId << " removed successfully!" << std::endl;
                return;
            }
        }
        std::cout << "Student with ID " << studentId << " not found." << std::endl;
    }

    void displayBloodBank() const
    {
        int donorCount = 0;
        std::cout << std::setw(40) << std::right << "Blood Bank" << std::endl;
        std::cout << std::setfill('-') << std::setw(80) << "-" << std::setfill(' ') << std::endl;
        std::cout << "ID  | Name                | Age | Blood Group" << std::endl;
        std::cout << std::setfill('-') << std::setw(80) << "-" << std::setfill(' ') << std::endl;
        for (const auto &student : students)
        {
            if (student.isActiveStudent())
            {
                std::cout << std::setw(4) << student.getId() << " | " << std::setw(20) << student.getName()
                          << " | " << std::setw(3) << student.getAge() << " | " << std::setw(12) << student.getBloodGroup() << std::endl;
                donorCount++;
            }
        }
        std::cout << std::setfill('-') << std::setw(80) << "-" << std::setfill(' ') << std::endl;
        std::cout << "Total Donors Available: " << donorCount << std::endl;
    }

    void displayRemainingSeats() const
    {
        int occupiedSeats = students.size();
        int remainingSeats = totalCapacity - occupiedSeats;

        std::cout << std::setw(40) << std::right << "Remaining Seats" << std::endl;
        std::cout << std::setfill('-') << std::setw(80) << "-" << std::setfill(' ') << std::endl;
        std::cout << "Occupied Seats: " << occupiedSeats << std::endl;
        std::cout << "Remaining Seats: " << remainingSeats << std::endl;
        std::cout << "Newly Added Students: " << std::endl;
        for (const auto &student : newStudents)
        {
            std::cout << "ID: " << std::setw(4) << student.getId() << " | Name: " << std::setw(20) << student.getName()
                      << " | Age: " << std::setw(3) << student.getAge() << " | Phone: " << student.getPhone() << std::endl;
        }
        std::cout << std::setfill('-') << std::setw(80) << "-" << std::setfill(' ') << std::endl;
    }

private:
    std::vector<Student> students;
    std::vector<Student> newStudents;
    int totalCapacity = 20; // Update this as needed

    void removeStudentFromNewStudents(int studentId)
    {
        for (auto it = newStudents.begin(); it != newStudents.end(); ++it)
        {
            if (it->getId() == studentId)
            {
                newStudents.erase(it);
                return;
            }
        }
    }
};

int main()
{
    Hostel hostel;

    while (true)
    {
        std::cout << std::setw(40) << std::right << "Hostel Management System" << std::endl;
        std::cout << std::setfill('-') << std::setw(80) << "-" << std::setfill(' ') << std::endl;
        std::cout << "1. Add Student" << std::endl;
        std::cout << "2. View All Students Records" << std::endl;
        std::cout << "3. View Parent Information by Student ID" << std::endl;
        std::cout << "4. Display Blood Bank" << std::endl;
        std::cout << "5. Remove Student by ID" << std::endl;
        std::cout << "6. Display Remaining Seats" << std::endl;
        std::cout << "7. Exit" << std::endl;
        std::cout << std::setfill('-') << std::setw(80) << "-" << std::setfill(' ') << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int id;
            std::string name, phone, email, bloodGroup, parentName, parentPhone;
            int age;
            bool isActive;
            std::cout << "Enter student ID: ";
            std::cin >> id;
            std::cin.ignore();
            std::cout << "Enter student name: ";
            std::getline(std::cin, name);
            std::cout << "Enter student age: ";
            std::cin >> age;
            std::cin.ignore();
            std::cout << "Enter student phone: ";
            std::getline(std::cin, phone);
            std::cout << "Enter student email: ";
            std::getline(std::cin, email);
            std::cout << "Enter blood group: ";
            std::getline(std::cin, bloodGroup);
            std::cout << "Is student active (1 for Yes, 0 for No): ";
            std::cin >> isActive;
            std::cin.ignore();
            std::cout << "Enter parent name: ";
            std::getline(std::cin, parentName);
            std::cout << "Enter parent phone: ";
            std::getline(std::cin, parentPhone);
            Student newStudent(id, name, age, phone, email, bloodGroup, isActive, parentName, parentPhone);
            hostel.addStudent(newStudent);
            hostel.updateNewStudents(newStudent);
            std::cout << "Student added successfully!" << std::endl;
            break;
        }
        case 2:
            std::cout << std::setw(40) << std::right << "All Students Records" << std::endl;
            std::cout << std::setfill('-') << std::setw(80) << "-" << std::setfill(' ') << std::endl;
            hostel.displayAllStudents();
            break;
        case 3:
        {
            int studentIdToView;
            std::cout << "Enter student ID to view parent information: ";
            std::cin >> studentIdToView;
            std::cout << std::setw(40) << std::right << "Parent Information" << std::endl;
            std::cout << std::setfill('-') << std::setw(80) << "-" << std::setfill(' ') << std::endl;
            hostel.displayParentInfoById(studentIdToView);
            break;
        }
        case 4:
            hostel.displayBloodBank();
            break;
        case 5:
        {
            int studentIdToRemove;
            std::cout << "Enter student ID to remove: ";
            std::cin >> studentIdToRemove;
            hostel.removeStudentById(studentIdToRemove);
            break;
        }
        case 6:
            hostel.displayRemainingSeats();
            break;
        case 7:
            std::cout << "Exiting the program." << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
    }

    return 0;
}

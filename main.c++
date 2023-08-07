#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

// Structure to store details of each hostel boy
struct HostelBoy
{
    string name;
    double groceriesSpent;
    int mealCount;
    double pricePerMeal;
};

// Structure to store details of each blood donor
struct BloodDonor
{
    string name;
    string phone;
    string bloodGroup;
    bool isActive;
};

// Structure to store details of parents
struct ParentDetails
{
    string studentName;
    string fatherName;
    string motherName;
    string fatherPhone;
    string motherPhone;
};

// Structure to store details of students
struct StudentDetails
{
    string name;
    string phone;
    int age;
    string bloodGroup;
    string maritalStatus;
};

// Function to generate dummy parent details
vector<ParentDetails> generateDummyParentDetails()
{
    vector<ParentDetails> parentDetails;

    ParentDetails details1 = {"Name: John Doe", "Father's Name: Smith Doe", "Mother's Name: Sansa Doe", "Father's Phone: 012xx", "Mother's Phone: 0123213xxx"};
    ParentDetails details2 = {"Name: Jane Smith", "Father's Name: Robert Smith", "Mother's Name: Emily Smith", "Father's Phone: 987xx", "Mother's Phone: 9876543xxx"};
    ParentDetails details3 = {"Name: Michael Johnson", "Father's Name: David Johnson", "Mother's Name: Elizabeth Johnson", "Father's Phone: 555xx", "Mother's Phone: 5555555xxx"};
    ParentDetails details4 = {"Name: John Doe", "Father's Name: Smith Doe", "Mother's Name: Sansa Doe", "Father's Phone: 012xx", "Mother's Phone: 0123213xxx"};
    ParentDetails details5 = {"Name: Jane Smith", "Father's Name: Robert Smith", "Mother's Name: Emily Smith", "Father's Phone: 987xx", "Mother's Phone: 9876543xxx"};
    ParentDetails details6 = {"Name: Michael Johnson", "Father's Name: David Johnson", "Mother's Name: Elizabeth Johnson", "Father's Phone: 555xx", "Mother's Phone: 5555555xxx"};
    ParentDetails details7 = {"Name: John Doe", "Father's Name: Smith Doe", "Mother's Name: Sansa Doe", "Father's Phone: 012xx", "Mother's Phone: 0123213xxx"};
    ParentDetails details8 = {"Name: Jane Smith", "Father's Name: Robert Smith", "Mother's Name: Emily Smith", "Father's Phone: 987xx", "Mother's Phone: 9876543xxx"};
    ParentDetails details9 = {"Name: Michael Johnson", "Father's Name: David Johnson", "Mother's Name: Elizabeth Johnson", "Father's Phone: 555xx", "Mother's Phone: 5555555xxx"};

    parentDetails.push_back(details1);
    parentDetails.push_back(details2);
    parentDetails.push_back(details3);
    parentDetails.push_back(details4);
    parentDetails.push_back(details5);
    parentDetails.push_back(details6);
    parentDetails.push_back(details7);
    parentDetails.push_back(details8);
    parentDetails.push_back(details9);

    return parentDetails;
}

// Function to generate dummy student details
vector<StudentDetails> generateDummyStudentDetails()
{
    vector<StudentDetails> studentDetails;

    StudentDetails details1 = {"Name: John Doe", "Student Phone: 0123xxxx", 20, "A+", "Single"};
    StudentDetails details2 = {"Name: Jane Smith", "Student Phone: 9876xxxx", 22, "O-", "Married"};
    StudentDetails details3 = {"Name: Michael Johnson", "Student Phone: 5555xxxx", 19, "B+", "Single"};

    StudentDetails details4 = {"Name: John Doe", "Student Phone: 0123xxxx", 20, "A+", "Single"};
    StudentDetails details5 = {"Name: Jane Smith", "Student Phone: 9876xxxx", 22, "O-", "Married"};
    StudentDetails details6 = {"Name: Michael Johnson", "Student Phone: 5555xxxx", 19, "B+", "Single"};

    StudentDetails details7 = {"Name: John Doe", "Student Phone: 0123xxxx", 20, "A+", "Single"};
    StudentDetails details8 = {"Name: Jane Smith", "Student Phone: 9876xxxx", 22, "O-", "Married"};
    StudentDetails details9 = {"Name: Michael Johnson", "Student Phone: 5555xxxx", 19, "B+", "Single"};

    StudentDetails details10 = {"Name: John Doe", "Student Phone: 0123xxxx", 20, "A+", "Single"};
    StudentDetails details11 = {"Name: Jane Smith", "Student Phone: 9876xxxx", 22, "O-", "Married"};
    StudentDetails details12 = {"Name: Michael Johnson", "Student Phone: 5555xxxx", 19, "B+", "Single"};

    studentDetails.push_back(details1);
    studentDetails.push_back(details2);
    studentDetails.push_back(details3);
    studentDetails.push_back(details4);
    studentDetails.push_back(details5);
    studentDetails.push_back(details6);
    studentDetails.push_back(details7);
    studentDetails.push_back(details8);
    studentDetails.push_back(details9);
    studentDetails.push_back(details10);
    studentDetails.push_back(details11);
    studentDetails.push_back(details12);

    return studentDetails;
}

// Function to display students' details
void displayStudentsDetails(const vector<StudentDetails> &studentDetails)
{
    cout << "\n----------------------------------------" << endl;
    cout << "         Students' Details" << endl;
    cout << "----------------------------------------" << endl;

    for (const StudentDetails &details : studentDetails)
    {
        cout << details.name << endl;
        cout << details.phone << endl;
        cout << "Age: " << details.age << endl;
        cout << "Blood Group: " << details.bloodGroup << endl;
        cout << "Marital Status: " << details.maritalStatus << endl;
        cout << "----------------------------------------" << endl;
    }

    cout << "\nTotal Student Details: " << studentDetails.size() << endl;
}

// Function to display parents' details
void displayParentsDetails(const vector<ParentDetails> &parentDetails)
{
    cout << "\n----------------------------------------" << endl;
    cout << "         Parents' Details" << endl;
    cout << "----------------------------------------" << endl;

    for (const ParentDetails &details : parentDetails)
    {
        cout << details.studentName << endl;
        cout << details.fatherName << endl;
        cout << details.fatherPhone << endl;
        cout << details.motherName << endl;
        cout << details.motherPhone << endl;
        cout << "----------------------------------------" << endl;
    }

    cout << "\nTotal Parent Details: " << parentDetails.size() << endl;
}

// Function to display blood donor information and count available donors
void displayBloodDonors(const vector<BloodDonor> &donors)
{
    int availableCount = 0;

    cout << "\n----------------------------------------" << endl;
    cout << "         Blood Donors List" << endl;
    cout << "----------------------------------------" << endl;
    for (const BloodDonor &donor : donors)
    {
        cout << "Name: " << donor.name << endl;
        cout << "Phone: " << donor.phone << endl;
        cout << "Blood Group: " << donor.bloodGroup << endl;
        cout << "Status: " << (donor.isActive ? "Available" : "Unavailable") << endl;
        cout << "----------------------------------------" << endl;

        if (donor.isActive)
        {
            availableCount++;
        }
    }

    cout << "\nTotal Available Blood Donors: " << availableCount << endl;
}

// Function to calculate the total cost of meals for a hostel boy
double calculateTotalCost(const HostelBoy &boy, double extraCost)
{
    return boy.mealCount * boy.pricePerMeal + extraCost;
}

// Function to calculate the total meal count of all boys combined
int calculateTotalMealCount(const vector<HostelBoy> &boys)
{
    int totalMealCount = 0;
    for (const HostelBoy &boy : boys)
    {
        totalMealCount += boy.mealCount;
    }
    return totalMealCount;
}

// Function to calculate individual costs and display results
void calculateMealAndRents()
{
    const int numberOfBoys = 5;
    double houseRent;
    double buaBill;
    double internetBill;
    double gasBill;
    double waterBill;
    double electricityBill;

    vector<HostelBoy> boys(numberOfBoys);

    // Separate input stream and output stream
    istream &inputStream = cin;
    ostream &outputStream = cout;

    // Get input for house rent, bua bill, internet bill, gas bill, water bill, and electricity bill
    outputStream << "Enter House Rent: $";
    inputStream >> houseRent;

    outputStream << "Enter Bua Bill: $";
    inputStream >> buaBill;

    outputStream << "Enter Internet Bill: $";
    inputStream >> internetBill;

    outputStream << "Enter Gas Bill: $";
    inputStream >> gasBill;

    outputStream << "Enter Water Bill: $";
    inputStream >> waterBill;

    outputStream << "Enter Electricity Bill: $";
    inputStream >> electricityBill;

    outputStream << endl;

    outputStream << "Enter details for each hostel boy:" << endl;

    for (int i = 0; i < numberOfBoys; ++i)
    {
        outputStream << "Hostel Boy " << i + 1 << ":" << endl;
        outputStream << "Enter name: ";
        inputStream.ignore();
        getline(inputStream, boys[i].name);

        outputStream << "Enter meal count: ";
        inputStream >> boys[i].mealCount;

        outputStream << "Enter groceries spent for " << boys[i].name << ": $";
        inputStream >> boys[i].groceriesSpent;

        outputStream << endl;
    }

    // Calculate the total meal count of all boys combined
    int totalMealCount = calculateTotalMealCount(boys);

    // Calculate and update the price per meal for each hostel boy
    double totalGroceriesSpent = 0.0;
    for (const HostelBoy &boy : boys)
    {
        totalGroceriesSpent += boy.groceriesSpent;
    }

    double mealRate = totalGroceriesSpent / totalMealCount;

    // Calculate the cost of each item and divide it by the total number of boys
    double houseRentPerBoy = houseRent / boys.size();
    double buaBillPerBoy = buaBill / boys.size();
    double internetBillPerBoy = internetBill / boys.size();
    double gasBillPerBoy = gasBill / boys.size();
    double waterBillPerBoy = waterBill / boys.size();
    double electricityBillPerBoy = electricityBill / boys.size();

    // Display the individual cost of each item per boy
    cout << "\n----------------------------------------" << endl;
    cout << "      Individual Cost Per Boy" << endl;
    cout << "----------------------------------------" << endl;
    for (const HostelBoy &boy : boys)
    {
        double houseAndOtherBills = houseRentPerBoy + buaBillPerBoy + internetBillPerBoy + gasBillPerBoy + waterBillPerBoy + electricityBillPerBoy;
        double individualMealCost = mealRate * boy.mealCount;
        double payableOrReceivable = boy.groceriesSpent - individualMealCost;
        double totalCost = houseAndOtherBills + (mealRate * boy.mealCount);

        cout << "Hostel Boy: " << boy.name << endl;
        cout << "House Rent: $" << fixed << setprecision(2) << houseRentPerBoy << endl;
        cout << "Bua Bill: $" << fixed << setprecision(2) << buaBillPerBoy << endl;
        cout << "Internet Bill: $" << fixed << setprecision(2) << internetBillPerBoy << endl;
        cout << "Gas Bill: $" << fixed << setprecision(2) << gasBillPerBoy << endl;
        cout << "Water Bill: $" << fixed << setprecision(2) << waterBillPerBoy << endl;
        cout << "Electricity Bill: $" << fixed << setprecision(2) << electricityBillPerBoy << endl;
        cout << "Total House and Other Bills: $" << fixed << setprecision(2) << houseAndOtherBills << endl;
        cout << "Meal Rate: $" << fixed << setprecision(2) << mealRate << " per meal" << endl;
        cout << "Individual Meal Count: " << boy.mealCount << " meals" << endl;
        cout << "Groceries Spent: $" << fixed << setprecision(2) << boy.groceriesSpent << endl;
        cout << "Payable/Receivable: $" << fixed << setprecision(2) << payableOrReceivable << endl;
        cout << "Total Cost: $" << fixed << setprecision(2) << totalCost << endl;
        cout << "----------------------------------------" << endl;
    }

    // Display the total meal count
    cout << "\n----------------------------------------" << endl;
    cout << "   Total Meal Count of all Boys: " << totalMealCount << endl;
    cout << "   Total Spent on Groceries: $" << fixed << setprecision(2) << totalGroceriesSpent << endl;
    cout << "   Meal Rate: $" << fixed << setprecision(2) << mealRate << " per meal" << endl;
    cout << "----------------------------------------" << endl;
}

// Function to generate dummy blood donor data
vector<BloodDonor> generateDummyBloodDonors()
{
    vector<BloodDonor> donors = {
        {"John Doe", "123-456-7890", "A+", true},
        {"Jane Smith", "987-654-3210", "O-", false},
        {"Michael Johnson", "555-555-5555", "B+", true},
        {"John Doe", "123-456-7890", "A+", true},
        {"Jane Smith", "987-654-3210", "O-", false},
        {"Michael Johnson", "555-555-5555", "B+", true},
        {"John Doe", "123-456-7890", "A+", true},
        {"Jane Smith", "987-654-3210", "O-", false},
        {"Michael Johnson", "555-555-5555", "B+", true},
        {"John Doe", "123-456-7890", "A+", true},
        {"Jane Smith", "987-654-3210", "O-", false},
        {"Michael Johnson", "555-555-5555", "B+", true},
        // ... Add more dummy data
    };
    return donors;
}

// Structure to store randomly generated student details
struct StudentDetailsRandom
{
    string name;
    string phone;
    string university;
};

// Function to generate random student details
vector<StudentDetailsRandom> generateStudentDetails()
{
    vector<StudentDetailsRandom> students = {
        {"Name: Student 1", "Phone: 0123xxxx", "University: University 1"},
        {"Name: Student 2", "Phone: 0456xxxx", "University: University 2"},
        {"Name: Student 3", "Phone: 0789xxxx", "University: University 3"},
        {"Name: Student 4", "Phone: 0123xxxx", "University: University 4"},
        {"Name: Student 5", "Phone: 0456xxxx", "University: University 5"},
        {"Name: Student 6", "Phone: 0789xxxx", "University: University 6"},
        // ... Add more student data
    };
    return students;
}

// Function to display random student details
void displayStudentDetails(const vector<StudentDetailsRandom> &students)
{
    cout << "\n----------------------------------------" << endl;
    cout << "       Randomly Generated Students" << endl;
    cout << "----------------------------------------" << endl;
    for (const StudentDetailsRandom &student : students)
    {
        cout << student.name << endl;
        cout << student.phone << endl;
        cout << student.university << endl;
        cout << "----------------------------------------" << endl;
    }
}

int main()
{

    int totalSeats = 10;   // Total number of seats in the hostel
    int occupiedSeats = 6; // Number of seats currently occupied

    int bloodUnitsAvailable = 10; // Initial blood units available
    // Admin login credentials
    string adminUsername = "admin";
    string adminPassword = "123";

    string enteredUsername;
    string enteredPassword;

    cout << "Admin Login" << endl;
    cout << "Username: ";
    cin >> enteredUsername;
    cout << "Password: ";
    cin >> enteredPassword;

    if (enteredUsername == adminUsername && enteredPassword == adminPassword)
    {
        cout << "Login successful!" << endl;

        vector<BloodDonor> bloodDonors = generateDummyBloodDonors();
        vector<ParentDetails> parentDetails = generateDummyParentDetails();
        vector<StudentDetails> studentDetails = generateDummyStudentDetails();

        while (true)
        {
            cout << "\nO_O Features:" << endl;
            cout << "1. Check Remaining Seats" << endl;
            cout << "2. View All Students Records" << endl;
            cout << "3. View Parents' Details" << endl;
            cout << "4. Access Blood Bank" << endl;
            cout << "5. Calculate Meal and This Month's Rents" << endl;
            cout << "6. Exit" << endl;
            cout << "Enter your choice (1-6): ";
            int option;
            cin >> option;

            switch (option)
            {

                // how many seats remains.
            case 1:

                // Generate random student details and display them
                {
                    vector<StudentDetailsRandom> studentDetails = generateStudentDetails();
                    displayStudentDetails(studentDetails);
                    // Display remaining seats
                    int remainingSeats = totalSeats - occupiedSeats;
                    cout << "We have " << totalSeats << " seats total" << endl;
                    cout << "Remaining Seats: " << remainingSeats << endl;
                }

                break;

            case 2:
                // Implement View All Boys' Records feature
                displayStudentsDetails(studentDetails);
                break;
            case 3:
                displayParentsDetails(parentDetails);
                break;
            case 4:
                displayBloodDonors(bloodDonors);
                break;
            case 5:
                // Call the calculateMealAndRents function for this month's calculation
                calculateMealAndRents();
                break;
            case 6:
                cout << "Exiting the application." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option (1-6)." << endl;
                break;
            }
        }
    }
    else
    {
        cout << "Login failed. Exiting the application." << endl;
    }

    return 0;
}

#include <iostream> // This is the header file for input and output
#include <string> // This is the header file for strings
#include <vector> // This is the header file for vectors
using namespace std;


//ideas
// Create a class for the student
// Search and filter
// Report generation >> CSV file or PDF







///// Creating a class in C++
// Here were going to create our main student class
class Student{

public:
    string name;
    int age;
    int studentID;
    float WAM;
    // Bool in C++ | True = 1 & False = 0
    bool currentlyEnrolled;


    // This is called a Constructor it initializes the class and its variables
    Student(string name, int age, int studentID, int WAM, bool currentlyEnrolled){
        this->name = name;
        this->age = age;
        this->studentID = studentID;
        this->WAM = WAM;
        this->currentlyEnrolled = currentlyEnrolled;
    };


    ///// Member Functions
    // for these functions we use '&' to pass by reference. If we dont use '&' then we would just be creating 
    // a copy of the object and not actually changing the original object

   // Member function to change grade of a student
   void changeGrade(Student& Student, float grade){
        Student.WAM = grade;
   }

    // Member function to change enrollment status of a student
    void changeEnrollmentStatus(Student& Student, bool status){
        Student.currentlyEnrolled = status;
    }

    // Member function to change name of a student
    void changeName(Student& Student, string name){
        Student.name = name;
    }

    // Member function to change age of a student
    void changeAge(Student& Student, int age){
        Student.age = age;
    }




};







int main()
{

    bool run = true;
    // Our main while loop to keep the program running
    while(run == true){





        // populating our student database
        Student student1 = Student("John", 20, 123456, 80, true);
        Student student2 = Student("Mary", 21, 123457, 92, true);
        Student student3 = Student("Peter", 19, 123458, 72, true);
        Student student4 = Student("Jane", 23, 123459, 60, true);
        Student student5 = Student("Mark", 18, 123460, 0, false);
        Student student6 = Student("Sarah", 20, 123461, 77, true);
        Student student7 = Student("James", 21, 123462, 89, true);
        Student student8 = Student("Samantha", 19, 123463, 0, false);
        Student student9 = Student("Michael", 18, 123464, 75, true);
        Student student10 = Student("Jessica", 29, 123465, 100, true);

        // Now we can store these students into a 'vector' data structure to make it easier to access
        vector<Student> students = {student1, student2, student3, student4, student5, student6, student7, student8, student9, student10};



        // the basic output to console in C++ is cout
        cout << "------- Welcome to the INFO1111 Student Records System -------" << endl;
        cout << "Please select from the following options :" << endl << endl;


    
        cout << "1. View a student" << endl;
        cout << "2. Get total amount of students" << endl;
        cout << "3. Exit" << endl;

        // The basic input from the console is cin
        int option;
        cout << "Enter your option: " << endl;
        cin >> option;
        cout << endl;
        


        ////////////////////////////////////////////////// VIEW STUDENT //////////////////////////////////////////////////
        if(option == 1){
            cout << "---- Select a student viewer option ----" << endl;
            cout << "1. View all students" << endl;
            cout << "2. View a specific student with name search" << endl;
            cout << "3. View top scoring student " << endl;
            cout << "4. Exit" << endl;

            int studentViewerOption;
            cout << "Enter your option: " << endl;
            cin >> studentViewerOption;
            cout << endl;


            ///////////////// View all students /////////////////
            if(studentViewerOption == 1){
                

                for(int i = 0; i < students.size(); i++){
                    cout << "Student Name: " << students[i].name << endl;
                    cout << "Student Age: " << students[i].age << endl;
                    cout << "Student ID: " << students[i].studentID << endl;
                    cout << "Student WAM: " << students[i].WAM << endl;
                    cout << "Student Enrolled: " << students[i].currentlyEnrolled << endl;
                    // line break for aesthetic purposes
                    cout << "-------------------------------------------" << endl;

                    cout << endl;
                }

            }
            ///////////////// View a specific student with name search /////////////////
            else if(studentViewerOption == 2){
                
                cout << "Enter the exact first name of the student you would like to view: " << endl;
                // name input
                string name;
                cin >> name;
                cout << endl;

                for(int i = 0; i < students.size(); i++){
                    if(students[i].name == name){
                        cout << "Student Name: " << students[i].name << endl;
                        cout << "Student Age: " << students[i].age << endl;
                        cout << "Student ID: " << students[i].studentID << endl;
                        cout << "Student WAM: " << students[i].WAM << endl;
                        cout << "Student Enrolled: " << students[i].currentlyEnrolled << endl;
                        // line break for aesthetic purposes
                        cout << "-------------------------------------------" << endl;

                        cout << endl;
                    }
                }
            }

            ///////////////// View top scoring student /////////////////
            else if (studentViewerOption == 3)
            {

                Student highest = student1;
                for(int i = 0; i < students.size(); i++){
                    
                    if(students[i].WAM > highest.WAM){
                        highest = students[i];
                    }
                }

                cout << "Student Name: " << highest.name << endl;
                cout << "Student Age: " << highest.age << endl;
                cout << "Student ID: " << highest.studentID << endl;
                cout << "Student WAM: " << highest.WAM << endl;
                cout << "Student Enrolled: " << highest.currentlyEnrolled << endl;
                // line break for aesthetic purposes
                cout << "-------------------------------------------" << endl;

                cout << "Press any '-' to continue" << endl;

            
                // End of function. Return to main menu
                string temp;
                cin >> temp;

                for(int i = 0; i < 30; i++){
                    cout << endl;
                }

                
            }
            



        }



        ////////////////////////////////////////////////// GET TOTAL AMOUNT OF STUDENTS //////////////////////////////////////////////////
        else if(option == 2){
            //size of function returns byte size, so we have to divide by the size of the student class
            cout << "There are " << students.size() << " students in the database" << endl;
        }
        else



        ////////////////////////////////////////////////// EXIT //////////////////////////////////////////////////
        if(option == 3){
            cout << "Thanks! Looking forward to seeing you again" << endl;
            run = false;
        }

    }

 


    return 0;
};
















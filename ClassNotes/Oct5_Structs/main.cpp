
#include <iostream>
#include <vector>
#include "functions.h"
#include <string>
#include <cctype>

//Classe Notes: Structs
//Exercise 6.1 - Define and initialize a struct to capture course information 
   

//User-Define types: struct, enum, class
// Structs must be global, put it outside of the main 
//Struct - Allows us to group variables of mixed data types together into a single unit


//Make stucts global -> outside main 
struct CourseSection{  //name of the type  //lower case - object name, Uppper case - data type name 
    //Definding what the type is 
    std::string name; //empty string 
    std::string CourseDepartAndNmbr;
    std::string semester;
    int year = 0;
    int CRN = 0; 
    std::string Instuctor;
}; 

void printCourseSection(const std::vector<CourseSection>& courses){

    for(int i = 0; i < courses.size(); i++){
    std::cout<<"Course Name: "<<courses[i].name<<std::endl;
    std::cout<<"Course Department and Number: "<<courses[i].CourseDepartAndNmbr<<std::endl;
    std::cout<<"Semester: "<<courses[i].semester<<std::endl;
    std::cout<<"Year: "<<courses[i].year<<std::endl; 
    std::cout<<"CRN: "<<courses[i].CRN<<std::endl;
    std::cout<<"Instructor's last name: "<<courses[i].Instuctor<<std::endl;
    std::cout << std::endl;
    }
    
}


int main()
{
    //inside main create object of that type 
    //Datatype/Object: CourseSection 
    //Variable name: ece2514

    //Case 1 of declaring an object
    //CourseSection ece2514{"Compution Engineering", "ECE 2514", "Fall 2026", 2026, 84097, " Dr. Soysal"}; //struct object -> Case 1 of declaring an object
    CourseSection ece2514{"Computational Engineering", "ECE 2514", "Fall", 2026, 84097, "Soysal"};
    //display - elements seperately
    std::cout<<"Course Name: "<<ece2514.name<<std::endl;
    std::cout<<"Course Department and Number: "<<ece2514.CourseDepartAndNmbr<<std::endl;
    std::cout<<"Semester: "<<ece2514.semester<<std::endl;
    std::cout<<"Year: "<<ece2514.year<<std::endl; 
    std::cout<<"CRN: "<<ece2514.CRN<<std::endl;
    std::cout<<"Instructor's last name: "<<ece2514.Instuctor<<std::endl;
    std::cout<<"--------------------"<<std::endl;
    std::cout << std::endl;
 

    
    CourseSection ece2024{"Circuits and Devices", "ECE 2024", "Fall", 2026, 84089, "Ball"};
    CourseSection ece2544{"Fundamentals Digital Systems", "ECE 2544", "Fall", 2026, 84100, "Cooper"};
    CourseSection arbc1106{"Elementary Arabic", "ARBC 1106", "Fall", 2026, 81054, "Al-Ahmad"};
    //object/data type = CourseSection, variable name = course and the number of course in the vector is 4 
    std::vector<CourseSection> courseSection(4); //object/data type = CourseSection, variable name = course and the number of course in the vector is 5 
    courseSection[0] = ece2514; 
    courseSection[1] = ece2024;
    courseSection[2] = ece2544;
    courseSection[3] = arbc1106;
    printCourseSection(courseSection);
    

   //Inclass example of declaring an object (Case 2 of structs equaivalent)
   /**
    *  int x = 0; 
        x = 5; 
    */
    //-or- 

   
    //Case 2 of declaring an object
    //CourseSection ece2514; 
    // ece2514.name = "Compution Engineering";
    // ece2514.CourseDepartAndNmbr = "ECE 2514"; 
    // ece2514.semester = "Fall"; 
    // ece2514.year = 2026; 
    // ece2514.CRN = 84097; 
    // ece2514.Instuctor = "Dr. Soysal";

    // //display - elements seperately
    // std::cout<<"--------------------"<<std::endl; 
    // std::cout<<"Course Name: "<<ece2514.name<<std::endl;
    // std::cout<<"Course Department and Number: "<<ece2514.CourseDepartAndNmbr<<std::endl;
    // std::cout<<"Semester: "<<ece2514.semester<<std::endl;
    // std::cout<<"Year: "<<ece2514.year<<std::endl; 
    // std::cout<<"CRN: "<<ece2514.CRN<<std::endl;
    // std::cout<<"Instructor's last name: "<<ece2514.Instuctor<<std::endl;
    // std::cout << std::endl;

    // //Part 2 
    // CourseSection ece2024; 
    // ece2024.name = "Circuits and Devices";
    // ece2024.CourseDepartAndNmbr = "ECE 2024"; 
    // ece2024.semester = "Fall"; 
    // ece2024.year = 2026; 
    // ece2024.CRN = 84089; 
    // ece2024.Instuctor = "Dr. Ball"; 

    // CourseSection ece2544; 
    // ece2544.name = "Fundamentals Digital Systems";
    // ece2544.CourseDepartAndNmbr = "ECE 2544"; 
    // ece2544.semester = "Fall"; 
    // ece2544.year = 2026; 
    // ece2544.CRN = 84100; 
    // ece2544.Instuctor = "Dr. Cooper"; 
    
    // CourseSection arbc1106; 
    // arbc1106.name = "Elementry Arabic";
    // arbc1106.CourseDepartAndNmbr = "ARBC 1106"; 
    // arbc1106.semester = "Fall"; 
    // arbc1106.year = 2026; 
    // arbc1106.CRN = 81054; 
    // arbc1106.Instuctor = "Dr. Al-Ahmad"; 

    //vetor 
    //std::vector<int>vec(5); //declaring an interger vector name vec and index number is 5 
    // std::vector<CourseSection> courses(4); //object/data type = CourseSection, variable name = course and the number of course in the vector is 5 
    // courses[0] = ece2514; 
    // courses[1] = ece2024;
    // courses[2] = ece2544;
    // courses[3] = arbc1106;

    // printCourseSection(courses);
    

 


    return 0;
}
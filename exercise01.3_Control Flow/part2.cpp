#include <iostream>
#include <limits>       // Why might this be useful?  Check it out.


int main()
{
    //User enters grades -> keep reading them -> negative number means STOP 
    //Calculate the min, max, and average of the grades entered by the user
    // grade stores the current grade entered by the user
    // min_grade stores the minimum grade, 
    // max_grade stores the maximum grade, 
    // sum_grade stores the sum of all grades entered
    double grade, min_grade, max_grade, sum_grade = 0;
    int count = 0; // count stores the number of grades entered by the use
    std::cout << "Enter grades (negative number to stop): "; // asking the user to enter grades 
    std::cin >> grade; // reading the first grade from the user
    if (grade >= 0){
        min_grade = grade; // initialize the minimum grade with the first grade entered
        max_grade = grade; // uses the first grade entered to initialize the maximum grade
        while(grade >= 0){ //Keeps looping as long as the grade is not negative
            sum_grade += grade; // adds the current grade to the sum of all grades entered
            count++; // increments the count of grades entered
            if(grade < min_grade){ //checks if the current grade is smaller than the min
                min_grade = grade; //updates the minimum grade to the currrent grade
                }
            if(grade > max_grade){ //checks if the current grade is larger than the max
                max_grade = grade; //updates the maximum grade to the currrent grade
                }
            std::cin >> grade; // reads the next grade from the user; negative vaule will stop the loop
        }
        double average_grade = sum_grade / count; // calculates the average grade
        std::cout << "Minimum grade: " << min_grade << '\n'; // prints the minimum grade
        std::cout << "Maximum grade: " << max_grade << '\n';    // prints the maximum grade
        std::cout << "Average grade: " << average_grade << '\n'; // prints the average grade
    }

    return 0;
}
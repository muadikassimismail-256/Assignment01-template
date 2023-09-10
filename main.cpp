#include <iostream>
#include <cmath>
#include <iomanip>
int main(){
    
    int num_students, num_tests;
    //prompt the user to input the num of students and number of scores
    std::cout<<"Enter the number of students: "<<std::endl;
    std::cin>>num_students;
    std::cout<<"Enter the number of tests: "<<std::endl;
    std::cin>>num_tests;
    //create array to store student names and test scores
    std::string student_names[num_students];
    double test_scores[num_students][num_tests];
    for(int i=0;i<num_students;i++){
        std::cout<<"Enter the name of student"<<i+1<<": "<<std::endl;
        std::cin>>student_names[i];
        std::cout<<"Enter the"<<num_tests<<" test scores for"<<student_names[i]<<": "<<std::endl;
        for(int j=0;j<num_tests;j++){
            std::cin>>test_scores[i][j];
        }
    }
    //calculate and display students averages
    std::cout<<"\nstudent averages"<<std::endl;
    for(int i=0;i<num_students;i++){
        double student_total=0;
        for(int j=0;j<num_tests;j++){
            student_total += test_scores[i][j];
        }
        double student_average= student_total/num_tests;
        std::cout<<student_names[i]<<": "<<std::fixed<<std:: setprecision(1)<< student_average<<std::endl;

    }
    //calculate and display class average
    double class_total=0;
    for(int i=0;i<num_students;i++){
    for(int j=0;j<num_tests;j++){
        class_total += test_scores[i][j];
    }
    }
    double class_average=class_total/(num_students*num_tests);
    std::cout<<"\nClass average: "<<std::fixed <<std::setprecision(1)<<class_average<<std::endl;
    //calculate and display test averages
    std::cout<<"\nTest Averages:"<<std::endl;
    for(int j=0;j<num_tests;j++){
        double test_total=0;
        for(int i=0;i<num_students;i++){
            test_total += test_scores[i][j];
        }
        double test_avrage=test_total/num_students;
        std::cout<<"Test "<<j+1<<": "<<std::fixed<<std::setprecision(1)<<test_avrage<<std::endl;
    }
    return 0;
}

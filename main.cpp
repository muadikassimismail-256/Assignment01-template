#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    int num_students, num_tests;
    //prompt the user to input the num of students and number of scores
    cout<<"Enter the number of students: "<<endl;
    cin>>num_students;
    cout<<"Enter the number of tests: "<<endl;
    cin>>num_tests;
    //create array to store student names and test scores
    string student_names[num_students];
    double test_scores[num_students][num_tests];
    for(int i=0;i<num_students;i++){
        cout<<"Enter the name of student"<<i+1<<": "<<endl;
        cin>>student_names[i];
        for(int j=0;j<num_tests;j++){
            cout<<"Enter the test scores"<<j+1<<"for"<<student_names[i]<<": "<<endl;
            cin>>test_scores[i][j];
        }
    }
    //calculate and display students averages
    cout<<"\nstudent averages"<<endl;
    for(int i=0;i<num_students;i++){
        double student_total=0;
        for(int j=0;j<num_tests;j++){
            student_total += test_scores[i][j];
        }
        double student_average= student_total/num_tests;
        cout<<student_names[i]<<": "<<fixed<< setprecision(2)<< student_average<<endl;

    }
    //calculate and display class average
    double class_total=0;
    for(int i=0;i<num_students;i++){
    for(int j=0;j<num_tests;j++){
        class_total += test_scores[i][j];
    }
    }
    double class_average=class_total/(num_students*num_tests);
    cout<<"\nClass average: "<<fixed <<setprecision(2)<<class_average<<endl;
    //calculate and display test averages
    cout<<"\nTest Averages:"<<endl;
    for(int j=0;j<num_tests;j++){
        double test_total=0;
        for(int i=0;i<num_students;i++){
            test_total += test_scores[i][j];
        }
        double test_avrage=test_total/num_students;
        cout<<"Test "<<j+1<<": "<<fixed<<setprecision(2)<<test_avrage<<endl;
    }
    return 0;
}

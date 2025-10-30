#include <iostream>

using namespace std;

int main(){
    int n, quizno, assignmentno;
    double quizzmarks, obtained_marks_quiz, total_quiz_percent = 0.0; //gotta change the _ frrr
    double assignmentmarks, obtained_assignment_marks, total_assignment_percent = 0.0;
    double sessional1marks, sessional1_obtained, sessional2marks, sessional2_obtained, sessional1percent, sessional2percent;
    double projectmarks, project_marks_obtained, project_percent;
    double finalsmarks, finals_marks_obtained, finals_percentage;
    double totalpercentageobtained;
    cout << "Enter number of courses: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        total_assignment_percent = 0;
        total_quiz_percent = 0;
        cout << "Enter number of quizzes";
        cin >> quizno;
        double percentperquiz = 10.0/quizno;
        for(int j = 0; j < quizno; j++){
            cout << "Enter Total quiz marks:";
            cin >> quizzmarks;
            cout << "Enter Obtained marks:";
            cin >> obtained_marks_quiz;
            double percentobtained = (obtained_marks_quiz/quizzmarks) * percentperquiz;
            total_quiz_percent += percentobtained;
        }

        cout << "Enter number of assignments";
        cin >> assignmentno;
        double percentperassignment = 10.0/assignmentno;
        for(int j = 0; j < assignmentno; j++){
            cout << "Enter Total assignment marks:";
            cin >> assignmentmarks;
            cout << "Enter Obtained marks:";
            cin >> obtained_assignment_marks;
            double percentobtained_assignment = (obtained_assignment_marks/assignmentmarks) * percentperassignment;
            total_assignment_percent += percentobtained_assignment;
        }
        
        cout << "Enter sessional 1 total marks:";
        cin >> sessional1marks;
        cout << "Enter sessional 1 marks obtained:";
        cin >> sessional1_obtained;
        sessional1percent = (sessional1_obtained/sessional1marks) * 15.0;

        cout << "Enter sessional 2 total marks:";
        cin >> sessional2marks;
        cout << "Enter sessional 2 marks obtained:";
        cin >> sessional2_obtained;
        sessional2percent = (sessional2_obtained/sessional2marks) * 15.0;

        cout << "Enter Total Project Marks:";
        cin >> projectmarks;
        cout << "Enter Obtained Project Marks:";
        cin >> project_marks_obtained;
        project_percent = (project_marks_obtained/projectmarks) * 10;

        cout << "Enter Total Final exam marks:";
        cin >> finalsmarks;
        cout << "Enter Final exam marks obtained:";
        cin >> finals_marks_obtained;
        finals_percentage = (finals_marks_obtained/finalsmarks) * 40;

        totalpercentageobtained = finals_percentage + sessional1percent + sessional2percent + project_percent + total_quiz_percent + total_assignment_percent;

        cout << "Total percentage obtained: " << totalpercentageobtained << endl;
        

    }

}

#include <iostream>
#include <vector>
#include <string>
#include "functions.h"

using namespace std;

int main() {
    int numStudents;
    cout << "학생 수를 입력하세요: ";
    cin >> numStudents;

    vector<Student> classRoom(numStudents);

    // 학생 정보 입력
    for (int i = 0; i < numStudents; i++) {
        cout << "\n" << i + 1 << "번째 학생 이름: ";
        cin >> classRoom[i].name;

        cout << "3개의 점수 입력 (공백 구분): ";
        for (int j = 0; j < 3; j++) {
            int score;
            cin >> score;
            classRoom[i].grades.push_back(score);
        }
        // 평균 계산 함수 사용
        classRoom[i].average = calculateAverage(classRoom[i].grades);
    }

    // 결과 출력
    cout << "\n--- 학생 성적 목록 ---" << endl;
    double maxAvg = -1.0;
    string topStudent = "";

    for (int i = 0; i < numStudents; i++) {
        cout << "이름: " << classRoom[i].name
            << ", 평균: " << classRoom[i].average << endl;

        //  최고 평균 계산
        if (classRoom[i].average > maxAvg) {
            maxAvg = classRoom[i].average;
            topStudent = classRoom[i].name;
        }
    }

    // 최고 점수 학생 출력
    if (numStudents > 0) {
        cout << "\n 최고 평균 점수 학생: " << topStudent
            << " (" << maxAvg << "점)" << endl;
    }

    return 0;
}

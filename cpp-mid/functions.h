#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 학생 구조체 정의
struct Student {
    string name;
    vector<int> grades;
    double average;
};

// 함수 선언
double calculateAverage(vector<int> grades);

#endif

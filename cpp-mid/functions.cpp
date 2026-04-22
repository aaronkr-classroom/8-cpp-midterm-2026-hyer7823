#include "functions.h"

double calculateAverage(vector<int> grades) {
    if (grades.empty()) return 0.0;

    double total = 0;
    // 1. 철자 및 구문 오류 수정 (grads -> grades, ; 추가)
    // 2. 점수 합계가 올바르게 계산되도록 수정 (total += grades[i])
    for (int i = 0; i < grades.size(); i++) {
        total += grades[i];
    }

    // 3. 평균이 소수로 나오도록 수정 
    return total / grades.size();
}


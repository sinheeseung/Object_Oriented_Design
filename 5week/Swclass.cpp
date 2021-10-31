/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "Student.h"
#include "Swclass.h"
#include <string>

Swclass::Swclass(Student st, int num, int sub_class, std::string name,
                int hw, int mid, int term, int fi) : student_(st),
                sub_num_(num), sub_class_(sub_class), sub_name_(name),
                hw_per_(hw), mid_per_(mid), term_per_(term), final_per_(fi) {}

std::string Swclass::getInfo() {
        int student_id = student_.getStudentId();
        int score_hw = student_.getScoreHw();
        int score_mid = student_.getScoreMidterm();
        int score_term = student_.getScoreTermProject();
        int score_final = student_.getScoreFinaltest();

        int sum = score_hw * hw_per_ / 100 + score_mid * mid_per_ / 100
                  + score_term * term_per_ / 100
                  + score_final * final_per_ / 100;

        std::string grade;
        if (sum >= 90) {
                grade = "A";
        } else if (sum >= 80) {
                grade = "B";
        } else if (sum >= 70) {
                grade = "C";
        } else if (sum >= 60) {
                grade = "D";
        } else {
                grade = "F";
        }
        return std::to_string(student_id) + " " + grade;
}

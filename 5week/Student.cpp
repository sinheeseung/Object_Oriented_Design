/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include "Student.h"

Student::Student(int id, std::string name, int sh, int sm, int st, int sf)
        : student_id_(id), name_(name), score_hw_(sh), score_midterm_(sm),
         score_termproject_(st), score_finaltest_(sf) { }

std::string Student::getName() {
        return name_;
}

int Student::getStudentId() {
        return student_id_;
}

int Student::getScoreHw() {
        return score_hw_;
}

int Student::getScoreMidterm() {
        return score_midterm_;
}

int Student::getScoreTermProject() {
        return score_termproject_;
}

int Student::getScoreFinaltest() {
        return score_finaltest_;
}

std::string Student::getInfo() {
        return "학번: " + std::to_string(student_id_) +", 이름: "+ name_;
}

void Student::setName(std::string name) {
        name_ = name;
}

void Student::setStudentId(int num) {
        student_id_ = num;
}

void Student::setScoreHw(int score) {
        score_hw_ = score;
}

void Student::setScoreMidterm(int score) {
        score_midterm_ = score;
}

void Student::setScoreTermProject(int score) {
        score_termproject_ = score;
}

void Student::setScoreFinaltest(int score) {
        score_hw_ = score;
}

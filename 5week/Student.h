/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_5WEEK_STUDENT_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_5WEEK_STUDENT_H_

#include <string>
class Student {
 public:
                Student();
                explicit Student(int id, std::string name, int sh,
                                 int sm, int st, int sf);

                void setName(std::string name);
                void setStudentId(int student_id_);
                void setScoreHw(int score_hw_);
                void setScoreMidterm(int score_midterm_);
                void setScoreTermProject(int score_termproject_);
                void setScoreFinaltest(int score_finaltest_);

                std::string getInfo();
                std::string getName();
                int getStudentId();
                int getScoreHw();
                int getScoreMidterm();
                int getScoreTermProject();
                int getScoreFinaltest();

 private:
                std::string name_;
                int student_id_;
                int score_hw_;
                int score_midterm_;
                int score_termproject_;
                int score_finaltest_;
};

#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_5WEEK_STUDENT_H_

/*!
 *     Copyright:  Copyright (c)  2021, HeeSeung.me
 */

#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_CIRCLE_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_CIRCLE_H_
class Circle {
 public:
        explicit Circle(int radius);
        int radius() const;
        Circle operator+(const Circle& circle) const;
 private:
        const int radius_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_CIRCLE_H_

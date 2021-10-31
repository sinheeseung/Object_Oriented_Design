/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_TRIANGLE_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_TRIANGLE_H_
class Triangle {
 public:
        explicit Triangle(int height, int base);
        int height() const;
        int base() const;
        Triangle operator+(const Triangle& triangle) const;
 private:
        const int height_;
        const int base_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_TRIANGLE_H_

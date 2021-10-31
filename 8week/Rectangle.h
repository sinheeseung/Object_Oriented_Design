/*!
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */

#ifndef DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_RECTANGLE_H_
#define DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_RECTANGLE_H_
class Rectangle {
 public:
        explicit Rectangle(int height, int width);
        int height() const;
        int width() const;
        Rectangle operator+(const Rectangle& rect) const;
 private:
        const int height_;
        const int width_;
};
#endif  // DESKTOP_OBJECT_ORIENTED_DESIGN_8WEEK_RECTANGLE_H_

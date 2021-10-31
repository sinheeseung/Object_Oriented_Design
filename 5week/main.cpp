/*
 *     Copyright:  Copyright (c) 2021, HeeSeung.me
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include "Student.h"
#include "Swclass.h"

std::vector<std::string> split(std::string s, std::string separator) {
        std::vector<std::string> v;
        char *c = strtok((char *)s.c_str(), separator.c_str());
        while (c) {
                v.push_back(c);
                c = strtok(NULL, separator.c_str());
        }
        return v;
}

int main(int argc, char **argv) {
        std::ifstream fin(argv[1]);
        if (!fin) {
                std::cout << "Error, no such file exists" << "\n";
                exit(100);
        }
        std::vector<std::string> v;
        std::vector<Student> students;
        std::vector<Student>::iterator iter;
        std::string s;
        while (fin.peek() != EOF) {
                std::getline(fin, s);
                v = split(s, " ");
                int id = std::stoi(v[0]);
                std::string name = v[1];
                int sh = std::stoi(v[2]);
                int sm = std::stoi(v[3]);
                int st = std::stoi(v[4]);
                int sf = std::stoi(v[5]);
                Student student1(id, name, sh, sm, st, sf);
                students.push_back(student1);
        }
        fin.close();

        std::ifstream fi(argv[2]);
        if (!fi) {
                std::cout << "Error, no such file exists" << "\n";
                exit(100);
        }

        while (fi.peek() != EOF) {
                std::getline(fi, s);
                v = split(s, " ");
                int num = std::stoi(v[0]);
                int sub_class = std::stoi(v[1]);
                std::string name = v[2];
                int hw = std::stoi(v[3]);
                int mid = std::stoi(v[4]);
                int term = std::stoi(v[5]);
                int fi = std::stoi(v[6]);
                for (iter = students.begin(); iter != students.end(); iter++) {
                        Swclass swclass(*iter, num, sub_class,
                                        name, hw, mid, term, fi);
                        std::cout << swclass.getInfo() << "\n";
                }
       }
}

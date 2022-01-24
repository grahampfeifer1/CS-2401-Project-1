#ifndef CHECKBOOK
#define CHECKBOOK

#include <iostream>
#include <string>
#include "date.h"
#include "check.h"

class Checkbook{
    public:
        // CONSTRUCTORS
        Checkbook();
        // INPUT/OUTPUT FUNCTIONS
        void load_from_file(std::ostream& outs);
        void write_check(std::istream& ins);
        // ACCESSORS
        double get_balance() {return balance;}
        // SORTS
        void number_sort();
        void payto_sort();
        void date_sort();
        // OTHER MEMBER FUNCTIONS
        void deposit(double depamt);
        void show_all(std::ostream& outs);
        void remove(int rmnum);
        void show(std::string& target);
        double average();
        void save(std::ostream& outs);
    private:
        Check checks[200];
        double balance;
        int used;
};

#endif
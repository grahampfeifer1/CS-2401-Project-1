#include <string>
#include "check.h"
#include "checkbook.h"

using namespace std;

Checkbook::Checkbook(){
    balance = 0;
    used = 0;
}
// INPUT AND OUTPUT FUNCTIONS
void Checkbook::load_from_file(std::ostream& outs){
    //TODO
}

void Checkbook::write_check(std::istream& ins){
    //TODO
}
// SORTING FUNCTIONS
void Checkbook::number_sort(){
    //TODO
}

void Checkbook::payto_sort(){
    //TODO
}

void Checkbook::date_sort(){
    //TODO
}
// OTHER MEMBER FUNCTIONS
void Checkbook::deposit(double depamt){
    if(depamt >= .01){
        balance += depamt;
    }
}
        
void Checkbook::show_all(std::ostream& outs){
    //TODO
}

void Checkbook::remove(int rmnum){
    //TODO
}
        
void Checkbook::show(std::string& target){
    //TODO
}
        
double Checkbook::average(){
    //TODO
}

void Checkbook::save(std::ostream& outs){
    //TODO
}
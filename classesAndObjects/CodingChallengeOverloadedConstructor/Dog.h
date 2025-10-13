#ifndef _DOG_H_
#define _DOG_H_
#include <string>


class Dog{
    private:
        std::string name;
        int age;
        
    public:
        Dog(std::string name_obj, int age_obj);
        std::string get_name();
        void set_name(std::string n);
        int get_age();
        void set_age(int n);
        void dog_bark();
};

#endif
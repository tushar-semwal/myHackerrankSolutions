#include <iostream>
//#include <string>
#include <sstream>

//First time trying to avoid namespace//
//But i think for competitive coding, using namespace is better

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    private:
    int age,standard;
    std::string first_name;
    std::string last_name;
    
    public:
    //getters
    int get_age(){ return age;}
    int get_standard() { return standard;}
    std::string get_first_name(){ return first_name;}
    std::string get_last_name(){ return last_name;}
    
    //setters
    void set_age(int x)
    {
        age = x;
    }
    
    void set_first_name(std::string x)
    {
        first_name = x;
    }
    
    void set_last_name(std::string x)
    {
        last_name = x;
    }
  
    void set_standard(int x)
    {
        standard = x;
    }
    
    std::string to_string()
    {
        std::stringstream ss;
        ss<<age<<","<<first_name<<","<<last_name<<","<<standard;
        return ss.str();  
    }
}
;

//using namespace std;

int main() {
    int age, standard;
    std::string first_name, last_name;
    
    std::cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    std::cout << st.get_age() << "\n";
    std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    std::cout << st.get_standard() << "\n";
    std::cout << "\n";
    std::cout << st.to_string();
    
    return 0;
}

#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Student{
    private:
    int a,b;
    string c,d,e;
    public:
    void set_age(int age)
    {
        a = age;
    }
    void set_standard(int cl)
    {
        b = cl;
    }
    void set_first_name(string name1)
    {
        c = name1;
    }
    void set_last_name(string name2)
    {
        d  = name2;
    }
    int get_age()
    {
        return a;
    }
    int get_standard()
    {
        return b;
    }
    string get_first_name()
    {
        return c;
    }
    string get_last_name()
    {
        return d;
    }
    string to_string()
    {
        stringstream stream1,stream2;
        stream1<<a;
        string str,str2;
        stream1>>str;
        stream2<<b;
        stream2>>str2;
        e = str+","+c+","+d+","+str2;
        return e;
    }
    
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    //cin>>age>>standard;
    //getline(cin,first_name);
    //getline(cin,last_name);
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
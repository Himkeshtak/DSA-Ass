# include <iostream>
using namespace std;

class demo{
    private: int a;
    protected: int b;
    public:
          int c;
            void setdata(int x, int y, int z)
            {
                a = 10;
                b = 20;
                c = 30;
            }
            void show()
            {
                cout<<a<<b<<c<<endl;
            }
    
};

class child: public demo{
    public:
        void access()
        {
            a=10; // this will give an error because a is private in the parent class and we cannot access it in the child class
            b=20;
            c=30;
        }
};

int main()
{
    demo d;
    d.set();//
    d.show();
    d.a=5; // this will give an error because a is private in the class and we cannot access it outside the class
    d.b=10; // this will give an error because b is protected in the class and we cannot access it outside the class
    d.c=40;
    d.show();
    cout<<d.c;
};
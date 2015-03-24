#include <string>
using namespace std;

class bmi{
    public:
        bmi();
        bmi(int h,int m);
        void set(int h,int m);
        double get();
        string category();
    private:
        int height,mass;
        double b;
};
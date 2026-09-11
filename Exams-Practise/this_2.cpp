#include<iostream>
using namespace std;
class ui{
    public:
    ui& stackedWidget(){
        cout<<"StackedWidget called";
        return *this;
    }
    ui& setCurrentIndex(){
        cout<<"SetCurrentIndex called";
        return *this;
    }
    void hide(){
        cout<<"Hide called";
    }
};
int main()
{
    ui Mainwindow;   
    Mainwindow.stackedWidget().setCurrentIndex().hide();
return 0;
}
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    
    while (true)
    {   
        int x = frame;
        int y = x-2;

        
        auto can = Canvas(70,70);
        can.DrawPointEllipseFilled(20+y,20,10,20, ftxui::Color::Green1);
        can.DrawPointEllipseFilled(22+y,22, 6,10, ftxui::Color::White);
        can.DrawPointEllipseFilled(12+y,37, 8, 4, ftxui::Color::Orange1);
        can.DrawPointEllipseFilled(28+y,37, 8, 4, ftxui::Color::Orange1);
        
        //can.DrawPointCircle(46,10,2, ftxui :: Color::Black);
        //can.DrawPointEllipseFilled(30,30,10,5);
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element personaje = spinner(21, frame);
        Element lienzo = bgcolor(Color::Red, canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.05s);
        frame++;
    }

    return 0;
}
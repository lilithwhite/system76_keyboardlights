#include <iostream>
#include <fstream>
using namespace std;

int main (int argc, char *argv[]) {
    ofstream left;
    ofstream center;
    ofstream right;
    left.open ("/sys/class/leds/system76::kbd_backlight/color_left", ios::trunc);
    center.open ("/sys/class/leds/system76::kbd_backlight/color_center", ios::trunc);
    right.open ("/sys/class/leds/system76::kbd_backlight/color_right", ios::trunc);
    left << argv[1];
    center << argv[2];
    right << argv[3];
    return 0;
}

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void mirrors_lirik() {
    pair<string, double> lines[] = {
        {"Now, you're the inspiration of this precious song", 0.08},
        {"And I just wanna see your face light up since you put me on", 0.07},
        {"So now I say goodbye to the old me, it's already gone", 0.08},
        {"And I can't wait, wait, wait, wait, wait to get you home", 0.07},
        {"Just to let you know, ", 0.06},
        {"you are....", 0.06},
    };
    double delays[] = {1.5, 1.6, 1.7, 0.8, 0.6, 0.5};

    for (int i = 0; i < 6; ++i) {
        for (char c : lines[i].first) {
            cout << c << flush;
            this_thread::sleep_for(chrono::duration<double>(lines[i].second));
        }
        this_thread::sleep_for(chrono::duration<double>(delays[i]));
        cout << endl;
    }
}

int main() {
    mirrors_lirik();
    return 0;
}

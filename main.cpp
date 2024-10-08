#include <iostream>
#include <queue>

#include "menu.hpp"
#include "fifo.hpp"

int main(int argc, char *argv[])
{
    int choice = display_main_menu();
    // TODO: fifo, sjf, rr, ps, ljf, srtf, lrtf

    std::queue<double> q = q_with_vec({4.0, 5.0, 2.0, 9.4, 9.1, 1.0});
    fifo_sim(q);
    return 0;
}

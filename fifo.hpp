#ifndef FIFO_HPP
#define FIFO_HPP

#include <iostream>
#include <queue>
#include <format>

void fifo_sim(std::queue<double> q)
{
    std::cout << std::format("++{:^64}++", "First-In First-Out") << std::endl;
    std::cout << "Execution order:";
    while (!q.empty())
    {
        std::cout << q.front() << '\t';
        q.pop();
    }
    std::cout << std::endl;
    std::cout << std::format("{:^64}", "+++ FIFO simulation report +++") << std::endl;
    double waitingTime = cal_waiting_time(q);
    std::cout << std::format("{:^64}", "+++ FIFO simulation ended +++") << std::endl;
}

std::queue<double> q_with_vec(std::vector<double> v)
{
    std::queue<double> q;
    for (auto val : v)
    {
        q.push(val);
    }
    return q;
}

double cal_waiting_time(std::queue<double> &q)
{
    double waiting_time = 0.0;
    for (size_t i = 1; i < q.size(); i++)
    {
        waiting_time += i;
    }
    return waiting_time;
}

#endif // FIFO_HPP
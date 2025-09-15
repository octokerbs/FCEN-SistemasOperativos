#include <iostream>
#include <semaphore>
#include <thread>
#include <vector>
#include <random>

const int N = 10;

std::counting_semaphore<N> barrera(0);
std::mutex mtx;
int terminaronImplementar = 0;

void implementarTP()
{
}

void experimentar()
{
}

void ProcesoEstudiante()
{
    implementarTP();

    mtx.lock();
    terminaronImplementar++;

    if (terminaronImplementar == N)
    {
        barrera.release();
    }
    mtx.unlock();

    barrera.acquire();
    barrera.release();

    experimentar();
}

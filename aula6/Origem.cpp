#include<thread>
#include<iostream>
#include<chrono>
#include<mutex>
#include<atomic>

//using namespace std;
//unsigned int contador = 0;
std::atomic <unsigned int> contador = 0;

std::mutex locker;

void fun_thread()
{
	for (int i = 0; i < 10; i++) {
		printf("Esperar thread:  %d..\n", std::this_thread::get_id());
		std::cout << "Esperar thread: " << std::this_thread::get_id() << std::endl;
		//timer sleep
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		contador++;
	}

}


int main() {

	std::thread thread01(fun_thread);

	std::thread thread02(fun_thread);

	thread01.join();
	thread02.join();
	int contador2 = contador;
	printf("Contador %d", contador.load());
}
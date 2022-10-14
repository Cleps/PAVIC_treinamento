#include<thread>
#include<iostream>
#include<chrono>

unsigned int contador = 0;

void fun_thread()
{
	for (int i = 0; i < 10; i++) {
		printf("Esperar thread..\n", std::this_thread::get_id());
		
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
	
	printf("Contador %d");
}
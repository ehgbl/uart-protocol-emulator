#include <iostream>
#include <queue>
#include <condition_variable>
#include <bitset>
//to enable multithreading
#include <thread>
#include <chrono>
//this is for communication and synch bn threads
#include <mutex> 

//These are the global variables 
std::queue<std::string> buffer;
std::mutex mtx; 
std::condition_variable synch;

//Sending and recieving data
//Parity calculation
//Start and stop bits for UART frames
//Buffer for temporary data hold

//Sending data over UART






int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
};

